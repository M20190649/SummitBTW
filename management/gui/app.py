from management.functionality.visual_simulation import run_visual_simulation

__author__ = "Eylon Shoshan"

from flask import Flask, render_template

# set the project root directory as the static folder, you can set others.
app = Flask(__name__, static_url_path='')


@app.route('/')
@app.route('/index.html')
def root():
    return render_template('index.html')


@app.route('/run_simulation', methods=['GET', 'POST'])
def run_simulation():
    run_visual_simulation("../../simulator/examples/data/small_city/city.sumocfg.xml", "Scheduler", True)
    return "Running simulation at background..."


if __name__ == "__main__":
    app.run()
