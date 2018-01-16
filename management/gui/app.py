import pandas as pd

from management.functionality.algorithm_compare import compare_algorithms, TEMP_OUT_DIR
from scheduler.scheduler_constants import schedulers_name_map
from simulator.simulate import run_simulation_example

__author__ = "Eylon Shoshan"

from flask import Flask, request, render_template
from flask import Markup

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
    scheduler = schedulers_name_map["Scheduler"]
    run_simulation_example(request.args['simulation_example'], scheduler, gui=True)
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
    df = pd.read_csv(TEMP_OUT_DIR + 'stats.csv')
    stats = df.to_html()
    stats = stats.replace(TEMP_OUT_DIR, '')
    stats = stats.replace('right;', 'center;')
    stats = stats.replace('<table border="1" class="dataframe">', '<table border="1" class="dataframe" align=center>')
    return render_template('index.html', stats_table=Markup(stats))


if __name__ == "__main__":
    app.run()
