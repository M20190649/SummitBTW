"""
Author: EylonSho

Main simulator script.
Initializes SUMO and its dependencies, and applies the scheduler.
"""
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


def run_simulate():
    """
    Execute the simulation loop, and applying the scheduler in each step.
    :return: None
    """

    city = City()
    my_scheduler = Scheduler(city)
    thread = RealTime(city)
    thread.start()
    simulation_ended = False
    while not simulation_ended:
        thread.lock.acquire()
        if traci.simulation.getMinExpectedNumber() > 0:
            my_scheduler.schedule()
            traci.simulationStep()
        else:
            thread.end_simulation_event.set()
            simulation_ended = True
        thread.lock.release()
    thread.join()


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
