#include "server.hpp"

namespace bone {

Server::Server() : status(STOPED) {
}

ServerStatus Server::getStatus() const {
    return status;
}

void Server::start() {
    status = ServerStatus::RUNNING;
}

} // namespace bone
