import functools as funcs
import multiprocessing
import operator as ops
import threading
import socket


class RealTime(threading.Thread):
    def __init__(self, city):
        threading.Thread.__init__(self)
        self.city = city
        self.junctions_dict = city.get_junctions_dict()
        self.detectors_dict = city.get_detectors_dict()
        self.lock = multiprocessing.Lock()
        self.end_simulation_event = threading.Event()
        self.sock = socket.socket(
            socket.AF_INET, socket.SOCK_STREAM)

    def run(self):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.bind(("0.0.0.0", 1482))
        self.sock.listen(1)
        conn, _ = self.sock.accept()
        while True:
            if self.end_simulation_event.is_set() is True:
                conn.close()
                exit()
            id_desired = conn.recv(1024).decode("utf-8")
            self.lock.acquire()
            conn.send(str.encode(self.get_info_by_id_string(id_desired)))
            self.lock.release()

        # If we want to receive input from console:
        # while True:
        #     id_desired = input("## Write id of object you are interested for >>\n")
        #     if self.end_simulation_event.is_set() is True:
        #         print("## It seems that the simulation has ended. Please exit the simulation program.")
        #         exit()
        #     self.lock.acquire()
        #     print(self.get_info_by_id_list(id_desired))
        #     self.lock.release()

    def get_info_by_id_list(self, id_desired):
        if id_desired in self.detectors_dict:
            return self.get_detector_info_by_id(id_desired)
        elif id_desired in self.junctions_dict:
            return self.get_junction_info_by_id(id_desired)
        else:
            return [("The id was not found", " Please try again.")]

    def get_info_by_id_string(self, id_desired):
        res_list = self.get_info_by_id_list(id_desired)
        res = funcs.reduce(ops.add, [name + "," + str(stat) + "," for name, stat in res_list])
        return res[:len(res) - 1]

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
