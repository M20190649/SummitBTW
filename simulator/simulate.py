"""
Author: EylonSho

Main simulator script.
Initializes SUMO and its dependencies, and applies the scheduler.
"""
import logging
import optparse
import sys

import traci
from sumolib import checkBinary

# from scheduler.scheduler import Scheduler
from scheduler.scheduler import Scheduler
from simulator.realtime.city import City
from statistics.realtime import RealTime


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


def run_simulate(scheduler_algorithm=Scheduler, real_time=True):
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
        else:
            if real_time:
                thread.end_simulation_event.set()
            simulation_ended = True
        if real_time:
            thread.lock.release()
    logging.info('Simulation is finished')
    if real_time:
        thread._delete()


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
    if not gui:
        _sumo_binary = checkBinary('sumo')
    else:
        _sumo_binary = checkBinary('sumo-gui')

    traci.start([_sumo_binary, "-c", config_file, "--tripinfo-output", output_file])

    run_simulate(scheduler_algorithm=scheduler, real_time=real_time)
    traci.close()
    sys.stdout.flush()


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
    traci.start([sumo_binary, "-c", sumo_config, "--tripinfo-output", "tripinfo_realtime.xml"])

    run_simulate()
    traci.close()
    sys.stdout.flush()
    print("Simulation ended successfully!")
    sys.exit()
