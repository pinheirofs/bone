#include "socket_reciver.hpp"

namespace bone {

SocketReciver::SocketReciver() : port(0) {
}

SocketReciver::~SocketReciver() {
}

void SocketReciver::setPort(const unsigned int port) {
    this->port = port;
}

bool SocketReciver::isValid() const {
    if (port == 0) {
        return false;
    }

    return true;
}

}
