from scheduler.abstract_scheduler import AbstractScheduler


class SchedulerJunctionMaxOccupancy(object):
    """
    The class SchedulerJunction that schedules one junction.
    Since scheduling different junction is independent this is where all of the logic happens
    """

    def __init__(self, junction):
        # the junction to schedule
        self.junction = junction
        self.yellow_phase_count = 3

    def get_most_occupied_traffic_to_schedule(self):
        max_occupancy_det = None
        max_occupancy = -1
        for light in self.junction.get_detectors():
            if light.get_occupancy() > max_occupancy:
                max_occupancy = light.get_occupancy()
                max_occupancy_det = light
        return max_occupancy_det

    def schedule(self):
        """
        the main function that is called every iteration.
        input: none
        returns: none
        """
        if self.junction.is_yellow_or_red_phase():
            self.yellow_phase_count -= 1
            if self.yellow_phase_count == 0:
                best_tl = self.get_most_occupied_traffic_to_schedule()
                if best_tl is None:
                    raise ValueError("It should had return a detector")
                self.junction.set_green(best_tl)

        else:
            best_tl = self.get_most_occupied_traffic_to_schedule()  # None if it is a yellow phase
            if best_tl is not None and not self.junction.is_detector_green(best_tl):
                self.junction.set_yellow(self.junction.get_active_phase())
                self.yellow_phase_count = 3


class MaxOccupancyScheduler(AbstractScheduler):
    """
    class Scheduler is the main class that is scheduling all the junctions in a city.
    Scheduler.scheduler() is called every iteration of the simulator in busy wait.
    """

    def __init__(self, city):
        self.schedulers = []
        for junction in city.get_junctions():
            if junction.detectors_ok():
                self.schedulers.append(SchedulerJunctionMaxOccupancy(junction))

    def schedule(self):
        """
        The function that is called with busy wait in the simulator.
        schedule each junction.
        Each junction is scheduled using SchedulerJunctionMaxOccupancy.schedule()

        input: none
        output: none
        """
        for sched_junc in self.schedulers:
            sched_junc.schedule()
