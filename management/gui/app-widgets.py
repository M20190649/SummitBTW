import sys

from gevent import os

from management.functionality.algorithm_compare import compare_algorithms
from simulator.simulate import run_simulation_example
import pandas as pd

from statistics.get_statistics import create_statistics

__author__ = "Eylon Shoshan"

from flask import Flask, request, render_template

# set the project root directory as the static folder, you can set others.
app = Flask(__name__, static_url_path='')


@app.route('/')
@app.route('/index.html')
def root():
    """
    Loading home page
    :return: html page of the dashboard
    """
    return render_template('index.html')


@app.route('/pages/charts/index.html')
def load_charts():
    """

    :return:
    """
    return render_template('/pages/charts/index.html')


@app.route('/pages/widgets.html')
def load_widgets():
    """

    :return:
    """
    # is_3_algo = False

    files = ['../../statistics/resources/tripinfo.xml', '../../statistics/resources/tripinfo1.xml', '../../statistics/resources/tripinfo2.xml']

    stat = create_statistics('output.csv', True, *files)
    algo = ['1', '2', '3']
    values = {}
    for i in range(1, len(files)+1):
        values['Algo_' + str(i)] = algo[i - 1]

        values['TotalTimeLoss_' + str(i)] = eval('int(stat[\'Total Time-Loss\'][' + (str(i - 1)) + '])')
        values['AverageTimeLoss_' + str(i)] = eval('int(stat[\'Average Time-Loss\'][' + (str(i - 1)) + '])')
        values['MaxTimeLoss_' + str(i)] = eval('int(stat[\'Max Time-Loss\'][' + (str(i - 1)) + '])')
        values['MinimumTimeLoss_' + str(i)] = eval('int(stat[\'Minimum Time-Loss\'][' + (str(i - 1)) + '])')

        values['TotalWaitSteps_' + str(i)] = eval('int(stat[\'Total waitSteps\'][' + (str(i - 1)) + '])')
        values['AverageWaitSteps_' + str(i)] = eval('int(stat[\'Average waitSteps\'][' + (str(i - 1)) + '])')
        values['MaxWaitSteps_' + str(i)] = eval('int(stat[\'Max waitSteps\'][' + (str(i - 1)) + '])')
        values['MinimumWaitSteps_' + str(i)] = eval('int(stat[\'Minimum waitSteps\'][' + (str(i - 1)) + '])')

        values['TotalDuration_' + str(i)] = eval('int(stat[\'Total Duration\'][' + (str(i - 1)) + '])')
        values['AverageDuration_' + str(i)] = eval('int(stat[\'Average Duration\'][' + (str(i - 1)) + '])')
        values['MaxDuration_' + str(i)] = eval('int(stat[\'Max Duration\'][' + (str(i - 1)) + '])')
        values['MinimumDuration_' + str(i)] = eval('int(stat[\'Minimum Duration\'][' + (str(i - 1)) + '])')

        values['TotalRouteLength_' + str(i)] = eval('int(stat[\'Total routeLength\'][' + (str(i - 1)) + '])')
        values['AverageRouteLength_' + str(i)] = eval('int(stat[\'Average routeLength\'][' + (str(i - 1)) + '])')
        values['MaxRouteLength_' + str(i)] = eval('int(stat[\'Max routeLength\'][' + (str(i - 1)) + '])')
        values['MinimumRouteLength_' + str(i)] = eval('int(stat[\'Minimum routeLength\'][' + (str(i - 1)) + '])')

    values['AlgoNum'] = ''

    if len(files) == 2 :
        values['AlgoNum'] = 'display: none'

    return render_template('/pages/widgets.html', **values)


@app.route('/run_simulation', methods=['GET', 'POST'])
def run_simulation():
    """
    Running simulation at background
    :return: Simulation page
    """
    run_simulation_example(request.args['simulation_example'], "Scheduler", gui=True)
    return "Simulation has finished."


@app.route('/compare_schedulers', methods=['GET', 'POST'])
def compare_schedulers():
    """
    Compare scheduling algorithms and present results
    :return: Result statistics
    """
    simulation_example = request.args['simulation_example']
    schedulers = dict(request.args)['schedulers']
    compare_algorithms(simulation_example, *schedulers)
    df = pd.read_csv('./temp_outputs/stats.csv')  # TODO: use path as defined in algorithm_compare
    print(df.to_html())
    return "Completed comparison"


if __name__ == "__main__":
    app.run()
