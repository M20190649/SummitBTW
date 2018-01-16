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
    algo = ['1', '2', '3']
    values = {}

    for i in range(1, len(files)+1):
        values['Algo_' + str(i)] = algo[i - 1]

        TotalTimeLoss = 'stat[\'Total Time-Loss\'][' + (str(i - 1)) + ']'
        values['TotalTimeLoss_' + str(i)] = int(eval(TotalTimeLoss))
        values['TotalTimeLossBar_' + str(i)] = 'width:' + str(eval(TotalTimeLoss) / (max(stat['Total Time-Loss']) if max(stat['Total Time-Loss']) != 0 else 1)*100) + '%'

        AverageTimeLoss = 'stat[\'Average Time-Loss\'][' + (str(i - 1)) + ']'
        values['AverageTimeLoss_' + str(i)] = int(eval(AverageTimeLoss))
        values['AverageTimeLossBar_' + str(i)] = 'width:' + str(eval(AverageTimeLoss) / (max(stat['Average Time-Loss']) if max(stat['Average Time-Loss']) != 0 else 1)*100) + '%'

        MaxTimeLoss = 'stat[\'Max Time-Loss\'][' + (str(i - 1)) + ']'
        values['MaxTimeLoss_' + str(i)] = int(eval(MaxTimeLoss))
        values['MaxTimeLossBar_' + str(i)] = 'width:' + str(eval(MaxTimeLoss) / (max(stat['Max Time-Loss']) if max(stat['Max Time-Loss']) != 0 else 1)*100) + '%'

        MinimumTimeLoss = 'stat[\'Minimum Time-Loss\'][' + (str(i - 1)) + ']'
        values['MinimumTimeLoss_' + str(i)] = int(eval(MinimumTimeLoss))
        values['MinimumTimeLossBar_' + str(i)] = 'width:' + str((eval(MinimumTimeLoss) / (max(stat['Minimum Time-Loss'])) if max(stat['Minimum Time-Loss']) != 0 else 1)*100) + '% '

        TotalWaitSteps = 'stat[\'Total waitSteps\'][' + (str(i - 1)) + ']'
        values['TotalWaitSteps_' + str(i)] = int(eval(TotalWaitSteps))
        values['TotalWaitStepsBar_' + str(i)] = 'width:' + str((eval(TotalWaitSteps) / (max(stat['Total waitSteps'])) if max(stat['Total waitSteps']) != 0 else 1)*100) + '% '

        AverageWaitSteps = 'stat[\'Average waitSteps\'][' + (str(i - 1)) + ']'
        values['AverageWaitSteps_' + str(i)] = int(eval(AverageWaitSteps))
        values['AverageWaitStepsBar_' + str(i)] = 'width:' + str((eval(AverageWaitSteps) / (max(stat['Average waitSteps'])) if max(stat['Average waitSteps']) != 0 else 1)*100) + '% '

        MaxWaitSteps = 'stat[\'Max waitSteps\'][' + (str(i - 1)) + ']'
        values['MaxWaitSteps_' + str(i)] = int(eval(MaxWaitSteps))
        values['MaxWaitStepsBar_' + str(i)] = 'width:' + str((eval(MaxWaitSteps) / (max(stat['Max waitSteps'])) if max(stat['Max waitSteps']) != 0 else 1)*100) + '% '

        MinimumWaitSteps = 'stat[\'Minimum waitSteps\'][' + (str(i - 1)) + ']'
        values['MinimumWaitSteps_' + str(i)] = eval(MinimumWaitSteps)
        values['MinimumWaitStepsBar_' + str(i)] = 'width:' + str((eval(MinimumWaitSteps) / (max(stat['Minimum waitSteps'])) if max(stat['Minimum waitSteps']) != 0 else 1)*100) + '% '


        TotalDuration = 'stat[\'Total Duration\'][' + (str(i - 1)) + ']'
        values['TotalDuration_' + str(i)] = int(eval(TotalDuration))
        values['TotalDurationBar_' + str(i)] = 'width:' + str((eval(TotalDuration) / (max(stat['Total Duration'])) if max(stat['Total Duration']) != 0 else 1)*100) + '% '

        AverageDuration = 'stat[\'Average Duration\'][' + (str(i - 1)) + ']'
        values['AverageDuration_' + str(i)] = int(eval(AverageDuration))
        values['AverageDurationBar_' + str(i)] = 'width:' + str((eval(AverageDuration) / (max(stat['Average Duration'])) if max(stat['Average Duration']) != 0 else 1)*100) + '% '



        MaxDuration = 'stat[\'Max Duration\'][' + (str(i - 1)) + ']'
        values['MaxDuration_' + str(i)] = int(eval(MaxDuration))
        values['MaxDurationBar_' + str(i)] = 'width:' + str((eval(MaxDuration) / (max(stat['Max Duration'])) if max(stat['Max Duration']) != 0 else 1)*100) + '% '


        MinimumDuration = 'stat[\'Minimum Duration\'][' + (str(i - 1)) + ']'
        values['MinimumDuration_' + str(i)] = int(eval(MinimumDuration))
        values['MinimumDurationBar_' + str(i)] = 'width:' + str((eval(MinimumDuration) / (max(stat['Minimum Duration'])) if max(stat['Minimum Duration']) != 0 else 1)*100) + '% '

        TotalRouteLength = 'stat[\'Total routeLength\'][' + (str(i - 1)) + ']'
        values['TotalRouteLength_' + str(i)] = int(eval(TotalRouteLength))
        values['TotalRouteLengthBar_' + str(i)] = 'width:' + str((eval(TotalRouteLength) / (max(stat['Total routeLength'])) if max(stat['Total routeLength']) != 0 else 1)*100) + '% '


        AverageRouteLength = 'stat[\'Average routeLength\'][' + (str(i - 1)) + ']'
        values['AverageRouteLength_' + str(i)] = int(eval(AverageRouteLength))
        values['AverageRouteLengthBar_' + str(i)] = 'width:' + str((eval(AverageRouteLength) / (max(stat['Average routeLength'])) if max(stat['Average routeLength']) != 0 else 1)*100) + '% '

        MaxRouteLength = 'stat[\'Max routeLength\'][' + (str(i - 1)) + ']'
        values['MaxRouteLength_' + str(i)] = int(eval(MaxRouteLength))
        values['MaxRouteLengthBar_' + str(i)] = 'width:' + str((eval(MaxRouteLength) / (max(stat['Max routeLength'])) if max(stat['Max routeLength']) != 0 else 1)*100) + '% '

        MinimumRouteLength = 'stat[\'Minimum routeLength\'][' + (str(i - 1)) + ']'
        values['MinimumRouteLength_' + str(i)] = int(eval(MinimumRouteLength))
        values['MinimumRouteLengthBar_' + str(i)] = 'width:' + str((eval(MinimumRouteLength) / (max(stat['Minimum routeLength'])) if max(stat['Minimum routeLength']) != 0 else 1)*100) + '% '


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
