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
    def __init__(self, city):
        self.schedulers = []
        key_jucn_val_sched_junc = {}
        for junction in city.get_junctions():
            sched_junc = SchedulerJunctionAdvanced(junction)
            key_jucn_val_sched_junc[junction] = sched_junc
        for junction in city.get_smart_junctions():
            sched_junc = key_jucn_val_sched_junc[junction]
            if sched_junc.junction.detectors_ok():
                self.schedulers += [sched_junc]
                for neighbor in sched_junc.junction.get_me_next_neighbors():
                    if neighbor.detectors_ok():
                        sched_junc.add_me_next_neighbors(key_jucn_val_sched_junc[neighbor])
                for neighbor in sched_junc.junction.get_before_me_neighbors():
                    if neighbor.detectors_ok():
                        sched_junc.add_before_me_neighbors(key_jucn_val_sched_junc[neighbor])

    def start_green_wave(self):
        res = []
        for sched_junc in self.schedulers:
            if sched_junc.junction.is_there_full_detector():
                sched_junc.green_wave = True
                res.append(sched_junc)
        return res

    def schedule(self):
        """
        The function that is called with busy wait in the simulator.
        schedule each junction.
        Each junction is scheduled using SchedulerJunction.schedule()

        input: none
        output: none
        """

        lights_to_fix = self.start_green_wave()
        for sched_junc in self.schedulers:
            if sched_junc not in lights_to_fix and not sched_junc.lights_fixed:
                lights_to_fix.append(sched_junc)
            while lights_to_fix:
                curr = lights_to_fix.pop()
                curr.schedule()
                for neighbor in curr.get_me_next_neighbors():
                    if neighbor not in lights_to_fix and not neighbor.lights_fixed:
                        lights_to_fix.append(neighbor)

        for sched_junc in self.schedulers:
            sched_junc.lights_fixed = False
            sched_junc.green_wave = False
            for neighbor in sched_junc.get_me_next_neighbors():
                neighbor.lights_fixed = False
                neighbor.green_wave = False

