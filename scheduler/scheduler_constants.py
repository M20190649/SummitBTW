from scheduler.max_occupancy_scheduler import MaxOccupancyScheduler
from scheduler.mixed_scheduler import MixedScheduler
from scheduler.scheduler import Scheduler
from scheduler.static_scheduler import StaticScheduler

schedulers_name_map = {
    Scheduler.__name__: Scheduler,
    MixedScheduler.__name__: MixedScheduler,
    MaxOccupancyScheduler.__name__: MaxOccupancyScheduler,
    StaticScheduler.__name__: StaticScheduler
}
