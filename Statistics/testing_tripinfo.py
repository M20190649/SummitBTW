import xml.etree.ElementTree as Et
import sys
import functools as funcs
import operator as ops


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


def get_tripinfos(tree):
    """Initialize a tripinfo list from the tree object"""
    tripinfos = []
    root = tree.getroot()
    for child in root:
        tripinfos.append(Tripinfo(child.attrib))
    return tripinfos


def get_stats():
    l = []
    l.append(('Average Time-loss: ',
              lambda infos: funcs.reduce(ops.add, [info.timeLoss for info in infos])/len(infos)))

    return l


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print('Wrong usage, Please enter an xml filename!')
        exit(-1)
    tripinfos = get_tripinfos(Et.parse(sys.argv[1]))
    statistics_lambdas = get_stats()
    statistics = dict()
    for msg, f in statistics_lambdas:
        statistics[msg] = f(tripinfos)

    print(statistics)
