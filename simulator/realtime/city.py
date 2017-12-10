"""
This is an API for the City class. It is built for the scheduling algorithm,
and it encapsulates the city's junctions.
"""

__author__ = "Yair Feldman"


class City(object):
    """A city, containing all of the traffic lights currently loaded to the simulator.

    """
    def __init__(self):
        raise NotImplementedError

    def get_junctions(self):
        """returns a list containing the city's junctions

        :return: list of Junctions
        """
        raise NotImplementedError
