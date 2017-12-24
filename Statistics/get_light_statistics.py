import xml.etree.ElementTree as Et
import sys
import functools as funcs
import operator as ops
import logging
import time
from statistic_printer import TablePrinter

class Lightinfo(object):
    """A class to represent a lightinfo object"""

    def __init__(self, parsed_info):
        self.begin = float(parsed_info['begin'])
        self.end = float(parsed_info['end'])
        self.id = parsed_info['id']
        self.sampledSeconds = float(parsed_info['sampledSeconds'])
        self.nVehEntered = int(parsed_info['nVehEntered'])
        self.nVehLeft = int(parsed_info['nVehLeft'])
        self.nVehSeen = int(parsed_info['nVehSeen'])
        self.meanSpeed = float(parsed_info['meanSpeed'])
        self.meanTimeLoss = float(parsed_info['meanTimeLoss'])
        self.meanOccupancy = float(parsed_info['meanOccupancy'])
        self.maxOccupancy = float(parsed_info['maxOccupancy'])
        self.meanMaxJamLengthInVehicles = int(float(parsed_info['meanMaxJamLengthInVehicles']))
        self.meanMaxJamLengthInMeters = float(parsed_info['meanMaxJamLengthInMeters'])
        self.maxJamLengthInVehicles = int(parsed_info['maxJamLengthInVehicles'])
        self.maxJamLengthInMeters = float(parsed_info['maxJamLengthInMeters'])
        self.jamLengthInVehiclesSum = int(parsed_info['jamLengthInVehiclesSum'])
        self.jamLengthInMetersSum = float(parsed_info['jamLengthInMetersSum'])
        self.meanHaltingDuration = float(parsed_info['meanHaltingDuration'])
        self.maxHaltingDuration = float(parsed_info['maxHaltingDuration'])
        self.haltingDurationSum = float(parsed_info['haltingDurationSum'])
        self.meanIntervalHaltingDuration = float(parsed_info['meanIntervalHaltingDuration'])
        self.maxIntervalHaltingDuration = float(parsed_info['maxIntervalHaltingDuration'])
        self.intervalHaltingDurationSum = float(parsed_info['intervalHaltingDurationSum'])
        self.startedHalts = int(float(parsed_info['startedHalts']))
        self.meanVehicleNumber = int(float(parsed_info['meanVehicleNumber']))
        self.maxVehicleNumber = int(float(parsed_info['maxVehicleNumber']))


def get_lightinfos(filename):
    """Initialize a lightinfo list from the tree object"""
    lightinfos = []
    try:
        tree = Et.parse(filename)
    except FileNotFoundError:
        logging.debug("Couldn't find given file")
        exit(-1)
    root = tree.getroot()
    for child in root:
        light = Lightinfo(child.attrib)
        exist = False
        for info_id, info in lightinfos:
            if info_id == light.id:
                info.append(light)
                exist = True
        if not exist:
            lightinfos.append((light.id, [light]))
    logging.info(f'Parsed {len(lightinfos)} lightinfos from file {filename}')
    return lightinfos


def get_stats():
    l = list()
    logging.debug("Starting the statistics evaluations")
    l.append(('Total Time-Loss',
              lambda infos: funcs.reduce(ops.add, [data.maxJamLengthInMeters for _, info in infos for data in info])))

    logging.info(f"Added {len(l)} statistics")
    return l


def main():
    if len(sys.argv) < 2:
        print('Wrong usage, Please enter an xml filename!')
        exit(-1)

    log_filename = f'logger_{str(time.time()).replace(".", "")}.log'
    logging.basicConfig(filename=log_filename, level=logging.DEBUG)

    lightinfos = []
    statistics = {}
    statistics_lambdas = get_stats()
    for filename in sys.argv[1:]:
        curr_info = get_lightinfos(filename)
        lightinfos.append(curr_info)
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
