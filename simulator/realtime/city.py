"""
This is an API for the City class. It is built for the scheduling algorithm,
and it encapsulates the city's junctions.
"""

__author__ = "Yair Feldman"

from collections import defaultdict
import traci
from .junction import Junction


class City(object):
    """A city, containing all of the traffic lights currently loaded to the simulator.

    """

    def __init__(self, sumo_network_path):
        self._sumo_network_path = sumo_network_path
        self._traffic_light_ids = traci.trafficlight.getIDList()
        self._detector_ids = traci.lanearea.getIDList()
        junction_detid_dict = self._get_junction_detid_dict()
        self._junctions = {i: Junction(sumo_network_path, traffic_light_id=i, detector_ids=junction_detid_dict[i])
                           for i in self._traffic_light_ids}
        self._detectors_dict = self._cal_detectors_dict()
        self._smart_junctions = self._find_smart_junctions()
        self._cal_neighbors_and_next_detectors()

    def _find_smart_junctions(self):
        res = []
        with open(self._sumo_network_path, 'r') as net_file:
            text = net_file.read()
            start = text.find('<tlLogic id="')
            end = text.find('<junction id="')
            for i in range(start, end):
                if text[i-13:i] == '<tlLogic id="':
                    junc_id = text[i:text.find('"', i+1)]
                    junc_id_index = text.find('<junction id="'+junc_id)
                    incLanes_index = text.find('incLanes="', junc_id_index)
                    incLanes_index += 10
                    incLanes_str = text[incLanes_index:text.find('"', incLanes_index+1)]
                    if len(incLanes_str.split(" ")) > 5:
                        res.append(self._junctions[junc_id])
        return res

    def _cal_neighbors_and_next_detectors(self):
        with open(self._sumo_network_path, 'r') as net_file:
            text = net_file.read()
            start = text.find('<connection')
            i = start
            while i < len(text):
                i = text.find('<connection', i)
                if i == -1:
                    break
                connection = text[i:text.find("/>", i)+2]
                tl_from_index = connection.find('tl="')
                if tl_from_index != -1:
                    tl_from_str = connection[tl_from_index + 4:connection.find('"', tl_from_index + 4)]
                    from_index = connection.find('from="')
                    from_str = connection[from_index+6:connection.find('"', from_index+6)]
                    to_index = connection.find('to="')
                    to_str = connection[to_index + 4:connection.find('"', to_index + 4)]
                    fromLane_index = connection.find('fromLane="')
                    fromLane_str = connection[fromLane_index + 10:connection.find('"', fromLane_index + 10)]
                    toLane_index = connection.find('toLane="')
                    toLane_str = connection[toLane_index + 8:connection.find('"', toLane_index + 8)]
                    detector_from = tl_from_str + "_e2det_"+from_str+"_"+fromLane_str
                    tl_to_index = text.find('edge id="' + to_str + '" from="' + tl_from_str + '" to="')
                    add_len = len(to_str) + len(tl_from_str) + len('edge id="" from="" to="')
                    tl_to_str = text[tl_to_index + add_len:text.find('"', tl_to_index + add_len)]
                    detector_to = tl_to_str + "_e2det_"+to_str+"_"+toLane_str
                    if self._detectors_dict.get(detector_from) is not None and self._detectors_dict.get(detector_to) is not None:
                        self._junctions[tl_to_str].add_neighbor_next_me(self._junctions[tl_from_str])
                        self._junctions[tl_from_str].add_neighbor_me_next(self._junctions[tl_to_str])
                        self._detectors_dict[detector_to].add_next_detector(self._detectors_dict[detector_from])
                i += len(connection)


    def _get_junction_detid_dict(self):
        """returns a dictionary of junction_id -> list of detector id's

        :return: a dictionary
        """
        junction_detector_dict = defaultdict(list)
        for det_id in self._detector_ids:
            junction_detector_dict[det_id.split('_')[0]].append(det_id)
        return junction_detector_dict

    def get_junctions(self):
        """returns a list containing the city's junctions

        :return: list of Junctions
        """
        return list(self._junctions.values())

    def get_smart_junctions(self):
        return self._smart_junctions

    def get_junction_by_id(self, junction_id):
        return self._junctions[junction_id]

    def _cal_detectors_dict(self):
        det_dict = {}
        for junction in self._junctions.values():
            det_dict.update(junction._detectors)
        return det_dict

    def get_detectors_dict(self):
        """returns a full dictionary of all detectors in the city: key is detector id and value is the appropriate Detector object.

        :return: dictionary of id (string) -> Detector
        """
        return self._detectors_dict

    def get_junctions_dict(self):
        """returns a full dictionary of all junctions in the city: key is junction id and value is the appropriate
        Junction object.

        :return: dictionary of id (string) -> Junction
        """
        return self._junctions