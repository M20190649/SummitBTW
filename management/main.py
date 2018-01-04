"""
Main menu for the city management tool.
"""

__author__ = "Eylon Shoshan"

import sys

from PyQt5 import QtWidgets
from PyQt5.QtCore import pyqtSlot
from PyQt5.QtWidgets import QApplication, QWidget


class App(QWidget):

    def __init__(self):
        super().__init__()
        self.title = 'City Management Tool'
        self.left = 10
        self.top = 10
        self.width = 400
        self.height = 200
        self.init_ui()

    def init_ui(self):
        self.setWindowTitle(self.title)
        self.setGeometry(self.left, self.top, self.width, self.height)

        simulate_btn = QtWidgets.QPushButton('Run Simulation', self)
        simulate_btn.setToolTip('Run Simulation')
        simulate_btn.clicked.connect(self.on_click_simulate)

        scheduler_btn = QtWidgets.QPushButton('Scheduler', self)
        scheduler_btn.move(0, 30)
        scheduler_btn.setToolTip('Scheduler')
        scheduler_btn.clicked.connect(self.on_click_scheduler)

        self.show()

    @pyqtSlot()
    def on_click_simulate(self):
        # TODO: run simulation
        print('Simulate Click')

    @pyqtSlot()
    def on_click_scheduler(self):
        # TODO: Choose scheduling algorithm
        print('Scheduling algorithm')


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = App()
    sys.exit(app.exec_())
