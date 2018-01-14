//
// Created by gdor80 on 14/01/18.
//

#ifndef SUMO_STATISTICSPROXY_H
#define SUMO_STATISTICSPROXY_H

#include <netinet/in.h>
#include "JunctionStatistics.h"

class StatisticsProxy {
    static std::map<std::string, JunctionStatistics> junctions;
    static int sock;
    static bool is_sock_set;

    static void request_junction_statistics_from_server(std::string id);

public:

    static JunctionStatistics get_junction_statistics(std::string id);
    static void setup_server(std::string addr, uint16_t port);
};


#endif //SUMO_STATISTICSPROXY_H
