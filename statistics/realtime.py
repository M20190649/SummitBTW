import multiprocessing
import threading
import functools as funcs
import operator as ops


class RealTime(threading.Thread):
    def __init__(self, city):
        threading.Thread.__init__(self)
        self.city = city
        self.junctions_dict = city.get_junctions_dict()
        self.detectors_dict = city.get_detectors_dict()
        self.lock = multiprocessing.Lock()
        self.end_simulation_event = threading.Event()

    def run(self):
        while True:
            id_desired = input("Write id of object you are interested for\n")
            if self.end_simulation_event.is_set() is True:
                print("It seems that the simulation has ended. Please exit the simulation program.")
                exit()
            self.lock.acquire()
            print(self.get_info_by_id(id_desired))
            self.lock.release()

    def get_info_by_id(self, id_desired):
        if id_desired in self.detectors_dict:
            return self.get_detector_info_by_id(id_desired)
        elif id_desired in self.junctions_dict:
            return self.get_junction_info_by_id(id_desired)
        else:
            return "The id was not found. Please try again.\n"

    def get_detector_info_by_id(self, id_of_detector):
        detector = self.detectors_dict[id_of_detector]
        return [("detector " + id_of_detector + " length: ", detector.get_length()),
                ("detector " + id_of_detector + " mean speed: ", detector.get_mean_speed()),
                ("detector " + id_of_detector + " occupancy: ", detector.get_occupancy())]

    def get_junction_info_by_id(self, id_of_junction):
        junction = self.junctions_dict[id_of_junction]
        list_detectors_of_junction = junction.get_lights()
        avg_mean_speed = funcs.reduce(ops.add,
                                      [detector.get_mean_speed() for detector in list_detectors_of_junction]) / len(
            list_detectors_of_junction)
        avg_occupancy = funcs.reduce(ops.add,
                                     [detector.get_occupancy() for detector in list_detectors_of_junction]) / len(
            list_detectors_of_junction)
        return [("junction " + id_of_junction + " avg mean speed: ", avg_mean_speed),
                ("junction " + id_of_junction + " avg occupancy: ", avg_occupancy)]
