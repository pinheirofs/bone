#ifndef SERVER_HPP
#define SERVER_HPP

namespace bone {

enum ServerType { UNDEFINED, SOCKET, DATAGRAM };

enum ServerStatus { STOPED, STARTING, RUNNING, INVALID };

class Server {

public:
    Server();
    void start();

    void setType(const ServerType type);
    ServerStatus getStatus() const;

private:
    ServerType type;
    ServerStatus status;

}; // class Server

}

#endif // SERVER_HPP
