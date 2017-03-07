#include <cstdlib>
#include <memory>
#include <sstream>

#include <server.hpp>
#include <socket_reciver.hpp>

using std::shared_ptr;
using std::stringstream;

using bone::Server;
using bone::ServerStatus;
using bone::SocketReciver;

int main(const int argc, const char* argv[]) {
    unsigned int argIndex = 1;
    stringstream stream;

    // Define the status of server to the test
    if (argc <= argIndex) {
        return EXIT_FAILURE;
    }

    int finalStatusIndex;
    stream << argv[argIndex];
    stream >> finalStatusIndex;
    argIndex++;
    ServerStatus finalStatus;
    switch (finalStatusIndex) {
    case 0:
        finalStatus = ServerStatus::STOPED;
        break;
    case 1:
        finalStatus = ServerStatus::STARTING;
        break;
    case 2:
        finalStatus = ServerStatus::RUNNING;
        break;
    case 3:
        finalStatus = ServerStatus::SHUTDOWNING;
        break;
    default:
        finalStatus = ServerStatus::INVALID;
        break;
    }

    // Create server.
    Server server;

    // Create a reader, if they are defined.
    if (argc <= argIndex) {
        return EXIT_FAILURE;
    }

    bool createReader;
    stream.clear();
    stream << argv[argIndex];
    stream >> std::boolalpha >> createReader;
    argIndex++;
    if (createReader) {
        shared_ptr<SocketReciver> reciver(new SocketReciver);

        unsigned int port = 0;
        stream << argv[argIndex];
        stream >> port;
        argIndex++;

        reciver->setPort(port);

        server.setReciver(reciver);
    }

    server.start();

    if (server.getStatus() != finalStatusIndex) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
