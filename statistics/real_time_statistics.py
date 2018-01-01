import logging
import time

from simulator.realtime.city import City


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
            info_desired = input("Write the information you desire about the detector:\n"
                                 "'get_length'/'get_occupancy'/'get_mean_speed'\n")
            if info_desired is 'get_length':
                print(detector_dict[id_desired].get_length())
                continue
            elif info_desired is 'get_occupancy':
                print(detector_dict[id_desired].get_occupancy())
            elif info_desired is 'get_mean_speed':
                print(detector_dict[id_desired].get_mean_speed())
            print("Wrote function inappropriately.")
            continue

        elif id_desired in junction_dict:
            info_desired = input("Write the information you desire about the junction:\n"
                                 "\n")
            # TODO: needs some functions
            print("Wrote function inappropriately.")
            continue
        elif id_desired == "exit":
            print("Bye Bye!\n")
            break
        else:
            print("The id was not found. Please try again.\n")


if __name__ == '__main__':
    main()
