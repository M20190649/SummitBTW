import operator

# from scheduler.abstract_scheduler import AbstractScheduler
from scheduler.abstract_scheduler import AbstractScheduler

"""
Author: Ran Yeheskel

This is the main scheduler file.

Assumptions:
1) traffic light is a Detector object. This is because there is no Taffic_Light class.
2) is_green method to Detector object. no input, output boolean True iff the traffic light is green.
3) The SchedulerJunction class is responsible to schedule only one junction!
4) Scheduler object is responsible for scheduling the entire city.
5) Scheduling a junction is independent of the other junctions.

Public Methods:
Scheduler.schedule(): called every iteration of the simulator.
"""


class SchedulerJunctionAdvanced(object):
    """
    The class SchedulerJunction that schedules one junction.
    Since scheduling different junction is independent this is where all of the logic happens
    """

    def __init__(self, junction):
        # the junction to schedule
        self.junction = junction

        # # map from traffic light, to its mutual traffic lights
        # self.mutual_lights = {light: junction.get_mutual_lights(light) for light in self.lights}

        # how many cycles each traffic hasn't been scheduled. prevents starvation
        self.epoch = {light: 0 for light in self.junction.get_detectors()}

        """constants"""
        # starving time threshold
        self.starve_time = 20 * 10 ** 6
        # bonus for scheduling the current green light
        self.green_bonus_scheduling = 10
        # penalty for switching a currently green light by another.
        self.context_switch_penalty = 1000
        self.green_wave_bonus = 1000000
        self.yellow_phase_count = 0
        self._me_next_neighbors = []
        self._before_me_neighbors = []
        self.lights_fixed = False
        self.green_wave = False
        self.max_green_queue_index = -1

    def get_starved_light(self):
        """
        returns the detector with maximum starvation time if it's lane not empty and starved for time > threshold.
        if there is no such detector, returns None
        """
        occupied_lanes = self.junction.get_non_empty_lanes()
        waiting_queues = {light: self.epoch[light] for light in occupied_lanes}  # from non-empty TL to the time waiting
        if not waiting_queues:
            return None
        max_starved, time = max(waiting_queues.items(), key=operator.itemgetter(1))
        if time > self.starve_time or self.junction.green_lanes_empty():
            return max_starved
        else:
            return None

    def green_bonus(self, light):
        """
        input: a detector
        returns: the constant green_bonus_scheduling iff the light is green.
        """
        return self.green_bonus_scheduling if self.junction.is_detector_green(light) else 0

    def get_best_traffic_to_schedule(self):
        """
        returns the best traffic light to schedule at the current time.
        """
        # check starvation
        starved_light = self.get_starved_light()
        if starved_light is not None:
            return starved_light

        my_detectors_green_wave_bonus = {}
        for sched_junc in self.get_before_me_neighbors():
            if sched_junc.lights_fixed and sched_junc.green_wave and \
                    sched_junc.junction.get_key_green_phase_value_detector().get(sched_junc.junction.get_active_phase()):
                before_green_detectors = sched_junc.junction.get_key_green_phase_value_detector()[sched_junc.junction.get_active_phase()]
                for before_detector in before_green_detectors:
                    for my_detector in before_detector.get_next_detectors():
                        my_detectors_green_wave_bonus[my_detector] = self.green_wave_bonus
        for detector in self.junction.get_detectors():
            if my_detectors_green_wave_bonus.get(detector) is None:
                my_detectors_green_wave_bonus[detector] = 0

        # get the most busy lane:
        queue_length = {detector: self.junction.get_length()[detector] * detector.get_occupancy()
                                  + self.green_bonus(detector) + my_detectors_green_wave_bonus[detector] for detector in
                        self.junction.get_detectors()}
        max_busy_detector, max_queue_len = max(queue_length.items(), key=operator.itemgetter(1))
        green_detectors = self.junction.get_green_detectors()
        if not green_detectors:
            return max_busy_detector
        max_green_queue = max([queue_length[detector] for detector in green_detectors])
        if max_queue_len - self.context_switch_penalty > max_green_queue:
            return max_busy_detector
        max_green_detector = []
        for detector in green_detectors:
            if queue_length[detector] == max_green_queue:
                max_green_detector.append(detector)
        self.max_green_queue_index += 1
        if self.max_green_queue_index < len(max_green_detector):
            return max_green_detector[self.max_green_queue_index]
        self.max_green_queue_index = -1
        return max_green_detector[0]

    def update_epoch(self):
        """
        update the epoch dictionary (for each light in the junction).
        input: none
        output: none
        """
        for light in self.junction.get_detectors():
            if self.junction.is_detector_green(light):
                self.epoch[light] = 0
            else:
                self.epoch[light] += 1

    # def find_best_partner(self, best_tl):
    #     """
    #     find the best traffic light to schedule with best_tl.
    #     input: best_tl - a traffic light that is the best choice to schedule.
    #     output: a traffic light that is best to schedule simultaneously with best_tl.
    #             if not such traffic light exist, then return None.
    #     """
    #     if len(self.mutual_lights[best_tl]) != 0:
    #         return self.mutual_lights[best_tl][0]
    #     else:
    #         return None

    def get_me_next_neighbors(self):
        return self._me_next_neighbors

    def get_before_me_neighbors(self):
        return self._before_me_neighbors

    def add_me_next_neighbors(self, sched_junc):
        self._me_next_neighbors.append(sched_junc)

    def add_before_me_neighbors(self, sched_junc):
        self._before_me_neighbors.append(sched_junc)

    def schedule(self):
        """
        the main function that is called every iteration.
        input: none
        returns: none
        """
        self.lights_fixed = True
        if self.junction.is_yellow_or_red_phase():
            self.yellow_phase_count -= 1
            if self.yellow_phase_count == 0:
                best_tl = self.get_best_traffic_to_schedule()
                self.junction.set_green(best_tl, 1000)

        else:
            best_tl = self.get_best_traffic_to_schedule()
            if self.junction.is_detector_green(best_tl) and best_tl.not_stuck():
                self.junction.turn_simulator_on(1000)
            else:
                self.junction.set_yellow(self.junction.get_active_phase())
                self.yellow_phase_count = 3

        # can find the best partner to schedule to the best light if there wan't a context switch.
            # (This is good if len(mutual_lights[best_light]) > 1).
        self.update_epoch()
        # return True if best_tl is not None else False


class AdvancedScheduler(AbstractScheduler):
    """
    class Scheduler is the main class that is scheduling all the junctions in a city.
    Scheduler.scheduler() is called every iteration of the simulator in busy wait.
    """

    def __init__(self, city):
        self.schedulers = []
        key_jucn_val_sched_junc = {}
        for junction in city.get_junctions():
            sched_junc = SchedulerJunctionAdvanced(junction)
            self.schedulers += [sched_junc]
            key_jucn_val_sched_junc[junction] = sched_junc
        for sched_junc in self.schedulers:
            for neighbor in sched_junc.junction.get_me_next_neighbors():
                sched_junc.add_me_next_neighbors(key_jucn_val_sched_junc[neighbor])
            for neighbor in sched_junc.junction.get_before_me_neighbors():
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
