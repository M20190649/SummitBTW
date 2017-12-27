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
    detector_infos = []
    junction_dict = {}
    junction_info = []
    try:
        tree = Et.parse(filename)
    except FileNotFoundError:
        logging.debug("Couldn't find given file")
        exit(-1)
    root = tree.getroot()
    for child in root:
        detector_infos.append(get_detector_from_info(child.attrib))
    for detector in detector_infos:
        tls_id = detector.get_identifier().split('_')[0]
        if tls_id not in junction_dict:
            junction_dict[tls_id] = []
        junction_dict[tls_id].append(detector.get_identifier())
    for k in junction_dict.keys():
        junction_info.append(Jn.Junction(k, junction_dict[k]))
    return (detector_infos, junction_info)

    logging.info(f'Parsed {len(detector_infos)} detector_infos from file {filename}')
    return detector_infos


def main():
    if len(sys.argv) < 3:
        print('Wrong usage, Please enter a net.xml filename for the city structure and a .xml for the detectors '
              'distribution')
        exit(-1)

    log_filename = f'logger_{str(time.time()).replace(".", "")}.log'
    logging.basicConfig(filename=log_filename, level=logging.DEBUG)
    detector_infos, junction_infos = get_detectors_and_junctions_infos(sys.argv[2])
    for j in  junction_infos:
        print(j._traffic_light_id +" and " +j._detectors)


if __name__ == '__main__':
    main()
