"""
Code for a simple scheduler which chooses which traffic light to turn green based only on the
current occupancy of the detectors.
"""

__author__ = "Yair Feldman"

from scheduler.abstract_scheduler import AbstractScheduler


class MaxOccupancyScheduler(AbstractScheduler):
    """
    This class implements a very simple optimization algorithm:
        For each junction, choose the most occupied traffic light, and set it to green.
    """
    def __init__(self, city):
        self.junctions = city.get_junctions()

    def schedule(self):
        for junction in self.junctions:
            max_occupancy_det = None
            max_occupancy = -1
            for light in junction.get_lights():
                if light.get_occupancy() > max_occupancy:
                    max_occupancy = light.get_occupancy()
                    max_occupancy_det = light
            mutual = junction.get_mutual_lights(max_occupancy_det)
            junction.set_green([max_occupancy_det, mutual[0]])
