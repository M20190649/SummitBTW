"""
Combining all of the preprocessing parts of simulation creation into a single unit.
This script offers all necessary files for SUMO simulation,
including SUMO network, traffic lights, detectors and vehicles trips.
"""
import sys
sys.path.insert(0, 'D:\\home\\site\\wwwroot\\sumo-0.32.0\\tools')

__author__ = "Eylon Shoshan"
import logging
import os
import xml.etree.cElementTree as et
from xml.etree.ElementTree import Element, SubElement

from simulator.preprocess.detectors import add_detectors
from simulator.preprocess.network import generate_net
from simulator.preprocess.random_trips import generate_trips
from pathlib import Path


def _configuration_file(path, directory_name):
    config_xml = Element('configuration')

    input_element = SubElement(config_xml, "input")
    SubElement(input_element, "net-file").set("value", directory_name + ".net.xml")
    SubElement(input_element, "route-files").set("value", "routes.rou.alt.xml")
    SubElement(input_element, "additional-files").set("value", "e2.add.xml")

    config_path = os.path.join(path, directory_name + ".sumocfg.xml")
    config_tree = et.ElementTree(config_xml)
    config_tree.write(config_path)


def prepare_simulation(size, **kwargs):
    """
    Preparing a full SUMO simulation with traffic lights, detectors and trips files.
    :param net_exists: if net already exists
    :param size: size of net if a new one is created
    :param kwargs: keyword arguments to be passed to the random trip generator
    :return: None
    """
    path = Path(sys.argv[1])
    dir_name = path.parts[len(path.parts) - 1]
    logging.info('Starting to generate full simulation')

    sumo_network = sys.argv[1] + "/" + dir_name + ".net.xml"
    generate_net(sumo_network, size)
    add_detectors(sumo_network)
    generate_trips(sumo_network, sys.argv[1], **kwargs)
    _configuration_file(sys.argv[1], dir_name)

    logging.info('Finished to prepare simulation. All relevant files were created.')


if __name__ == '__main__':
    prepare_simulation(int(sys.argv[3])+4, fringe_factor=10000, period=0.75, binomial=10000, end=int(sys.argv[2])/1.3) #equals to Poisson distribution

