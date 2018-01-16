import sys

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

    stat = create_statistics('output.csv', True, '../../statistics/resources/tripinfo.xml','../../statistics/resources/tripinfo2.xml')

    return render_template('/pages/widgets.html', TotalTimeLoss_1 = int(stat['Total Time-Loss'][0]),
                           TotalTimeLoss_2 = int(stat['Total Time-Loss'][1]),
                           AverageTimeLoss_1 = int(stat['Average Time-Loss'][0]),
                           AverageTimeLoss_2 = int(stat['Average Time-Loss'][1]),
                           MaxTimeLoss_1 = int(stat['Max Time-Loss'][0]),
                           MaxTimeLoss_2 = int(stat['Max Time-Loss'][1]),
                           MinimumTimeLoss_1 = int(stat['Minimum Time-Loss'][0]),
                           MinimumTimeLoss_2 = int(stat['Minimum Time-Loss'][1]),
                           TotalWaitSteps_1=int(stat['Total waitSteps'][0]),
                           TotalWaitSteps_2=int(stat['Total waitSteps'][1]),
                           AverageWaitSteps_1=int(stat['Average waitSteps'][0]),
                           AverageWaitSteps_2=int(stat['Average waitSteps'][1]),
                           MaxWaitSteps_1=int(stat['Max waitSteps'][0]),
                           MaxWaitSteps_2=int(stat['Max waitSteps'][1]),
                           MinimumWaitSteps_1=int(stat['Minimum waitSteps'][0]),
                           MinimumWaitSteps_2=int(stat['Minimum waitSteps'][1]),
                           TotalDuration_1=int(stat['Total Duration'][0]),
                           TotalDuration_2=int(stat['Total Duration'][1]),
                           AverageDuration_1=int(stat['Average Duration'][0]),
                           AverageDuration_2=int(stat['Average Duration'][1]),
                           MaxDuration_1=int(stat['Max Duration'][0]),
                           MaxDuration_2=int(stat['Max Duration'][1]),
                           MinimumDuration_1=int(stat['Minimum Duration'][0]),
                           MinimumDuration_2=int(stat['Minimum Duration'][1]),
                           TotalRouteLength_1=int(stat['Total routeLength'][0]),
                           TotalRouteLength_2=int(stat['Total routeLength'][1]),
                           AverageRouteLength_1=int(stat['Average routeLength'][0]),
                           AverageRouteLength_2=int(stat['Average routeLength'][1]),
                           MaxRouteLength_1=int(stat['Max routeLength'][0]),
                           MaxRouteLength_2=int(stat['Max routeLength'][1]),
                           MinimumRouteLength_1=int(stat['Minimum routeLength'][0]),
                           MinimumRouteLength_2=int(stat['Minimum routeLength'][1])
                           )


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
