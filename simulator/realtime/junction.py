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

    def __init__(self, traffic_light_id, detector_ids):
        self._traffic_light_id = traffic_light_id
        self._phases = self._get_phases()
        self._detectors = self._create_detectors(detector_ids)
        self._mutual_lights = self._create_mutual_lights_dict()

        """constants"""
        # occupancy's measurement error.
        self.eps = 0.00001

    def _get_phases(self):
        """returns the phases of the traffic light, sorted by their index number

        It is worth mentioning that the i'th value in a given phase, e.g. "rGrG", is the i'th link's state
        in that phase. So, the 2nd link's state in the phase "rGrG", is "rGrG"[2]="r"=red.

        :return: list of strings, each string representing a phase
        """
        return [x._phaseDef for x in
                traci.trafficlight.getCompleteRedYellowGreenDefinition(self._traffic_light_id)[0]._phases]

    def _get_green_phases_for_detector(self, detector_link_index):
        """returns the phase indexes in which the given link can be green.

        :param detector_link_index: the detector's link index
        :return: list of integers representing the phases' indexes
        """
        return [i for i, phase in enumerate(self._phases) if phase[detector_link_index] in ['g', 'G']]

    def _create_mutual_lights_dict(self):
        """returns a dictionary mapping each light to the possible mutual lights in the junction.

        :return: a dict with key=id (string) -> value=list of detectors
        """
        return {light.get_id(): [mutual for mutual in self._detectors.values()
                                 if mutual != light and
                                 any(p in mutual.get_green_phases() for p in light.get_green_phases())]
                for light in self._detectors.values()}

    def _create_detectors(self, detector_ids):
        """creates and returns the dictionary of Detectors for this traffic light

        :param detector_ids: list of detector IDs linked to the traffic light
        :return: dict of id (string) -> Detector
        """
        detector_links = traci.trafficlight.getControlledLanes(self._traffic_light_id)
        detectors = {det_id: Detector(identifier=det_id,
                                      link_index=detector_links.index(traci.lanearea.getLaneID(det_id)),
                                      green_phases=self._get_green_phases_for_detector(
                                          detector_links.index(traci.lanearea.getLaneID(det_id))))
                     for det_id in detector_ids}
        return detectors

    def get_lights(self):
        """Returns an list containing the different traffic light detectors in the junction.

        :return: list of Detectors
        """
        return list(self._detectors.values())

    def get_mutual_lights(self, detector):
        """return a list of lights in the same junction that can turn green with the given light.

        Given a certain traffic light in a junction, which is represented by the appropriate detector,
        we would like to get all of the lights that can logically be green together with that light.

        :param detector: (Detector) the traffic light we want to turn green
        :return: list of Detectors which represent the possible lights in the same junction
        """
        return self._mutual_lights[detector.get_id()]

    def is_light_green(self, detector):
        """check whether the traffic light connected to the given detector is green

        :param detector: the detector to inspect
        :return: bool
        """
        return traci.trafficlight.getPhase(self._traffic_light_id) in detector.get_green_phases()

    def get_non_empty_lanes(self):
        """
        returns the set of detectors with occupancy > 0
        """
        return set([light for light in self.get_lights() if light.get_occupancy() > self.eps])

    def get_green_lights(self):
        """
        returns: the list of green lights in the junction
        """
        return [light for light in self.get_lights() if self.is_light_green(light)]

    def get_active_phase(self):
        """
        :return: the current active phase
        """
        return traci.trafficlight.getPhase(self._traffic_light_id)

    def is_yellow_phase(self):
        """
        checks whether it is a yellow phase
        :return: bool
        """
        green_lights = self.get_green_lights()
        if not green_lights:
            return True
        return False

    def green_lanes_empty(self):
        """
        checks whether the green lights are empty  or not.
        input: none
        returns: bool
        """
        green_lights = self.get_green_lights()
        if green_lights is None:
            return False
        for light in green_lights:
            if light.get_occupancy() > self.eps:
                return False
        return True

    def set_yellow(self, phase, phase_duration=3):
        """turns the given active phase to a yellow phase.

        :param phase_duration: phase duration of the yellow phase in seconds.
            default is 3, which is the default time for yellow phase.
        :param phase: the current active phase
        :return: None
        """
        if phase % 2 != 0:
            raise ValueError("not a green phase!")
        traci.trafficlight.setPhase(self._traffic_light_id, phase + 1)
        traci.trafficlight.setPhaseDuration(self._traffic_light_id, phase_duration)

    def set_green(self, detectors, phase_duration=33):
        """turns the given traffic lights (given as detectors) to green.

        This function currently assumes that there is exactly one possible phase for the traffic lights
        such that the given lights are green together. It will raise an error otherwise, and will
        also raise an error if it is not possible for the given lights to be green at the same time.

        :param phase_duration: phase duration of the next phase in seconds.
            default is 33, which is one of SUMO defaults.
        :param detectors: (list of Detectors) the traffic lights in the junction to turn green
        :return: None
        """
        # mutual_phases = list(set.intersection(*[set(self._detectors[light.get_id()].get_green_phases())
        #                                         for light in detectors]))
        # if len(mutual_phases) == 0:
        #     raise ValueError("Given lights can't be green together!")
        # traci.trafficlight.setPhase(self._traffic_light_id, mutual_phases[0])
        phase = self._get_green_phases_for_detector(detectors._link_index)[0]
        traci.trafficlight.setPhase(self._traffic_light_id, phase)
        traci.trafficlight.setPhaseDuration(self._traffic_light_id, phase_duration)
