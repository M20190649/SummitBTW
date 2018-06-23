import sys

from simulator.simulate_tripinfo import run_the_script

run_the_script(tripinfo=False, without_gui=bool(sys.argv[4]))
