import xml.etree.ElementTree as et


class Tripinfo(object):
    def __init__(self, parsed_info):
        self.parse(parsed_info)

    def parse(self, parsed_info):
        self._id = parsed_info['id']
        self._depart = float(parsed_info['depart'])
        self._departLane = parsed_info['departLane']
        self._departPos = float(parsed_info['departPos'])
        self._departSpeed = float(parsed_info['departSpeed'])
        self._departDelay = float(parsed_info['departDelay'])
        self._arrival = float(parsed_info['arrival'])
        self._arrivalLane = parsed_info['arrivalLane']
        self._arrivalPos = float(parsed_info['arrivalPos'])
        self._arrivalSpeed = float(parsed_info['arrivalSpeed'])
        self._duration = float(parsed_info['duration'])
        self._routeLength = float(parsed_info['routeLength'])
        self._waitSteps = int(parsed_info['waitSteps'])
        self._timeLoss = float(parsed_info['timeLoss'])
        self._rerouteNo = int(parsed_info['rerouteNo'])
        self._devices = parsed_info['devices'].split(',')
        self._vType = parsed_info['vType']
        self._speedFactor = float(parsed_info['speedFactor'])
        self._vaporized = bool(parsed_info['vaporized'])


def get_tripinfos(tree):
    _tripinfos = []
    root = tree.getroot()
    for child in root:
        _tripinfos.append(Tripinfo(child.attrib))
    return _tripinfos


if __name__ == '__main__':
    tripinfos = get_tripinfos(et.parse('tripinfo.xml'))

