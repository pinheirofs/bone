#include "server.hpp"

namespace bone {

Server::Server() : status(STOPED), reciver(nullptr) {
}

ServerStatus Server::getStatus() const {
    return status;
}

bool Server::isValid() const {
    if (reciver == nullptr) {
        return false;
    } else if (status == ServerStatus::INVALID) {
        return false;
    }

    return true;
}

void Server::start() {
    status = ServerStatus::STARTING;

    if (!isValid()) {
        status = ServerStatus::INVALID;
        return;
    }

    status = ServerStatus::RUNNING;
}

void Server::setReciver(const std::shared_ptr<SocketReciver> reciver) {
    this->reciver = reciver;
}

} // namespace bone
