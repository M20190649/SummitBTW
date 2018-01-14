from sys import argv

from scheduler.scheduler_constants import schedulers_name_map
from simulator.simulate import run_sumo


def run_visual_simulation(config_file, scheduler_name):
    """
    runs a visual simulation with real-time statistics
    :param config_file: the config file for the simulation
    :param scheduler_name: the name of the scheduler for the simulation
    :return:
    """
    run_sumo(config_file, schedulers_name_map[scheduler_name], real_time=True,
             gui=True, output_file=None)


if __name__ == '__main__':
    if len(argv) < 3:
        raise ValueError('bad input. should be: <config_file> <scheduler_name>')
    run_visual_simulation(argv[1], argv[2])
