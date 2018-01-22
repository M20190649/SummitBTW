import os
from sys import argv
import logging
from scheduler.scheduler_constants import schedulers_name_map
from simulator.simulate import run_sumo

__author__ = "Yair Feldman"

def run_visual_simulation(simulation_example, scheduler_name, real_time=True):
    """
    runs a visual simulation with real-time statistics
    :param real_time: activating real time statistics
    :param simulation_example: folder of simulations files with single sumocfg file
    :param scheduler_name: the name of the scheduler for the simulation
    :return:
    """
    try:
        sumocfg = [f for f in os.listdir(simulation_example) if f.endswith('.sumocfg.xml')][0]
        run_sumo(simulation_example + "/" + sumocfg,schedulers_name_map[scheduler_name], real_time,
                 gui=True, output_file=None)
    except IndexError:
        logging.error("No sumocfg file in this simulation example")
        raise ValueError("Insert example with sumocfg file")


if __name__ == '__main__':
    if len(argv) < 3:
        raise ValueError('bad input. should be: <simulation folder> <scheduler_name>')
    run_visual_simulation(argv[1], argv[2])
