import xml.etree.ElementTree as Et
import sys
import logging
import time
from statistics.statistic_printer import TablePrinter


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


# this lambdas compute on all the information
def get_global_stats():
    l = list()
    logging.debug("Starting the statistics evaluations")
    l.append(('Max Jam Length In Meters',
              lambda infos: max([data.maxJamLengthInMeters for _, info in infos for data in info])))
    l.append(('Max Jam Length In Vehicles',
              lambda infos: max([data.maxJamLengthInVehicles for _, info in infos for data in info])))

    logging.info(f"Added {len(l)} global statistics")
    return l


# this lambdas compute on a specific detector
def get_specific_stats():
    l = list()
    logging.debug("Starting the statistics evaluations")
    l.append(('Max Jam Length In Meters of Detector ',
              lambda infos: max([info.maxJamLengthInMeters for info in infos])))
    l.append(('Max Jam Length In Meters of Vehicles ',
              lambda infos: max([info.maxJamLengthInVehicles for info in infos])))

    logging.info(f"Added {len(l)} specific statistics")
    return l


def create_csv(statistics):
    into_cvs = "Statistics,"
    for filename in sys.argv[1:]:
        into_cvs += str(filename) + ","
    into_cvs = into_cvs[:len(into_cvs) - 1] + "\n"
    for stat in statistics.keys():
        into_cvs += str(stat) + ","
        for vals in statistics[stat]:
            into_cvs += str(vals) + ","
        into_cvs = into_cvs[:len(into_cvs) - 1] + "\n"
    text_file = open("Output.csv", "w")
    text_file.write(into_cvs)
    text_file.close()


def main():
    if len(sys.argv) < 2:
        print('Wrong usage, Please enter an xml filename!')
        exit(-1)

    log_filename = f'logger_{str(time.time()).replace(".", "")}.log'
    logging.basicConfig(filename=log_filename, level=logging.DEBUG)

    statistics = {}
    global_statistics_lambdas = get_global_stats()
    for filename in sys.argv[1:]:
        curr_info = get_lightinfos(filename)
        for msg, f in global_statistics_lambdas:
            if msg not in statistics:
                statistics[msg] = []
            try:
                statistics[msg].append(f(curr_info))
            except:
                logging.debug(f"Evaluation of statistic {msg} failed")

    specific_statistics_lambdas = get_specific_stats()
    for filename in sys.argv[1:]:
        curr_info = get_lightinfos(filename)
        for msg, f in specific_statistics_lambdas:
            for id_detector, stats_per_detector in curr_info:
                msg_with_id = msg + id_detector
                if msg_with_id not in statistics:
                    statistics[msg_with_id] = []
                try:
                    statistics[msg_with_id].append(f(stats_per_detector))
                except:
                    logging.debug(f"Evaluation of statistic {msg} failed")

    printer = TablePrinter(sys.argv[1:], statistics)
    printer.print()
    create_csv(statistics)


if __name__ == '__main__':
    main()
