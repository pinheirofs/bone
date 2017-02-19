#include <cstdlib>

#include <server.hpp>

using bone::Server;
using bone::ServerStatus;

int main() {
    Server server;

    server.start();

    if (server.getStatus() != ServerStatus::RUNNING) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
