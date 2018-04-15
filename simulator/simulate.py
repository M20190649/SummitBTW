"""
Author: EylonSho

Main simulator script.
Initializes SUMO and its dependencies, and applies the scheduler.
"""
import inspect
import logging
import optparse
import sys

import os
import traci
from sumolib import checkBinary

from traci import FatalTraCIError

from scheduler.scheduler import AdvancedScheduler
from simulator.realtime.city import City
from statistics.realtime import RealTime
from simulator.streaming.screenshot import get_screenshot


def get_options():
    """
    Parsing options from command line, for simulation customizations.
    :return: simulation settings
    """
    opt_parser = optparse.OptionParser()
    opt_parser.add_option("--nogui", action="store_true",
                          default=False, help="run the commandline version of sumo")
    opts, _ = opt_parser.parse_args()
    return opts


def run_simulate(scheduler_algorithm=AdvancedScheduler, real_time=True, take_screenshots=False):
    """
    Execute the simulation loop, and applying the scheduler in each step.
    :type scheduler_algorithm: AbstractScheduler
    :param scheduler_algorithm: the scheduling algorithm to simulate with
    :param real_time: whether to use real time statistics or not
    :return: None
    """
    logging.info('Initializes simulation data')
    city = City()
    my_scheduler = scheduler_algorithm(city)
    if real_time:
        thread = RealTime(city)
        thread.start()
    simulation_ended = False

    logging.info('Starting simulation')
    while not simulation_ended:
        if real_time:
            thread.lock.acquire()
        if traci.simulation.getMinExpectedNumber() > 0:
            my_scheduler.schedule()
            traci.simulationStep()
            # TODO: allow scheduling screenshots such that they're not taken every timestep
            if take_screenshots:
                get_screenshot()
        else:
            if real_time:
                thread.end_simulation_event.set()
            simulation_ended = True
        if real_time:
            thread.lock.release()
    logging.info('Simulation is finished')
    if real_time:
        thread.join()


def run_sumo(config_file, scheduler, real_time=True, gui=False, output_file="tripinfo_realtime.xml"):
    """
    run a full sumo simulation.
    :param config_file: the config file for the simulation
    :param real_time: whether to use real time statistics or not
    :param scheduler: the scheduling algorithm to simulate with
    :param gui: whether to run a gui simulation or not
    :param output_file: the file path for the simulation's output
    :return: None
    """
    try:
        if not gui:
            _sumo_binary = checkBinary('sumo')
        else:
            _sumo_binary = checkBinary('sumo-gui')

        sumo_parameters = [_sumo_binary, '-c', config_file, '--no-warnings']

        if output_file:
            sumo_parameters += ['--tripinfo-output', output_file]

        traci.start(sumo_parameters)

        run_simulate(scheduler_algorithm=scheduler, real_time=real_time)
        traci.close()
        sys.stdout.flush()

    except FatalTraCIError:
        logging.info("Simulation has been closed.")


def run_simulation_example(simulation_example, *args, **kwargs):
    """
    Run full simulation example given the folder of the simulation files.
    As long as it contains sumocfg file.
    :param simulation_example: path to folder of simulation files
    :param args: other arguments as defined in run_sumo() function
    :return: None
    """
    try:
        simulator_path = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))
        examples_path = simulator_path + "/examples/data/" + simulation_example
        sumocfg = [f for f in os.listdir(examples_path) if f.endswith('.sumocfg.xml')][0]
        run_sumo(examples_path + "/" + sumocfg, *args, **kwargs)
    except IndexError:
        logging.error("No sumocfg file in this simulation example")
        raise ValueError("Insert example with sumocfg file")


if __name__ == "__main__":
    options = get_options()

    # this script has been called from the command line. It will start sumo as a
    # server, then connect and run
    if options.nogui:
        sumo_binary = checkBinary('sumo')
    else:
        sumo_binary = checkBinary('sumo-gui')

    if len(sys.argv) != 2:
        sys.exit('Usage: python simulate.py <<*.sumocfg config file>>')

    sumo_config = sys.argv[1]

    # this is the normal way of using traci. sumo is started as a
    # subprocess and then the python script connects and runs
    traci.start([sumo_binary, '-c', sumo_config, '--tripinfo-output', 'tripinfo_realtime.xml', '--no-warnings'])

    run_simulate()
    traci.close()
    sys.stdout.flush()
    print("Simulation ended successfully!")
    sys.exit()
