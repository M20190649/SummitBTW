"""
Combining all of the preprocessing parts of simulation creation into a single unit.
This script offers all necessary files for SUMO simulation,
including SUMO network, traffic lights, detectors and vehicles trips.
"""
__author__ = "Eylon Shoshan"
import logging
import os
import xml.etree.cElementTree as et
from xml.etree.ElementTree import Element, SubElement

from simulator.preprocess.detectors import add_detectors
from simulator.preprocess.network import generate_net
from simulator.preprocess.random_trips import generate_trips


def _configuration_file(path):
    config_xml = Element('configuration')

    input_element = SubElement(config_xml, "input")
    SubElement(input_element, "net-file").set("value", "city.net.xml")
    SubElement(input_element, "route-files").set("value", "routes.rou.alt.xml")
    SubElement(input_element, "additional-files").set("value", "e2.add.xml")

    config_path = os.path.join(path, "city.sumocfg.xml")
    config_tree = et.ElementTree(config_xml)
    config_tree.write(config_path)


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
    _configuration_file(path)

    logging.info('Finished to prepare simulation. All relevant files were created.')
