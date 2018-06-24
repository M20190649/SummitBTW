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

from scheduler.max_occupancy_scheduler import MaxOccupancyScheduler
from scheduler.mixed_scheduler import MixedScheduler
from scheduler.scheduler import AdvancedScheduler
from scheduler.scheduler_constants import schedulers_name_map
from scheduler.static_scheduler import StaticScheduler
from simulator.realtime.city import City
from statistics.realtime import RealTime
from simulator.streaming.screenshot import get_screenshot
from pathlib import Path


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


def run_simulate(sumo_network_path, scheduler_algorithm, real_time=False, take_screenshots=False):
    """
    Execute the simulation loop, and applying the scheduler in each step.
    :type scheduler_algorithm: AbstractScheduler
    :param scheduler_algorithm: the scheduling algorithm to simulate with
    :param real_time: whether to use real time statistics or not
    :return: None
    """
    logging.info('Initializes simulation data')
    city = City(sumo_network_path)
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

        # sumo_parameters = [_sumo_binary, '-c', config_file, '--no-warnings']
        sumo_parameters = [_sumo_binary, '-c', config_file]

        if output_file:
            sumo_parameters += ['--tripinfo-output', output_file]

        traci.start(sumo_parameters)

        run_simulate(config_file, scheduler_algorithm=scheduler, real_time=real_time)
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


def run_the_script(tripinfo=True, without_gui=False, exit_after=True):
    options = get_options()

    # this script has been called from the command line. It will start sumo as a
    # server, then connect and run
    if options.nogui or without_gui:
        sumo_binary = checkBinary('sumo')
    else:
        sumo_binary = checkBinary('sumo-gui')

    if len(sys.argv) < 4:
        sys.exit('Need path for directory of sumocfg.net, for scheduler algorithm, path to output directory and 1 for without gui otherwise 0 for with gui')

    path = Path(sys.argv[1])
    dir_name = path.parts[len(path.parts)-1]
    sumo_config = sys.argv[1] + "/" + dir_name + ".sumocfg.xml"
    output_dir = sys.argv[3]

    # this is the normal way of using traci. sumo is started as a
    # subprocess and then the python script connects and runs

    if tripinfo:
        # run with statistics output
        traci.start([sumo_binary, '-c', sumo_config, '--tripinfo-output',
                     output_dir + '/'+dir_name+'_tripinfo-output_' + sys.argv[2] + ".xml"])
    else:
        # run with full output for Unity
        traci.start([sumo_binary, '-c', sumo_config, '--full-output',
                     output_dir + '/' + dir_name+'_full-output_' + sys.argv[2] + ".xml"])
    if sys.argv[2] not in schedulers_name_map.keys():
        sys.exit("scheduler algorithm's name should be one of: " + ", ".join(schedulers_name_map.keys()))
    run_simulate(sumo_config[0:sumo_config.find(".sumocfg.xml")] + ".net.xml", schedulers_name_map[sys.argv[2]])
    traci.close()
    if os.path.exists(output_dir + '/' + dir_name + '_detectors-output_' + sys.argv[2] + ".xml"):
        os.remove(output_dir + '/' + dir_name + '_detectors-output_' + sys.argv[2] + ".xml")
    os.rename(sys.argv[1]+"/e2_Static.output.xml", output_dir + '/'+dir_name+'_detectors-output_' + sys.argv[2] + ".xml")
    sys.stdout.flush()
    print("Simulation ended successfully!")
    if exit_after:
        sys.exit()


if __name__ == "__main__":
    run_the_script(without_gui=bool(int(sys.argv[4])))
