from management.functionality.visual_simulation import run_visual_simulation

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
    Running simulation
    :return: Simulation page
    """
    print("HHHH")
    # print(request.form['junction'])
    print(request.args)
    run_visual_simulation("../../simulator/examples/data/" + request.args['simulation_example'], "Scheduler", True)
    return "Running simulation at background..."


if __name__ == "__main__":
    app.run()
