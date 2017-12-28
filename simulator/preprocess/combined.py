"""
Combining all of the preprocessing parts of simulation creation into a single unit.
This script offers all necessary files for SUMO simulation,
including SUMO network, traffic lights, detectors and vehicles trips.
"""
import logging

from simulator.preprocess.detectors import add_detectors
from simulator.preprocess.network import generate_net
from simulator.preprocess.random_trips import generate_trips

__author__ = "Eylon Shoshan"


def prepare_simulation(path="."):
    """
    Preparing a full SUMO simulation with traffic lights, detectors and trips files.
    :param path: folder to output all simulation files
    :return: None
    """

    logging.info('Starting to generate full simulation')

    sumo_network = path + "/city.net.xml"
    generate_net(sumo_network)
    add_detectors(sumo_network)
    generate_trips(sumo_network, path)

    logging.info('Finished to prepare simulation. All relevant files were created.')
