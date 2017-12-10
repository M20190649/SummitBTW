"""
This is an API for the Junction class. It is built for the scheduling algorithm,
and it encapsulates every junction's traffic light logic and contains its different detectors.
"""

__author__ = "Yair Feldman"


class Junction(object):
    """A junction containing traffic lights and vehicle detectors.

    """
    def __init__(self, traffic_light_id):
        self._traffic_light_id = traffic_light_id
        raise NotImplementedError

    def get_lights(self):
        """Returns an list containing the different traffic light detectors in the junction.

        :return: list of <TODO: replace with the class name of the detectors>
        """
        raise NotImplementedError

    def get_mutual_lights(self, light):
        """return a list of lights in the same junction that can turn green with the given light.

        Given a certain traffic light in a junction, we would like to get all of the lights that can
        logically be green together with that light.

        :param light: (TODO: traffic light type) the traffic light we want to turn green
        :return: list of possible lights in the same junction
        """
        raise NotImplementedError

    def set_green(self, lights):
        """turns the given traffic lights to green.

        This function currently assumes that there is exactly one possible phase for the traffic lights
        such that the given lights are green together. It will raise an error otherwise, and will
        also raise an error if it is not possible for the given lights to be green at the same time.

        :param lights: (list of traffic lights) the traffic lights in the junction to turn green
        :return: None
        """
        raise NotImplementedError
