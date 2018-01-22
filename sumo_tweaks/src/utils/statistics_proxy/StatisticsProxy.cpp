//
// Created by gdor80 on 14/01/18.
//

#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <utils/common/MsgHandler.h>
#include <utils/gui/globjects/GUIGlObjectStorage.h>
#include <guisim/GUINet.h>

#include "StatisticsProxy.h"

int StatisticsProxy::sock = 0;
bool StatisticsProxy::is_sock_set = false;
std::map<std::string, JunctionStatistics> StatisticsProxy::junctions;
int StatisticsProxy::request_counter = 0;
std::vector<std::string> StatisticsProxy::junction_ids = std::vector<std::string>();

void StatisticsProxy::request_junction_statistics_by_id(std::string id) {
    WRITE_MESSAGE("Trying to send statistics request, junction_id: " + id);
    send(StatisticsProxy::sock, id.c_str(), id.length(), 0);
    WRITE_MESSAGE("Sent junction id to statistics server, trying to read");
    char buff[1000] = { '\0' };
    read(StatisticsProxy::sock, buff, 1000);
    StatisticsProxy::junctions[id] = JunctionStatistics(id, buff);
}

void StatisticsProxy::request_junction_statistics() {
    if (++StatisticsProxy::request_counter > 10)
        StatisticsProxy::request_counter = 0;
    else
        return;

    for(auto& id : junction_ids) {
        request_junction_statistics_by_id(id);
    }
}

JunctionStatistics StatisticsProxy::get_junction_statistics(std::string id) {
    return StatisticsProxy::junctions[id];
}

void StatisticsProxy::setup_server(std::string addr, uint16_t port, const GUIRunThread *grt) {
    if(StatisticsProxy::is_sock_set)
        return;

    int sock = 0;
    sockaddr_in serv_addr;
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        WRITE_ERROR("Not able to open socket.");
        return;
    }

    memset(&serv_addr, '0', sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);

    if(inet_pton(AF_INET, addr.c_str(), &serv_addr.sin_addr) <= 0) {
        WRITE_ERROR("Not able to set statistics server ip");
        return;
    }

    while (connect(sock, (sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
//        WRITE_ERROR(std::string("Not able to connect to statistics server, ") + std::to_string(errno));
//        return;
    }

    StatisticsProxy::sock = sock;
    StatisticsProxy::is_sock_set = true;
    WRITE_MESSAGE("Connected to statistics server!");

    auto junctions = grt->getNet().getJunctionIDs(false);
    for (auto& j : junctions) {
        std::string microsim_id = GUIGlObjectStorage::gIDStorage.getObjectBlocking(j)->getMicrosimID();
        GUIGlObjectStorage::gIDStorage.unblockObject(j);
        StatisticsProxy::junction_ids.push_back(microsim_id);
    }
}
