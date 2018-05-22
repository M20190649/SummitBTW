"""
Generating SUMO network which represents a city, with multiple junctions.
Automatically adding traffic lights to junctions as well as their logic.
"""

__author__ = "Eylon Shoshan"

import subprocess
import logging


# def change_g_to_y(text, i):
#     if text[i - 1] is 'o':
#         return False
#     duration = text.find("duration", i)
#     num = text[duration + 9] + text[duration + 10] + text[duration + 11]
#     if num == '"3"':
#         return False
#     return True

def change_g_to_r(text, i):
    if text[i - 1] is 'o':
        return False
    return True


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
                if text[i] == '6' and text[i-10:i-2] == "duration":
                    list_text.append('15')
                elif text[i] == 'g' and change_g_to_r(text, i):
                    list_text.append('r')
                else:
                    list_text.append(text[i])
            else:
                list_text.append(text[i])
    net_file = open(sumo_network_path, 'w')
    net_file.write(''.join(list_text))
    net_file.close()


def generate_net(sumo_network_path, size=50):
    """
    Generating .net.xml that represents the a city SUMO network for simulation.
    Size is configurable.
    :param sumo_network_path: folder path where the exported network will be located
    :param size: network size
    :return: None
    """

    # logging.info('Starting to generate SUMO network')
    #     # cmd = ['netgenerate',
    #     #        '-o', sumo_network_path,
    #     #        '--default-junction-type', 'traffic_light_right_on_red',
    #     #        '--rand',
    #     #        '--rand.iterations=' + str(size),
    #     #        '--default.lanenumber', '3',
    #     #        '--rand.random-lanenumber',
    #     #        '--no-turnarounds',
    #     #        ]
    #     # out = subprocess.check_output(cmd)
    #     # logging.info(out)

    fix_traffic_lights(sumo_network_path)
    logging.info('Finished generating SUMO network')
