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
        self._detectors = self._get_detectors(detector_ids)

    def _get_phases(self):
        """returns the phases of the traffic light, sorted by their index number

        It is worth mentioning that the i'th value in a given phase, e.g. "rGrG", is the i'th link's state
        in that phase. So, the 2nd link's state in the phase "rGrG", is "rGrG"[2]="r"=red.

        :return: list of strings, each string representing a phase
        """
        return [x._phaseDef for x in
                traci.trafficlights.getCompleteRedYellowGreenDefinition(self._traffic_light_id)[0]._phases]

    def _get_green_phases_for_detector(self, detector_link_index):
        """returns the phase indexes in which the given link can be green.

        :param detector_link_index: the detector's link index
        :return: list of integers representing the phases' indexes
        """
        return [i for i, phase in enumerate(self._phases) if phase[detector_link_index] in ['g', 'G']]

    def _get_detectors(self, detector_ids):
        """creates and returns the list of Detector for this traffic light

        :param detector_ids: list of detector IDs linked to the traffic light
        :return: list of Detectors
        """
        detector_links = traci.trafficlights.getControlledLanes(self._traffic_light_id)
        detectors = [Detector(identifier=det_id,
                              link_index=detector_links.index(traci.lanearea.getLaneID(det_id)),
                              green_phases=self._get_green_phases_for_detector(
                                  detector_links.index(traci.lanearea.getLaneID(det_id))))
                     for det_id in detector_ids]
        return detectors

    def get_lights(self):
        """Returns an list containing the different traffic light detectors in the junction.

        :return: list of Detectors
        """
        return self._detectors

    def get_mutual_lights(self, detector_id):
        """return a list of lights in the same junction that can turn green with the given light.

        Given a certain traffic light in a junction, which is represented by the appropriate detector,
        we would like to get all of the lights that can logically be green together with that light.

        :param detector_id: (string) the traffic light we want to turn green
        :return: list of Detectors which represent the possible lights in the same junction
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
