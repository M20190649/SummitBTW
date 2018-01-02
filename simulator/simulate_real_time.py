"""
Author: TomerKay

Main simulator script.
Initializes SUMO and its dependencies, and applies the scheduler.
"""
import multiprocessing
import optparse
import sys
import threading

import traci
from sumolib import checkBinary

from simulator.realtime.city import City


class RealTime(threading.Thread):
    def __init__(self, city, lock, event):
        threading.Thread.__init__(self)
        self.city = city
        self.junctions_dict = city.get_junctions_dict()
        self.detectors_dict = city.get_detectors_dict()
        self.lock = lock
        self.event = event

    def run(self):
        while True:
            try:
                self.lock.release()
            except ValueError:
                pass
            if self.event.is_set() is True:
                exit()
            id_desired = input("Write id of object you are interested for. Write exit to stop the program\n")
            if self.event.is_set() is True:
                exit()
            self.lock.acquire()
            if id_desired in self.detectors_dict:
                info_desired = input("Write the information you desire about the detector:\n"
                                     "'get_length'/'get_occupancy'/'get_mean_speed'\n")
                if info_desired == 'get_length':
                    print(self.detectors_dict[id_desired].get_length())
                    continue
                elif info_desired == 'get_occupancy':
                    print(self.detectors_dict[id_desired].get_occupancy())
                elif info_desired == 'get_mean_speed':
                    print(self.detectors_dict[id_desired].get_mean_speed())
                print("Wrote function inappropriately.")
                continue

            elif id_desired in self.junctions_dict:
                info_desired = input("Write the information you desire about the junction:\n"
                                     "\n")
                # TODO: needs some functions
                print("Wrote function inappropriately.")
                continue
            elif id_desired == "exit":
                print("Bye Bye!\n")
                exit()
            else:
                print("The id was not found. Please try again.\n")


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
    city = City()
    lock = multiprocessing.Lock()
    event = threading.Event()
    thread = RealTime(city, lock, event)
    thread.start()
    while True:
        try:
            lock.release()
        except ValueError:
            pass
        lock.acquire()
        if traci.simulation.getMinExpectedNumber() > 0:
            traci.simulationStep()
            # Todo: add simulator algorithm
            step += 1
        else:
            lock.release()
            event.set()
            break
    thread.join()
    return


if __name__ == "__main__":
    options = get_options()

    # this script has been called from the command line. It will start sumo as a
    # server, then connect and run
    if options.nogui:
        sumo_binary = checkBinary('sumo')
    else:
        sumo_binary = checkBinary('sumo-gui')

    if len(sys.argv) != 2:
        sys.exit('Usage: python simulate_real_time.py <<*.sumocfg config file>>')

    sumo_config = sys.argv[1]

    # this is the normal way of using traci. sumo is started as a
    # subprocess and then the python script connects and runs
    traci.start([sumo_binary, "-c", sumo_config, "--tripinfo-output", "tripinfo_realtime.xml"])

    run()
    traci.close()
    sys.stdout.flush()
    print("Simulation ended successfully!")
    sys.exit()
