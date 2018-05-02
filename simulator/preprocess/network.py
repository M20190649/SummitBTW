"""
Generating SUMO network which represents a city, with multiple junctions.
Automatically adding traffic lights to junctions as well as their logic.
"""

__author__ = "Eylon Shoshan"

import subprocess
import logging


def change_g_to_y(text, i):
    if text[i - 1] is 'o':
        return False
    duration = text.find("duration", i)
    num = text[duration + 9] + text[duration + 10] + text[duration + 11]
    if num == '"3"':
        return False
    return True


def fix_traffic_lights(sumo_network_path):
    with open(sumo_network_path, 'r') as myfile:
        text = myfile.read()
        start = text.find('tlLogic id="')
        end = text.find('junction id="')
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
    myfile = open(sumo_network_path, 'w')
    myfile.write(''.join(list_text))
    myfile.close()


def generate_net(sumo_network_path, size=30):
    """
    Generating .net.xml that represents the a city SUMO network for simulation.
    Size is configurable.
    :param sumo_network_path: folder path where the exported network will be located
    :param size: network size
    :return: None
    """

    logging.info('Starting to generate SUMO network')

    # cmd = ['netgenerate',
    #        '-o', sumo_network_path,
    #        '--tls.guess',
    #        '--tls.left-green.time', '0',
    #        '--rand',
    #        '--rand.iterations=' + str(size),
    #        '--rand.neighbor-dist5', '0',
    #        '--rand.neighbor-dist6', '0',
    #        '--default.lanenumber', '1',
    #        '--no-turnarounds',
    #        '--no-left-connections'  # To prevent collisions
    #        ]

    cmd = ['netgenerate',
           '-o', sumo_network_path,
           '--tls.guess',
           '--rand',
           '--rand.iterations=' + str(size),
           '--rand.neighbor-dist5', '0',
           '--rand.neighbor-dist6', '0',
           '--default.lanenumber', '1',
           '--no-turnarounds',
           ]

    out = subprocess.check_output(cmd)

    logging.info(out)
    fix_traffic_lights(sumo_network_path)
    logging.info('Finished generating SUMO network')
