from management.functionality.algorithm_compare import compare_algorithms
from simulator.simulate import run_simulation_example
import pandas as pd

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
