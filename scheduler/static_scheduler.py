"""
Code for a static scheduler which does absolutely no optimizations.
"""

__author__ = "Yair Feldman"

from scheduler.abstract_scheduler import AbstractScheduler


class StaticScheduler(AbstractScheduler):
    """
    This class does not do any optimizations, but it is very useful as a baseline
    for analyzing other algorithms.
    """
    def __init__(self, city):
        pass

    def schedule(self):
        pass

