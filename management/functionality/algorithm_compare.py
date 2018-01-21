import os
from sys import argv

from scheduler.scheduler_constants import schedulers_name_map
from simulator.simulate import run_simulation_example
from statistics.get_statistics import create_statistics

__author__ = "Yair Feldman"

TEMP_OUT_DIR = "./temp_outputs/"  # TODO: define in constants file of this module


def compare_algorithms(simulation_example, *scheduler_names):
    """
    runs a simulation with both schedulers and compares their performance
    :param simulation_example: the config file for running the simulation
    :param scheduler_names: the schedulers to compare
    :return: statistics dictionary
    """
    if not os.path.exists(TEMP_OUT_DIR):
        os.makedirs(TEMP_OUT_DIR)

    for scheduler_name in scheduler_names:
        run_simulation_example(simulation_example, schedulers_name_map[scheduler_name], real_time=False,
                               gui=False, output_file=os.path.join(TEMP_OUT_DIR, scheduler_name))

    output_files = [os.path.join(TEMP_OUT_DIR, scheduler_name) for
                    scheduler_name in scheduler_names]

    return create_statistics(TEMP_OUT_DIR + "stats.csv", True, *output_files)


if __name__ == '__main__':
    if len(argv) < 3:
        raise ValueError('bad input. should be: <config_file> <scheduler_name_1> ...')
    compare_algorithms(argv[1], *argv[2:])
