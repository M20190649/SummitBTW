from scheduler.abstract_scheduler import AbstractScheduler
from scheduler.scheduler import SchedulerJunction

"""
Author: Ran Yeheskel
This is a class of a scheduler where some of the junctions are "dumb"/statically scheduled.
"""

class MixedScheduler(AbstractScheduler):
    """
    Initialize the class.
    input: the city to be scheduled. The list of junctions to be scheduled in a smart way.
    """
    def __init__(self, city, smart_junctions):
        self.junctions = city.get_junctions()
        self.smart_junctions = [junction for junction in city.get_junctions() if junction in smart_junctions]
        self.schedulers = []
        self.junction_to_schedule = 0
        for junction in smart_junctions:
            junction_scheduler = SchedulerJunction(junction)
            self.schedulers += [junction_scheduler]

    """
    The schedule function. Scheduling each smart junction in a round robin way.
    input: none
    output: none
    """
    def schedule(self):
        self.schedulers[self.junction_to_schedule].schedule()
        self.junction_to_schedule = (self.junction_to_schedule + 1) % len(self.smart_junctions)