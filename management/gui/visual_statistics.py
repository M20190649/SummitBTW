from flask import render_template
__authot__ = "Liran Farhi"

def load_statistics_widgets(stats, schedulers):
    """
    # TODO: fill documentation
    :param stats:
    :param schedulers:
    :return:
    """
    # files = [f for f in os.listdir(TEMP_OUT_DIR) if not f.endswith('.csv')]
    # TODO: change to positive condition with .tripinfo.xml extension

    statistics_keys = stats.keys()

    values = {}
    num_algos = len(schedulers)

    for i in range(1, num_algos + 1):
        values['Algo_' + str(i)] = schedulers[i - 1]
        for param in statistics_keys:
            key = param.replace("-", "").replace(" ", "").replace("waitSteps", "WaitSteps").replace("routeLength",
                                                                                                    "RouteLength")
            value = 'stats[\'' + param + '\'][' + (str(i - 1)) + ']'
            values[key + '_' + str(i)] = int(eval(value))
            values[key + 'Bar_' + str(i)] = 'width:' + str(
                ((eval(value) / max(stats[param])) if max(stats[param]) != 0 else 1) * 100) + '%'

    values['AlgoNum'] = ''

    if len(schedulers) == 2:
        values['AlgoNum'] = 'display: none'

    return render_template('/pages/widgets.html', **values)
