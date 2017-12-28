import sys
import logging
import functools as funcs
import operator as ops
import time

from SummitBTW.simulator.realtime.city import City


def main():
    log_filename = f'logger_{str(time.time()).replace(".", "")}.log'
    logging.basicConfig(filename=log_filename, level=logging.DEBUG)
    try:
        city = City()
        detector_dict = city.get_detectors_dict()
        junction_dict = city.get_junctions_dict()

    except AttributeError:
        print("Problem with receiving Detectors and Junctions countered")

    while True:
        id_desired = input("Write id of object you are interested for. Write exit to stop the program\n")
        if id_desired in detector_dict:
            print(detector_dict[id_desired])
        elif id_desired in junction_dict:
            print(junction_dict[id_desired])
        elif id_desired == "exit":
            print("Bye Bye!\n")
            break
        else:
            print("The id was not found. Please try again.\n")


if __name__ == '__main__':
    main()
