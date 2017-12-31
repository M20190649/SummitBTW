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

    def __init__(self):
        self._traffic_light_ids = traci.trafficlights.getIDList()
        self._detector_ids = traci.lanearea.getIDList()
        junction_detector_dict = self._get_junction_detector_dict()
        self._junctions = {i: Junction(traffic_light_id=i, detector_ids=junction_detector_dict[i])
                           for i in self._traffic_light_ids}

    def _get_junction_detector_dict(self):
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

    def get_junction_by_id(self, junction_id):
        return self._junctions[junction_id]

    def get_detectors_dict(self):
        """returns a full dictionary of all detectors in the city: key is detector id and value is the appropriate Detector object.

        :return: dictionary of id (string) -> Detector
        """
        det_dict = {}
        for junction in self._junctions.values():
            det_dict.update(junction._detectors)
        return det_dict

    def get_junctions_dict(self):
        """returns a full dictionary of all junctions in the city: key is junction id and value is the appropriate
        Junction object.

        :return: dictionary of id (string) -> Junction
        """
        return self._junctions