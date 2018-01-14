import os
from sys import argv

from scheduler.scheduler_constants import schedulers_name_map
from simulator.simulate import run_sumo
from statistics.get_statistics import create_statistics

TEMP_OUT_DIR = "./temp_outputs"


def compare_algorithms(config_file, *scheduler_names):
    """
    runs a simulation with both schedulers and compares their performance
    :param config_file: the config file for running the simulation
    :param scheduler_names: the schedulers to compare
    :return:
    """
    if not os.path.exists(TEMP_OUT_DIR):
        os.makedirs(TEMP_OUT_DIR)

    for scheduler_name in scheduler_names:
        run_sumo(config_file, schedulers_name_map[scheduler_name], real_time=False,
                 gui=False, output_file=os.path.join(TEMP_OUT_DIR, scheduler_name))

    output_files = [os.path.join(TEMP_OUT_DIR, scheduler_name) for
                    scheduler_name in scheduler_names]

    create_statistics(None, True, *output_files)


if __name__ == '__main__':
    if len(argv) < 3:
        raise ValueError('bad input. should be: <config_file> <scheduler_name_1> ...')
    compare_algorithms(argv[1], *argv[2:])
