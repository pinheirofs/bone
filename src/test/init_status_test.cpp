#include <cstdlib>

#include <server.hpp>

using bone::Server;
using bone::ServerStatus;

int main() {
    Server server;

    if (server.getStatus() != ServerStatus::STOPED) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
