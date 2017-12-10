"""
This is an API for the City class. It is built for the scheduling algorithm,
and it encapsulates the city's junctions.
"""

__author__ = "Yair Feldman"


import traci
from .junction import Junction


class City(object):
    """A city, containing all of the traffic lights currently loaded to the simulator.

    """
    def __init__(self):
        self._traffic_light_ids = traci.trafficlights.getIDList()

        # initialize Junctions. TODO: complete initialization with detectors
        self._junctions = [Junction(traffic_light_id=i) for i in self._traffic_light_ids]

    def get_junctions(self):
        """returns a list containing the city's junctions

        :return: list of Junctions
        """
        return self._junctions
