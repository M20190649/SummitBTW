import xml.etree.ElementTree as Et
import sys
import functools as funcs
import operator as ops
import logging
import time
from SummitBTW.statistics.statistic_printer import TablePrinter


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
        self.waitSteps = int(parsed_info['waitSteps'])
        self.timeLoss = float(parsed_info['timeLoss'])
        self.rerouteNo = int(parsed_info['rerouteNo'])
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
    l.append(('Total waitSteps',
              lambda infos: funcs.reduce(ops.add, [info.waitSteps for info in infos])))
    l.append(('Average waitSteps',
              lambda infos: funcs.reduce(ops.add, [info.waitSteps for info in infos]) / len(infos)))
    l.append(('Max waitSteps',
              lambda infos: max([info.waitSteps for info in infos])))
    l.append(('Minimum waitSteps',
              lambda infos: min([info.waitSteps for info in infos])))
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


def main():
    if len(sys.argv) < 2:
        print('Wrong usage, Please enter an xml filename!')
        exit(-1)

    log_filename = f'logger_{str(time.time()).replace(".", "")}.log'
    logging.basicConfig(filename=log_filename, level=logging.DEBUG)

    statistics = {}
    statistics_lambdas = get_stats()
    for filename in sys.argv[1:]:
        curr_info = get_tripinfos(filename)
        for msg, f in statistics_lambdas:
            if msg not in statistics:
                statistics[msg] = []
            try:
                statistics[msg].append(f(curr_info))
            except:
                logging.debug(f"Evaluation of statistic {msg} failed")

    printer = TablePrinter(sys.argv[1:], statistics)
    printer.print()


if __name__ == '__main__':
    main()
