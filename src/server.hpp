#ifndef SERVER_HPP
#define SERVER_HPP

#include <memory>

#include <socket_reciver.hpp>

namespace bone {

/*!
 * \brief Enumeration do define the status of server.
 *
 * This are the possible status of server:
 * -# STOPED - The server are stoped and anyone message can be process
 * -# STARTING - The server are starting and validate it configration, but any messagem can be process yet
 * -# RUNNING - The server are running and reciving messagens
 * -# SHUTDOWNING - The server are shutdowning and anyone messagens can be recive but all messagens which was process \n
 *      before start process of shutdown will process.
 * -# INVALID - Some error ocorror and the server are in invalid status
 */
enum ServerStatus { STOPED, STARTING, RUNNING, SHUTDOWNING, INVALID };

/*!
 * \brief Class to configure and interact with server.
 */
class Server {

public:
    /*!
     * \brief Standart constructor, only set the initial state of server.
     *
     * The initial state are:
     * -# type = UNDEFINED
     * -# status = STOPED
     */
    Server();

    /*!
     * \brief Start the execution of server.
     *
     * The execution start with validate the configuration, create all itens that server needs and start to process
     * messages.
     */
    void start();

    /*!
     * \brief Define de reciver of server.
     * \param reciver the reciver.
     */
    void setReciver(const std::shared_ptr<SocketReciver> reciver);

    /*!
     * \brief return the status of server.
     * \return the satus of server.
     */
    ServerStatus getStatus() const;

private:
    bool isValid() const;

    ServerStatus status;
    std::shared_ptr<SocketReciver> reciver;

}; // class Server

}

#endif // SERVER_HPP
