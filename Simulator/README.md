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