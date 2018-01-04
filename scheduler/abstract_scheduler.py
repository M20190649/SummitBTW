"""
This file contains the AbstractScheduler class.
All schedulers should inherit from it and implement its abstract functions.
"""

__author__ = "Yair Feldman"

from abc import ABC, abstractmethod


class AbstractScheduler(ABC):
    @abstractmethod
    def __init__(self, city):
        """Initializes the scheduler.

        :param city: the City object of the current simulation.
        """
        pass

    @abstractmethod
    def schedule(self):
        """Main scheduling method.

        This method should be called whenever we want to optimize the traffic lights.
        It runs within exactly one time-step, and is not responsible for advancing the
        simulation to the next time-step. This should be done by the main program which
        started the simulation and called the scheduler.

        :return: None
        """
        pass
