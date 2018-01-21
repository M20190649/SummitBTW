//
// Created by gdor80 on 14/01/18.
//

#include "JunctionStatistics.h"
#include <vector>
#include <iterator>
#include <sstream>

class DelimitCommas : public std::string {};

std::istream& operator>>(std::istream& is, DelimitCommas& output) {
    std::getline(is, output, ',');
    return is;
}

JunctionStatistics::JunctionStatistics(std::string junction_id, std::string stats)
        : junction_id(junction_id), stats() {
    std::istringstream iss(stats);
    std::vector<std::string> results((std::istream_iterator<DelimitCommas>(iss)),
                                std::istream_iterator<DelimitCommas>());
    for (int i = 0; i < results.size(); i += 2) {
        this->stats[results[i]] = stod(results[i + 1]);
    }
}

std::map<std::string, double> JunctionStatistics::get_stats() {
    return stats;
}