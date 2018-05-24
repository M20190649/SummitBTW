"""
This is an API for the Junction class. It is built for the scheduling algorithm,
and it encapsulates every junction's traffic light logic and contains its different detectors.
"""

__author__ = "Yair Feldman"

import traci
from .detector import Detector


class Junction(object):
    """A junction containing traffic lights and vehicle detectors.

    """

    def __init__(self, sumo_network_path, traffic_light_id, detector_ids):
        self._sumo_network_path = sumo_network_path
        self._traffic_light_id = traffic_light_id
        self._phases = self._get_phases()
        self._detectors_dict = self._create_detectors(detector_ids)
        # self._mutual_lights = self._create_mutual_lights_dict()
        self._detectors = list(self._detectors_dict.values())
        # map from TL to it's detector's length
        self._length = {detector: detector.get_length() for detector in self._detectors}
        self._key_green_phase_value_detector = self._phase_to_detector()
        self._before_me_neighbors = []
        self._me_next_neighbors = []

        """constants"""
        # occupancy's measurement error.
        self.eps = 0.00001

    def add_neighbor_me_next(self, junction):
        if junction not in self._me_next_neighbors:
            self._me_next_neighbors.append(junction)

    def add_neighbor_before_me(self, junction):
        if junction not in self._before_me_neighbors:
            self._before_me_neighbors.append(junction)

    def get_key_green_phase_value_detector(self):
        return self._key_green_phase_value_detector

    def get_detectors_dict(self):
        return self._detectors_dict

    def get_before_me_neighbors(self):
        return self._before_me_neighbors

    def get_me_next_neighbors(self):
        return self._me_next_neighbors

    def _get_phases(self):
        """returns the phases of the traffic light, sorted by their index number

        It is worth mentioning that the i'th value in a given phase, e.g. "rGrG", is the i'th link's state
        in that phase. So, the 2nd link's state in the phase "rGrG", is "rGrG"[2]="r"=red.

        :return: list of strings, each string representing a phase
        """
        return [x._phaseDef for x in
                traci.trafficlight.getCompleteRedYellowGreenDefinition(self._traffic_light_id)[0]._phases]

    @staticmethod
    def _phase_green_in_detector_link_indexes(phase, detector_link_indexes):
        """
        :param phase:
        :param detector_link_indexes:
        :return: checks whether the phase is green for one of the indexes
        """
        for link_index in detector_link_indexes:
            if phase[link_index] in ['G', 'g']:
                return True
        return False

    def _get_green_phases_for_detector(self, detector_link_indexes):
        """returns the phase indexes in which the given link can be green.

        :param detector_link_indexes: the detector's link indexes
        :return: list of integers representing the phases' indexes
        """
        return [i for i, phase in enumerate(self._phases) if
                self._phase_green_in_detector_link_indexes(phase, detector_link_indexes)]

    # def _create_mutual_lights_dict(self):
    #     """returns a dictionary mapping each light to the possible mutual lights in the junction.
    #
    #     :return: a dict with key=id (string) -> value=list of detectors
    #     """
    #     return {light.get_id(): [mutual for mutual in self._detectors_dict.values()
    #                              if mutual != light and
    #                              any(p in mutual.get_green_phases() for p in light.get_green_phases())]
    #             for light in self._detectors_dict.values()}

    def _create_detectors(self, detector_ids):
        """creates and returns the dictionary of Detectors for this traffic light

        :param detector_ids: list of detector IDs linked to the traffic light
        :return: dict of id (string) -> Detector
        """
        detector_links = traci.trafficlight.getControlledLanes(self._traffic_light_id)
        detectors = {det_id: Detector(identifier=det_id,
                                      link_indexes=[i for i, x in enumerate(detector_links) if
                                                    x == traci.lanearea.getLaneID(det_id)],
                                      green_phases=self._get_green_phases_for_detector(
                                          [i for i, x in enumerate(detector_links) if
                                           x == traci.lanearea.getLaneID(det_id)]))
                     for det_id in detector_ids}
        return detectors

    def _phase_to_detector(self):
        res = {}
        for detector in self._detectors_dict.values():
            for g_p in detector.get_green_phases():
                if res.get(g_p) is None:
                    res[g_p] = []
                res[g_p].append(detector)
        return res

    def get_detectors(self):
        """Returns an list containing the different traffic light detectors in the junction.

        :return: list of Detectors
        """
        return self._detectors

    def get_length(self):
        return self._length

    # def get_mutual_lights(self, detector):
    #     """return a list of lights in the same junction that can turn green with the given light.
    #
    #     Given a certain traffic light in a junction, which is represented by the appropriate detector,
    #     we would like to get all of the lights that can logically be green together with that light.
    #
    #     :param detector: (Detector) the traffic light we want to turn green
    #     :return: list of Detectors which represent the possible lights in the same junction
    #     """
    #     return self._mutual_lights[detector.get_id()]

    def is_detector_green(self, detector):
        """check whether the traffic light connected to the given detector is green

        :param detector: the detector to inspect
        :return: bool
        """
        return traci.trafficlight.getPhase(self._traffic_light_id) in detector.get_green_phases()

    def is_there_full_detector(self):
        for detector in self._detectors:
            if detector.get_occupancy() >= 30:
                return True
        return False

    def get_non_empty_lanes(self):
        """
        returns the set of detectors with occupancy > 0
        """
        return set([detector for detector in self.get_detectors() if detector.get_occupancy() > self.eps])

    def get_green_detectors(self):
        """
        returns: the list of green lights in the junction
        """
        return [detector for detector in self.get_detectors() if self.is_detector_green(detector)]

    def get_active_phase(self):
        """
        :return: the current active phase
        """
        return traci.trafficlight.getPhase(self._traffic_light_id)

    def is_yellow_or_red_phase(self):
        """
        checks whether it is a yellow phase
        :return: bool
        """
        green_detectors = self.get_green_detectors()
        if not green_detectors:
            return True
        return False

    def green_lanes_empty(self):
        """
        checks whether the green lights are empty  or not.
        input: none
        returns: bool
        """
        green_detectors = self.get_green_detectors()
        if not green_detectors:
            return False
        for detector in green_detectors:
            if detector.get_occupancy() > self.eps:
                return False
        return True

    def set_yellow(self, phase):
        """turns the given active phase to a yellow phase.

        :param phase_duration: phase duration of the yellow phase in seconds.
            default is 3, which is the default time for yellow phase.
        :param phase: the current active phase
        :return: None
        """
        if phase % 2 != 0:
            raise ValueError("not a green phase!")
        traci.trafficlight.setPhase(self._traffic_light_id, phase + 1)
        traci.trafficlight.setPhaseDuration(self._traffic_light_id, 1000)

    def set_green(self, detector, phase_duration=None):
        """turns the given traffic lights (given as detectors) to green.

        This function currently assumes that there is exactly one possible phase for the traffic lights
        such that the given lights are green together. It will raise an error otherwise, and will
        also raise an error if it is not possible for the given lights to be green at the same time.

        :param phase_duration: phase duration of the next phase in seconds.
        :param detector: the traffic lights in the junction to turn green
        :return: None
        """
        # mutual_phases = list(set.intersection(*[set(self._detectors[light.get_id()].get_green_phases())
        #                                         for light in detectors]))
        # if len(mutual_phases) == 0:
        #     raise ValueError("Given lights can't be green together!")
        # traci.trafficlight.setPhase(self._traffic_light_id, mutual_phases[0])

        phase = detector.get_green_phases()[detector.get_phase_to_activate()]
        traci.trafficlight.setPhase(self._traffic_light_id, phase)
        if phase_duration:
            traci.trafficlight.setPhaseDuration(self._traffic_light_id, phase_duration)

    def turn_simulator_on(self, phase_duration):
        traci.trafficlight.setPhase(self._traffic_light_id, self.get_active_phase())
        traci.trafficlight.setPhaseDuration(self._traffic_light_id, phase_duration)
