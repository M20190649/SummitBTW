import operator

#from scheduler.abstract_scheduler import AbstractScheduler

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

"""
The class SchedulerJunction that schedules one junction.
Since scheduling different junction is independent this is where all of the logic happens
"""


class SchedulerJunction(object):
    def __init__(self, junction):
        # the junction to schedule
        self.junction = junction

        # the traffic lights in the junction
        self.lights = junction.get_lights()

        # map from traffic light, to its mutual traffic lights
        self.mutual_lights = {light: junction.get_mutual_lights(light) for light in self.lights}

        # map from TL to it's detector's length
        self.length = {light: light.get_length() for light in self.lights}

        # how many cycles each traffic hasn't been scheduled. prevents starvation
        self.epoch = {light: 0 for light in self.lights}

        """constants"""
        # occupancy's measurement error.
        self.eps = 0.00001
        # starving time threshold
        self.starve_time = 20 * 10 ** 6
        # bonus for scheduling the current green light
        self.green_bonus_scheduling = 10
        # penalty for switching a currently green light by another.
        self.context_switch_penalty = 10

    #
    """
    returns the set of detectors with occupancy > 0
    """

    def get_non_empty_lanes(self):
        return set([light for light in self.lights if light.get_occupancy() > self.eps])

    """
    returns the detector with maximum starvation time if it's lane not empty and starved for time > threshold.
    if there is no such detector, returns None
    """

    def get_starved_light(self):
        occupied_lanes = self.get_non_empty_lanes()
        waiting_queues = {light: self.epoch[light] for light in occupied_lanes}  # from non-empty TL to the time waiting
        if not waiting_queues:
            return None
        max_starved, time = max(waiting_queues.items(), key=operator.itemgetter(1))
        if time > self.starve_time:
            return max_starved
        else:
            return None

    """
    input: a detector
    returns: the constant green_bonus_scheduling iff the light is green.
    """

    def green_bonus(self, light):
        return self.green_bonus_scheduling if self.junction.is_light_green(light) else 0

    """
    returns: the list of green lights in the junction
    """

    def get_green_lights(self):
        return [light for light in self.lights if self.junction.is_light_green(light)]

    """
    returns the best traffic light to schedule at the current time.
    """

    def get_best_traffic_to_schedule(self):
        # check starvation
        starved_light = self.get_starved_light()
        if starved_light is not None:
            return starved_light

        # get the most busy lane:
        queue_length = {light: self.length[light] * light.get_occupancy() + self.green_bonus(light) for light in
                        self.lights}
        green_lights = self.get_green_lights()
        if not green_lights:
            return None
        max_green_queue = max([queue_length[light] for light in green_lights])
        max_busy_light, max_queue_len = max(queue_length.items(), key=operator.itemgetter(1))

        if max_queue_len - self.context_switch_penalty > max_green_queue:
            return max_busy_light
        return None

    """
    Makes the context switch between the desired lights.
    input: list of lights to turn green.
    output: None
    """

    def context_switch(self, lights):
        self.junction.set_green(lights)

    """
    update the epoch dictionary (for each light in the junction).
    input: none
    output: none
    """

    def update_epoch(self):
        for light in self.lights:
            if self.junction.is_light_green(light):
                self.epoch[light] = 0
            else:
                self.epoch[light] += 1

    """
    find the best traffic light to schedule with best_tl.
    input: best_tl - a traffic light that is the best choice to schedule.
    output: a traffic light that is best to schedule simultaneously with best_tl.
            if not such traffic light exist, then return None.
    """

    def find_best_partner(self, best_tl):
        if len(self.mutual_lights[best_tl]) != 0:
            return self.mutual_lights[best_tl][0]
        else:
            return None

    """
    the main function that is called every iteration.
    input: none
    returns: True if a context switch has occurred (and else returns False).
    """

    def schedule(self):
        best_tl = self.get_best_traffic_to_schedule()
        if best_tl is not None:
            best_partner_tl = self.find_best_partner(best_tl)
            to_schedule = [best_tl]
            if best_partner_tl is not None:
                to_schedule += [best_partner_tl]
            self.context_switch(to_schedule)

        # TODO: can find the best partner to schedule to the best light if there wan't a context switch.
        # (This is good if len(mutual_lights[best_light]) > 1).

        self.update_epoch()
        return True if best_tl is not None else False


"""
class Scheduler is the main class that is scheduling all the junctions in a city.
Scheduler.scheduler() is called every iteration of the simulator in busy wait.
"""


class Scheduler(object):
    def __init__(self, city):
        self.schedulers = []
        for junction in city.get_junctions():
            junction_scheduler = SchedulerJunction(junction)
            self.schedulers += [junction_scheduler]

        self.num_junctions = len(self.schedulers)
        self.junction_to_schedule = 0

    """
    The function that is called with busy wait in the simulator.
    schedule each junction in a round robin way.
    Each junction is scheduled independent of the other junctions using SchedulerJunction.schedule()
    
    input: none
    output: True if a context_switch has occured and Flase otherwise.
    """

    def schedule(self):
        context_switch_occurred = self.schedulers[self.junction_to_schedule].schedule()
        self.junction_to_schedule = (self.junction_to_schedule + 1) % self.num_junctions
        return context_switch_occurred
