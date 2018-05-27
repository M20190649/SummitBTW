"""
API for detectors, which represent physical sensors in junctions.
Those can be queried for information about traffic.
"""

__author__ = "Eylon Shoshan, Yair Feldman"

import traci


class Detector(object):
    """Detector class which contains real-time information about loads on them.
    """

    def __init__(self, identifier, link_indexes, green_phases):
        """

        :param identifier: the detector's ID
        :param link_indexes: the link indexes on the traffic light state
        :param green_phases: a list of the possible phases of the detector's traffic light
            refer to the documentation on Junction for further description of the phases.
        """
        self._identifier = identifier
        self._link_indexes = link_indexes
        self._green_phases = green_phases
        self._index_of_green_phase = -1
        self._next_detectors = []
        self.previously_occupancy = 0
        self.stuck = 0

    def get_id(self):
        """returns the id of the detector.

        :return: the detector's identifier (string)
        """
        return self._identifier

    def add_next_detector(self, detector):
        self._next_detectors.append(detector)

    def get_next_detectors(self):
        return self._next_detectors

    def get_green_phases(self):
        """ returns a list of phases in which the detector's traffic light is green.

        :return: list of integers representing the green phases.
        """
        return self._green_phases

    def get_length(self):
        """Get the length of a detector.

        Getting length of a detector in meters.

        :return: Detector length
        """
        return traci.lanearea.getLength(self._identifier)

    def not_stuck(self):
        if self.get_occupancy() == 0:
            return True
        if self.previously_occupancy <= self.get_occupancy() or self.get_mean_speed() == 0:
            self.stuck += 1
            if self.stuck == 7:
                self.stuck = 0
                self.previously_occupancy = 0
                return False
            self.previously_occupancy = self.get_occupancy()
        else:
            self.stuck = 0
            self.previously_occupancy = 0
        return True

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

    def get_jam_length(self):
        """ query a detector for the jam length (in vehicles) within the last simulation step.

        :return: number of vehicles in the jam (int)
        """
        return traci.lanearea.getJamLengthVehicle(self._identifier)

    def get_halting_count(self):
        """ query a detector for the number of halting vehicles during the last simulation step.

        :return: number of halting vehicles (int)
        """
        return traci.lanearea.getLastStepHaltingNumber(self._identifier)

    def get_vehicle_count(self):
        """ query a detector for the number of vehicles on the detector within the last simulation step.

        :return: number of vehicles (int)
        """
        return traci.lanearea.getLastStepVehicleNumber(self._identifier)

    def lane_has_several_phases(self):
        """ Checks whether the lane has several phases, e.g. one for straight and one for left

        :return: bool
        """
        if self.get_green_phases() > 1:
            return True
        return False

    def get_phase_to_activate(self):
        self._index_of_green_phase += 1
        if self._index_of_green_phase == len(self._green_phases):
            self._index_of_green_phase = 0
        return self._index_of_green_phase

