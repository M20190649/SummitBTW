"""
API for detectors, which represent physical sensors in junctions.
Those can be queried for information about traffic.
"""

__author__ = "Eylon Shoshan"

import traci


class Detector(object):
    """Detector class which contains real-time information about loads on them.
    """

    def __init__(self, identifier, link_index, green_phases):
        """

        :param identifier: the detector's ID
        :param link_index: the link index on the traffic light state
        :param green_phases: a list of the possible phases of the detector's traffic light
            refer to the documentation on Junction for further description of the phases.
        """
        self._identifier = identifier
        self._link_index = link_index
        self._green_phases = green_phases

    def get_id(self):
        """returns the id of the detector.

        :return: the detector's identifier (string)
        """
        return self._identifier

    def get_length(self):
        """Get the length of a detector.

        Getting length of a detector in meters.

        :return: Detector length
        """
        return traci.lanearea.getLength(self._identifier)

    def get_occupancy(self):
        """Query a detector for the occupancy in it, as it was during the last simulation step.

        Fetching status of a the self detector. This method is querying the detector
        and returns a number between 0-100, which represents how massive was the
        occupancy during the last simulation step, in percents.

        :return: Occupancy percentage
        """

        return traci.lanearea.getLastStepOccupancy(self._identifier)

    def get_mean_speed(self):
        """Querying a detector for the mean speed in it, as it was during the last simulation step.

        Fetching status of a detector and getting the average speed in it during the last
        simulation step. This method returns the speed in km/h which represents that speed.

        :return: Mean speed
        """

        return traci.lanearea.getLastStepMeanSpeed(self._identifier)
