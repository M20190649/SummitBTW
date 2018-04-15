import traci
import os


def get_screenshot():
    traci.gui.screenshot(traci.gui.DEFAULT_VIEW,
                         os.path.join(os.path.dirname(os.path.realpath(__file__)),
                                      "screenshot.jpg"))