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

    def set_green(self, lights):
        """turns the given traffic lights to green.

        This function currently assumes that there is exactly one possible phase for the traffic lights
        such that the given lights are green together. It will raise an error otherwise, and will
        also raise an error if it is not possible for the given lights to be green at the same time.

        :param lights: (list of Detectors) the traffic lights in the junction to turn green
        :return: None
        """
        mutual_phases = list(set.intersection(*[set(self._detectors[light.get_id()].get_green_phases())
                                                for light in lights]))
        if len(mutual_phases) == 0:
            raise ValueError("Given lights can't be green together!")
        traci.trafficlight.setPhase(self._traffic_light_id, mutual_phases[0])
