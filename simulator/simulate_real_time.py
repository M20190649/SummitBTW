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
import functools as funcs
import operator as ops

from simulator.realtime.city import City


class RealTime(threading.Thread):
    def __init__(self, city, lock, event):
        threading.Thread.__init__(self)
        self.city = city
        self.junctions_dict = city.get_junctions_dict()
        self.detectors_dict = city.get_detectors_dict()
        self.lock = lock
        self.event = event

    def get_info_by_id(self, id_desired):
        if id_desired in self.detectors_dict:
            return self.get_detector_info_by_id(id_desired)
        elif id_desired in self.junctions_dict:
            return self.get_junction_info_by_id(id_desired)
        else:
            return "The id was not found. Please try again.\n"

    def get_detector_info_by_id(self, id_of_detector):
        detector = self.detectors_dict[id_of_detector]
        return [("detector "+id_of_detector+" length: ", detector.get_length()), ("detector "+id_of_detector+" mean speed: ", detector.get_mean_speed()), ("detector "+id_of_detector+" occupancy: ", detector.get_occupancy())]

    def get_junction_info_by_id(self, id_of_junction):
        junction = self.junctions_dict[id_of_junction]
        list_detectors_of_junction = junction.get_lights()
        avg_mean_speed = funcs.reduce(ops.add, [detector.get_mean_speed() for detector in list_detectors_of_junction]) / len(list_detectors_of_junction)
        avg_occupancy = funcs.reduce(ops.add, [detector.get_occupancy() for detector in list_detectors_of_junction]) / len(list_detectors_of_junction)
        return [("junction "+id_of_junction+" avg mean speed: ", avg_mean_speed), ("junction "+id_of_junction+" avg occupancy: ", avg_occupancy)]

    def run(self):
        while True:
            try:
                self.lock.release()
            except ValueError:
                pass
            id_desired = input("Write id of object you are interested for\n")
            if self.event.is_set() is True:
                print("It seems that the simulation has ended. Please exit the simulation program.")
                exit()
            self.lock.acquire()
            print(self.get_info_by_id(id_desired))


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
