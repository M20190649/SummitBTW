//
// Created by gdor80 on 14/01/18.
//

#ifndef SUMO_JUNCTIONSTATISTICS_H
#define SUMO_JUNCTIONSTATISTICS_H

#include <map>
#include <string>

class JunctionStatistics {
    std::string junction_id;
    std::map<std::string, double> stats;
public:
    JunctionStatistics() = default;
    JunctionStatistics(std::string junction_id, std::string stats);
    std::map<std::string, double> get_stats();
};


#endif //SUMO_JUNCTIONSTATISTICS_H
