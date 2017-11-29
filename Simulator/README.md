# SUMO basic simulation instructions

this is a commands file. below are important instructions for SUMO.
this page assumes SUMO is already installed.

--------------------------

* converting an OSM file to a .net.xml file. A type file is neccecary, see:
* http://sumo.dlr.de/wiki/Tutorials/Import_from_OpenStreetMap
* http://sumo.dlr.de/wiki/SUMO_edge_type_file

`netconvert --xml-type-files <typefilename>.typ.xml --osm-files <osmfilename>.osm --output-file <osmnet>.net.xml`

* SUMO advises to also use the following options:
	`--geometry.remove --roundabouts.guess --ramps.guess --junctions.join --tls.guess-signals --tls.discard-simple --tls.join`

--------------------------

* generate a random simulation for the given net. more flags are available, this is the most basic configuration.

`python randomTrips.py -n <net_filename>.net.xml -r <routes_filename>.rou.xml --validate True`

--------------------------

* run a sumo simulation with GUI
* a sumocfg file is the file used for running the simulation and contains links to the net file, the route file and the detector file.

`sumo-gui -c <sumo_cfg_filename>.sumocfg --tripinfo-output <simulation_out_filename>.xml`