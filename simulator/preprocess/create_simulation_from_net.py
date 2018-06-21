"""
Combining all of the preprocessing parts of simulation creation into a single unit.
This script offers all necessary files for SUMO simulation,
including SUMO network, traffic lights, detectors and vehicles trips.
"""
import sys

from simulator.preprocess.create_simulation_from_scratch import prepare_simulation

__author__ = "Eylon Shoshan"


if __name__ == '__main__':
    prepare_simulation(0, fringe_factor=10000, period=0.75, binomial=10000, end=int(sys.argv[2]) / 1.3)
                       # , fringe_factor=10000)  # uncomment to use, see further documentation in random_trips.py
                       # binomial=10000, period=5)
