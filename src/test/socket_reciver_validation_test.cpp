#include <cstdlib>
#include <sstream>

#include <socket_reciver.hpp>

using std::stringstream;

using bone::SocketReciver;

int main(const int argc, const char* argv[]) {
    if (argc < 3) {
        return EXIT_FAILURE;
    }

    stringstream stream;

    bool result;
    stream << argv[1];
    stream >> std::boolalpha >> result;

    unsigned int port;
    stream << argv[2];
    stream >> port;

    SocketReciver reciver;
    reciver.setPort(port);

    if (reciver.isValid() != result) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
