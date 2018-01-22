//
// Created by gdor80 on 14/01/18.
//

#ifndef SUMO_STATISTICSPROXY_H
#define SUMO_STATISTICSPROXY_H

#include <netinet/in.h>
#include "JunctionStatistics.h"
#include <gui/GUIRunThread.h>

class StatisticsProxy {
    static std::map<std::string, JunctionStatistics> junctions;
    static int sock;
    static bool is_sock_set;
    static int request_counter;
    static std::vector<std::string> junction_ids;

    static void request_junction_statistics_by_id(std::string id);

public:

    static void request_junction_statistics();
    static JunctionStatistics get_junction_statistics(std::string id);
    static void setup_server(std::string addr, uint16_t port, const GUIRunThread *grt);
};


#endif //SUMO_STATISTICSPROXY_H
