"""
Author: Ran Yeheskel

This script should get a path to the directory output and 6 numbers:
The first three are begin, end, step for the net_size_range parameter in create_statistics_for_paper.
The last three are  begin, end, step for the num_cars_range parameter in create_statistics_for_paper.
"""
import os
import shutil
import sys
from statistics.get_statistics import create_statistics
from statistics.get_light_statistics import create_light_statistics
from simulator.simulate_tripinfo import run_the_script
from simulator.preprocess.create_simulation_from_scratch import prepare_simulation
from scheduler.scheduler_constants import schedulers_name_map


def create_statistics_for_paper(net_size_range, cars_num_range, path_to_dir=None):
    """
    Create all the statistics for several simulations over the given parameters
    :param net_size_range: (begin, end, step) tuple that determines the size of the network
    :param cars_num_range: (begin, end, step) tuple that determines the number of cars in the simulation
    :param path_to_dir: path to a directory where all the output is going to be written
    :return:
    """
    if path_to_dir is None:
        path_to_dir = ""
    else:
        path_to_dir += '/'
    i = 0
    path_to_dir = path_to_dir + 'Results_'
    while os.path.exists(path_to_dir + str(i)):
        i += 1
    path_to_dir = path_to_dir + str(i)
    os.mkdir(path_to_dir)

    for net_size in range(*net_size_range):
        tmp_path = path_to_dir + '/network_size' + str(net_size)
        os.mkdir(tmp_path)
        for cars_num in range(*cars_num_range):
            tmp_path2 = tmp_path + '/cars_num' + str(cars_num)
            os.mkdir(tmp_path2)
            sys.argv = ['', tmp_path2]
            prepare_simulation(net_size+4, fringe_factor=10000, period=0.75, binomial=10000, end=int(cars_num) / 1.3)

            sys.argv += ['Alg']
            for algorithm_name in schedulers_name_map.keys():
                tmp_path3 = tmp_path2 + '/' + algorithm_name
                os.mkdir(tmp_path3)
                sys.argv = ['', tmp_path2, algorithm_name, tmp_path3]
                run_the_script(tripinfo=True, without_gui=True, exit_after=False)
                os.rename(tmp_path3 +'/cars_num' + str(cars_num) + "_tripinfo-output_" + algorithm_name + ".xml",
                          tmp_path3 + '/net_size' + str(net_size) + '_cars_num' + str(cars_num) + "_tripinfo-output_" + algorithm_name + ".xml")
                os.rename(tmp_path3 + '/cars_num' + str(cars_num) + "_detectors-output_" + algorithm_name + ".xml",
                          tmp_path3 + '/net_size' + str(net_size) + '_cars_num' + str(cars_num) + "_detectors-output_" + algorithm_name + ".xml")

                tripinfo_filename = 'net_size'+str(net_size)+'_cars_num' + str(cars_num) + "_tripinfo-output_" + algorithm_name + ".xml"
                detector_filename = 'net_size'+str(net_size)+'_cars_num' + str(cars_num) + "_detectors-output_" + algorithm_name + ".xml"
                create_statistics('net_size'+str(net_size)+'_cars_num' + str(cars_num) + "_tripinfo-output_" + algorithm_name + ".csv", True, tmp_path3 + '/' + tripinfo_filename,
                                  dest_folder=tmp_path3)
                create_light_statistics('net_size'+str(net_size)+'_cars_num' + str(cars_num) + "_detector-output_" + algorithm_name + ".csv", True, tmp_path3 + '/' + detector_filename,
                                        dest_folder=tmp_path3)
            tripinfo_list = []
            detectors_list = []
            for algorithm_name in schedulers_name_map.keys():
                tmp_path3 = tmp_path2 + '/' + algorithm_name
                tripinfo_filename = 'net_size'+str(net_size)+'_cars_num' + str(cars_num) + "_tripinfo-output_" + algorithm_name + ".xml"
                detector_filename = 'net_size'+str(net_size)+'_cars_num' + str(cars_num) + "_detectors-output_" + algorithm_name + ".xml"
                tripinfo_list.append(tmp_path3 + '/' + tripinfo_filename)
                detectors_list.append(tmp_path3 + '/' + detector_filename)
            create_statistics('net_size'+str(net_size)+'_cars_num' + str(cars_num) + "_output_tripinfo.csv", True, *tripinfo_list, dest_folder=tmp_path2)
            create_light_statistics('net_size'+str(net_size)+'_cars_num' + str(cars_num) + "_output_detectors.csv", True, *detectors_list, dest_folder=tmp_path2)




if __name__ == '__main__':
    if len(sys.argv) < 7 + 1:
        sys.exit('Give the script a path and six numbers according to documentation')
    create_statistics_for_paper((int(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4])), (int(sys.argv[5]), int(sys.argv[6]), int(sys.argv[7])), sys.argv[1])
