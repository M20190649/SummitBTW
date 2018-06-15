"""
Generating SUMO network which represents a city, with multiple junctions.
Automatically adding traffic lights to junctions as well as their logic.
"""
import sys

__author__ = "Eylon Shoshan"

import subprocess
import logging


def change_g_to_y(text, i):
    if text[i - 1] is 'o':
        return False
    if text[text.find('duration=', i) + 9:text.find('duration=', i) + 12] != '"3"':
        return True
    return False


def fix_traffic_lights(sumo_network_path):
    with open(sumo_network_path, 'r') as net_file:
        text = net_file.read()
        start = text.find('<tlLogic id="')
        end = text.find('<junction id="')
        list_text = []
        for i in range(0, len(text)):
            if i < start:
                list_text.append(text[i])
            elif i < end:
                if text[i] == 'g' and change_g_to_y(text, i):
                    list_text.append('y')
                else:
                    list_text.append(text[i])
            else:
                list_text.append(text[i])
    net_file = open(sumo_network_path, 'w')
    net_file.write(''.join(list_text))
    net_file.close()


def generate_net(sumo_network_path, net_exists, size=50):
    """
    Generating .net.xml that represents the a city SUMO network for simulation.
    Size is configurable.
    :param net_exists: if net already exists
    :param sumo_network_path: folder path where the exported network will be located
    :param size: network size
    :return: None
    """

    if not net_exists:
        logging.info('Starting to generate SUMO network')
        cmd = ['netgenerate',
               '-o', sumo_network_path,
               '--default-junction-type', 'traffic_light_right_on_red',
               '--rand',
               '--rand.iterations=' + str(size),
               '--default.lanenumber', '3',
               '--rand.random-lanenumber',
               '--no-turnarounds',
               ]
        out = subprocess.check_output(cmd)
        logging.info(out)
    logging.info('Starting to fix traffic_lights')
    fix_traffic_lights(sumo_network_path)
    logging.info('Finished fixing traffic_lights')

    if not net_exists:
        logging.info('Finished generating SUMO network')


if __name__ == "__main__":
    splited = sys.argv[1].split("/")
    generate_net(sys.argv[1]+"/"+splited[len(splited)-1]+".net.xml", False)
