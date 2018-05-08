from scheduler.abstract_scheduler import AbstractScheduler
from scheduler.scheduler import SchedulerJunctionAdvanced

"""
Author: Ran Yeheskel
This is a class of a scheduler where some of the junctions are "dumb"/statically scheduled.
"""

class MixedScheduler(AbstractScheduler):
    """
    Initialize the class.
    input: the city to be scheduled. The list of junctions to be scheduled in a smart way.
    """
    def __init__(self, city, smart_cities=[]):
        self.smart_cities = smart_cities
        self.schedulers = []
        key_jucn_val_sched_junc = {}
        for junction in city.get_junctions():
            sched_junc = SchedulerJunctionAdvanced(junction)
            self.schedulers += [sched_junc]
            key_jucn_val_sched_junc[junction] = sched_junc
        for sched_junc in self.schedulers:
            for neighbor in sched_junc.junction.neighbors:
                sched_junc.neigbours.append(key_jucn_val_sched_junc[neighbor])
        for sched_junc in self.schedulers:
            if sched_junc.junction in self.smart_cities:
                sched_junc.lights_fixed = True

    def schedule(self):
        """
        The function that is called with busy wait in the simulator.
        schedule each junction.
        Each junction is scheduled using SchedulerJunction.schedule()

        input: none
        output: none
        """

        lights_to_fix = []
        for sched_junc in self.schedulers:
            if not sched_junc.lights_fixed:
                lights_to_fix.append(sched_junc)
                while lights_to_fix:
                    curr = lights_to_fix.pop()
                    curr.schedule()
                    for neighbor in curr.neighbors:
                        if not neighbor.lights_fixed:
                            lights_to_fix.append(neighbor)
        for sched_junc in self.schedulers:
            if sched_junc.junction not in self.smart_cities:
                sched_junc.lights_fixed = False
