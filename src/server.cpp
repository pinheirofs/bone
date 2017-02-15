#include "server.hpp"

namespace bone {

Server::Server() : type(UNDEFINED), status(STOPED) {
}

void Server::setType(const ServerType type) {
    this->type = type;
}

ServerStatus Server::getStatus() const {
    return this->status;
}

void Server::start() {

}

} // namespace bone
