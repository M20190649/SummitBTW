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


@app.route('/pages/forms/index.html')
def load_charts():
    """

    :return:
    """
    return render_template('/pages/forms/index.html')


@app.route('/pages/widgets.html')
def load_widgets():
    """

    :return:
    """

    files = ['../../statistics/resources/tripinfo.xml', '../../statistics/resources/tripinfo1.xml', '../../statistics/resources/tripinfo2.xml']

    stat = create_statistics('output.csv', True, *files)
    statistics_keys = stat.keys()

    algo = ['1', '2', '3']
    values = {}

    for i in range(1, len(files)+1):
        values['Algo_' + str(i)] = algo[i - 1]
        for param in statistics_keys:
            key = param.replace("-","").replace(" ","").replace("waitSteps","WaitSteps").replace("routeLength","RouteLength")
            value = 'stat[\'' + param +'\'][' + (str(i - 1)) + ']'
            values[key + '_' + str(i)] = int(eval(value))
            values[key + 'Bar_' + str(i)] = 'width:' + str(eval(value) / (max(stat[param]) if max(stat[param]) != 0 else 1)*100) + '%'

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
