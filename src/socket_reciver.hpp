#ifndef  RECIVER_HPP

namespace bone {

/*!
 * \brief The SocketReciver class is responsable to create and execute the recive based on socket.
 */
class SocketReciver {
public:
    /*!
     * \brief Default cosntructor of SocketReciver class.
     *
     * Set the port number to zero.
     */
    SocketReciver();

    /*!
     * \brief Deafult dstructor of class SocketReciver class.
     */
    ~SocketReciver();

    /*!
     * \brief Set the number of port of reciver.
     * \param port number of port.
     */
    void setPort(const unsigned int port);

    /*!
     * \brief Check if the recive is valid;
     * \return if is valid or not.
     */
    bool isValid() const;

private:
    unsigned int port;
};

}

#define  RECIVER_HPP
#endif // RECIVER_HPP
