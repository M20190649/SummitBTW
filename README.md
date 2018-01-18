# SummitBTW

<!---
[![codecov](https://codecov.io/gh/TechnionYearlyProject/SummitBTW/branch/master/graph/badge.svg?token=7qhKVMzZMo)](https://codecov.io/gh/TechnionYearlyProject/SummitBTW)


[![Build Status](https://travis-ci.com/TechnionYearlyProject/SummitBTW.svg?token=3QsUMjhrgPcWWTkptvzr&branch=master)](https://travis-ci.com/TechnionYearlyProject/SummitBTW)
--->


Summit-Better Than WAZE (SummitBTW) is a revolutionary smart city for better navigation through the city for all drivers. It is built and managed by the municipalities that can monitor the traffic lights of the city and manage them with smart algorithms rather than a simple static algorithm as it is today. In the future BTW will also provide services that are similar to those of popular navigation applications, such as Waze or Google Maps, with the significant advantage - the ability to control the traffic lights in real-time. This functionality can prove vital in an age where self-driving autonomous cars are gaining popularity and slowly changing the face of modern transportation.

--------------------------

# Download instructions for user (for Windows):
* First of all you need to make sure you have Python 3.6 on your computer. If not, it is recommended to download it with Anaconda:

`https://www.anaconda.com/download/`
* Now please download sumo that is suitable for your OS from this link:

`http://www.sumo.dlr.de/userdoc/Downloads.html`
* Make sure you have Environment variable for SUMO_HOME that links to your sumo directory
* also add "sumo_tweaks/tools" path as the environment variable `PYTHONPATH`
* Next run "requirements.py" python script for installing all the python modules needed. If there are any problems make sure your PATH Environment variable includes a link to the "pip" package.
* Don't forget to download our project too obviously

Finally you are ready to use SummitBTW! just run `python -m management.gui.app` from the command line in the project directory :)

--------------------------

# Download instructions for developer (for Windows):
* It is most recommended for a developer to download PyCharm from this link for keep our work:

`https://www.jetbrains.com/pycharm/download/#section=windows`

Brief explanation of our different packages:
* In the management and materials packages you'll find the GUI for the user
* In the scheduler package you'll find the algorithm for the traffic lights
* In the simulator package you'll find the heart of the project - running the simulation
* In the statistics package you'll find the tools for calculating the statistics of the different algorithms
* In sumo_tweaks you'll find all sumo code in cpp. It is recommended to NOT intervene there. If you have a death wish you are more than welcome to try and change things there.

