"""
File Name: simulate.py
Author: EylonSho

Main simulator script.
Initializes SUMO and its dependencies, and applies the scheduler.
"""

import optparse
import sys

import traci
from sumolib import checkBinary


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


def run():
    """
    Execute the simulation loop, and applying the scheduler in each step.
    :return: None
    """

    step = 0
    while traci.simulation.getMinExpectedNumber() > 0:
        traci.simulationStep()

        # TODO: Here we are going to call the scheduler algorithm.

        step += 1


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
    traci.start([sumo_binary, "-c", sumo_config, "--tripinfo-output", "tripinfo.xml"])

    run()

    traci.close()
    sys.stdout.flush()
