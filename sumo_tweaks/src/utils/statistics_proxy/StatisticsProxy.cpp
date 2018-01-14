//
// Created by gdor80 on 14/01/18.
//

#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>

#include "StatisticsProxy.h"

int StatisticsProxy::sock = 0;
std::map<std::string, JunctionStatistics> StatisticsProxy::junctions;

void StatisticsProxy::request_junction_statistics_from_server(std::string id) {
    send(StatisticsProxy::sock, id.c_str(), id.length(), 0);
    char buff[1000] = { '\0' };
    read(StatisticsProxy::sock, buff, 1000);
    StatisticsProxy::junctions.at(id) = JunctionStatistics(id, buff);
}

JunctionStatistics StatisticsProxy::get_junction_statistics(std::string id) {
    request_junction_statistics_from_server(id);
    return StatisticsProxy::junctions[id];
}

void StatisticsProxy::setup_server(std::string addr, uint16_t port) {
    int sock = 0;
    sockaddr_in serv_addr;
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        return;

    memset(&serv_addr, '0', sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = port;

    if(inet_pton(AF_INET, addr.c_str(), &serv_addr.sin_addr) <= 0)
        return;

    if (connect(sock, (sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
        return;

    StatisticsProxy::sock = sock;
}
