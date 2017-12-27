import sys
import logging
import functools as funcs
import operator as ops
import xml.etree.ElementTree as Et
import time
from Simulator.realtime import city as Cy
from Simulator.realtime import junction as Jn
from Simulator.realtime import detector as Dr


def get_detector_from_info(parsed_info):
    id_of_tls = parsed_info['id']
    link_index = 1  # TODO: fill
    green_phases = 1  # TODO: fill
    return Dr.Detector(id_of_tls, link_index, green_phases)


def get_detectors_and_junctions_infos(filename):
    """Initialize a detectors list from the tree object"""
    detector_dict = {}
    junction_dict_val_list = {}
    junction_dict_res = {}
    try:
        tree = Et.parse(filename)
    except FileNotFoundError:
        logging.debug("Couldn't find given file")
        exit(-1)
    root = tree.getroot()
    for child in root:
        d = get_detector_from_info(child.attrib)
        detector_dict[d._identifier] = d
    for detector in detector_dict.values():
        tls_id = detector._identifier.split('_')[0]
        if tls_id not in junction_dict_val_list:
            junction_dict_val_list[tls_id] = []
        junction_dict_val_list[tls_id].append(detector._identifier)
    for k in junction_dict_val_list.keys():
        junction_dict_res[k] = Jn.Junction(k, junction_dict_val_list[k])
    return detector_dict, junction_dict_res

    logging.info(f'Parsed {len(detector_infos)} detector_infos from file {filename}')
    return detector_infos


def main():
    if len(sys.argv) < 3:
        print('Wrong usage, Please enter a net.xml filename for the city structure and a .xml for the detectors '
              'distribution')
        exit(-1)

    log_filename = f'logger_{str(time.time()).replace(".", "")}.log'
    logging.basicConfig(filename=log_filename, level=logging.DEBUG)
    detector_dict, junction_dict = get_detectors_and_junctions_infos(sys.argv[2])
    for d in detector_dict.values():
        print(d._identifier)
    for j in junction_dict.values():
        print(j._traffic_light_id +" and " +j._detectors)
    while True:
        id = input("Write id of object you are interested for. Write exit to stop the program\n")
        if id in detector_dict:
            print(detector_dict[id])
        elif id in junction_dict:
            print(junction_dict[id])
        elif id == "exit":
            print("Bye Bye!\n")
            break;
        else:
            print("The id was not found. try again.\n")


if __name__ == '__main__':
    main()
