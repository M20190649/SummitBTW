"""
Generating SUMO network which represents a city, with multiple junctions.
Automatically adding traffic lights to junctions as well as their logic.
"""

__author__ = "Eylon Shoshan"

import subprocess
import logging


def generate_net(sumo_network_path=".", size=30):
    """
    Generating .net.xml that represents the a city SUMO network for simulation.
    Size is configurable.
    :param sumo_network_path: folder path where the exported network will be located
    :param size: network size
    :return: None
    """

    logging.info('Starting to generate SUMO network')

    cmd = ['netgenerate',
           '-o', sumo_network_path,
           '--tls.guess',
           '--tls.left-green.time', '0',
           '--rand',
           '--rand.iterations=' + str(size),
           '--rand.neighbor-dist5', '0',
           '--rand.neighbor-dist6', '0',
           '--default.lanenumber', '2',
           '--no-turnarounds'
           ]

    out = subprocess.check_output(cmd)

    logging.info(out)
    logging.info('Finished generating SUMO network')

