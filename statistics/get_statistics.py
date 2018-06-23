import xml.etree.ElementTree as Et
import sys
import functools as funcs
import operator as ops
import logging
import time
from statistics.statistic_printer import TablePrinter


class Tripinfo(object):
    """A class to represent a tripinfo object"""

    def __init__(self, parsed_info):
        self.id = parsed_info['id']
        self.depart = float(parsed_info['depart'])
        self.departLane = parsed_info['departLane']
        self.departPos = float(parsed_info['departPos'])
        self.departSpeed = float(parsed_info['departSpeed'])
        self.departDelay = float(parsed_info['departDelay'])
        self.arrival = float(parsed_info['arrival'])
        self.arrivalLane = parsed_info['arrivalLane']
        self.arrivalPos = float(parsed_info['arrivalPos'])
        self.arrivalSpeed = float(parsed_info['arrivalSpeed'])
        self.duration = float(parsed_info['duration'])
        self.routeLength = float(parsed_info['routeLength'])
        self.waitingTime = float(parsed_info['waitingTime'])
        self.waitingCount = int(parsed_info['waitingCount'])
        self.stopTime = float(parsed_info['stopTime'])
        self.timeLoss = float(parsed_info['timeLoss'])
        self.rerouteNo = float(parsed_info['rerouteNo'])
        self.devices = parsed_info['devices'].split(';')
        self.vType = parsed_info['vType']
        self.speedFactor = float(parsed_info['speedFactor'])
        self.vaporized = bool(parsed_info['vaporized'])


def get_tripinfos(filename):
    """Initialize a tripinfo list from the tree object"""
    tripinfos = []
    try:
        tree = Et.parse(filename)
    except FileNotFoundError:
        logging.debug("Couldn't find given file")
        exit(-1)
    root = tree.getroot()
    for child in root:
        tripinfos.append(Tripinfo(child.attrib))
    logging.info(f'Parsed {len(tripinfos)} tripinfos from file {filename}')
    return tripinfos


def get_stats():
    l = list()
    logging.debug("Starting the statistics evaluations")
    l.append(('Total Time-Loss',
              lambda infos: funcs.reduce(ops.add, [info.timeLoss for info in infos])))
    l.append(('Average Time-Loss',
              lambda infos: funcs.reduce(ops.add, [info.timeLoss for info in infos]) / len(infos)))
    l.append(('Max Time-Loss',
              lambda infos: max([info.timeLoss for info in infos])))
    l.append(('Minimum Time-Loss',
              lambda infos: min([info.timeLoss for info in infos])))
    l.append(('Total waitingTime',
              lambda infos: funcs.reduce(ops.add, [info.waitingTime for info in infos])))
    l.append(('Average waitingTime',
              lambda infos: funcs.reduce(ops.add, [info.waitingTime for info in infos]) / len(infos)))
    l.append(('Max waitingTime',
              lambda infos: max([info.waitingTime for info in infos])))
    l.append(('Minimum waitingTime',
              lambda infos: min([info.waitingTime for info in infos])))
    l.append(('Total Duration',
              lambda infos: funcs.reduce(ops.add, [info.duration for info in infos])))
    l.append(('Average Duration',
              lambda infos: funcs.reduce(ops.add, [info.duration for info in infos]) / len(infos)))
    l.append(('Max Duration',
              lambda infos: max([info.duration for info in infos])))
    l.append(('Minimum Duration',
              lambda infos: min([info.duration for info in infos])))
    l.append(('Total routeLength',
              lambda infos: funcs.reduce(ops.add, [info.routeLength for info in infos])))
    l.append(('Average routeLength',
              lambda infos: funcs.reduce(ops.add, [info.routeLength for info in infos]) / len(infos)))
    l.append(('Max routeLength',
              lambda infos: max([info.routeLength for info in infos])))
    l.append(('Minimum routeLength',
              lambda infos: min([info.routeLength for info in infos])))

    logging.info(f"Added {len(l)} statistics")
    return l


def create_csv(statistics, tripinfo_files, output_filename):
    into_cvs = "Statistics,"
    for filename in tripinfo_files:
        into_cvs += str(filename) + ","
    into_cvs = into_cvs[:len(into_cvs) - 1]+"\n"
    for stat in statistics.keys():
        into_cvs += str(stat)+","
        for vals in statistics[stat]:
            into_cvs += str(vals) + ","
        into_cvs = into_cvs[:len(into_cvs) - 1] + "\n"
    text_file = open(output_filename, "w")
    text_file.write(into_cvs)
    text_file.close()


def create_statistics(to_csv=None, to_print=True, *tripinfo_files, dest_folder=None):
    """
    create statistics for the tripinfo files received as parameters
    :param dest_folder: where the output csv file should be written to
    :param to_csv: path to csv output file, default is None (no csv output)
    :param to_print: whether to print the statistics to stdout or not
    :param tripinfo_files: .xml files of simulation outputs
    :return: Statistics dictionary
    """
    if len(tripinfo_files) < 1:
        raise ValueError('Wrong usage, Please enter an xml filename!')

    log_filename = f'logger_{str(time.time()).replace(".", "")}.log'
    logging.basicConfig(filename=log_filename, level=logging.DEBUG)
    statistics = {}
    statistics_lambdas = get_stats()
    for filename in tripinfo_files:
        curr_info = get_tripinfos(filename)
        for msg, f in statistics_lambdas:
            if msg not in statistics:
                statistics[msg] = []
            try:
                statistics[msg].append(f(curr_info))
            except:
                logging.debug(f"Evaluation of statistic {msg} failed")
    if to_print:
        printer = TablePrinter(tripinfo_files, statistics)
        printer.print()
    if to_csv is not None:
        path_to_write = to_csv
        if dest_folder is not None:
            path_to_write = dest_folder + '/' + to_csv
        create_csv(statistics, tripinfo_files, path_to_write)
    return statistics


if __name__ == '__main__':
    create_statistics("output_tripinfo.csv", True, *sys.argv[1:], dest_folder=None)
