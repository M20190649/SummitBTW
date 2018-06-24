"""
Generating SUMO network which represents a city, with multiple junctions.
Automatically adding traffic lights to junctions as well as their logic.
"""
import sys
from random import randint

__author__ = "Eylon Shoshan"

import subprocess, os
import logging
from pathlib import Path



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


def generate_net(sumo_network_path, size, **kwargs):
    """
    Generating .net.xml that represents the a city SUMO network for simulation.
    Size is configurable.
    :param net_exists: if net already exists
    :param sumo_network_path: folder path where the exported network will be located
    :param size: network size
    :return: None
    """

    if size != 0:
        logging.info('Starting to generate SUMO network')
        netgen_bin = os.path.join(os.environ['SUMO_HOME'], 'bin', 'netgenerate.exe')
        cmd = [netgen_bin,
               '-o', sumo_network_path,
               '--default-junction-type', 'traffic_light_right_on_red',
               '--rand',
               '--rand.iterations=' + str(size),
               '--default.lanenumber', str(randint(2, 6)),
               '--rand.neighbor-dist1', str(randint(0, 10)),
               '--rand.neighbor-dist2', str(randint(0, 10)),
               '--rand.neighbor-dist3', str(randint(0, 10)),
               '--rand.neighbor-dist4', str(randint(0, 10)),
               '--rand.neighbor-dist5', str(randint(0, 10)),
               '--rand.neighbor-dist6', str(randint(0, 10)),
               '--rand.random-lanenumber',
               '--no-turnarounds',
               ]
        out = subprocess.Popen(cmd, stdin=subprocess.DEVNULL, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        out.wait()
        
        logging.info(out)
    logging.info('Starting to fix traffic_lights')
    fix_traffic_lights(sumo_network_path)
    logging.info('Finished fixing traffic_lights')

    if size != 0:
        logging.info('Finished generating SUMO network')


if __name__ == "__main__":
    path = Path(sys.argv[1])
    dir_name = path.parts[len(path.parts) - 1]
    generate_net(sys.argv[1]+"/"+dir_name+".net.xml", int(sys.argv[2])+4)

