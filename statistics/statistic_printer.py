from prettytable import PrettyTable


class StatisticsPrinter(object):

    def print(self, *args):
        pass


class NormalPrinter(StatisticsPrinter):

    def __init__(self, statistics):
        self._stats = statistics

    def print(self):
        for s_key, s_val in self._stats.items():
            print(s_key, s_val)


class TablePrinter(StatisticsPrinter):

    def __init__(self, filenames, statistics):
        self._t = PrettyTable(['Statistic'] + list(filenames))
        for k, v in statistics.items():
            self._t.add_row([k] + v)

    def print(self):
        print(self._t)
