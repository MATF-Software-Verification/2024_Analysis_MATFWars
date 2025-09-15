#include "Client.h"


Client::Client(QObject *parent, const QString hostAddress, quint16 portNumber) : m_NextBlockSize(0){

    m_socket = new QTcpSocket();

    m_host = hostAddress;
    m_port = portNumber;

    m_timeoutTimer = new QTimer();
    m_timeoutTimer->setSingleShot(true);

    connect(this, &Client::hasReadSome, this, &Client::receivedSomething);

    connect(m_socket, &QTcpSocket::errorOccurred, this, &Client::gotError);

    connect(m_timeoutTimer, &QTimer::timeout, this, &Client::connectionTimeout);

    connect(m_socket, &QTcpSocket::disconnected, this, &Client::closeConnection);


}

Client::~Client()
{
    delete m_socket;
    delete m_timeoutTimer;
}


bool Client::getStatus()
{

    return m_status;

}

void Client::closeConnection()
{

    m_timeoutTimer->stop();

    disconnect(m_socket, &QTcpSocket::connected, 0, 0);
    disconnect(m_socket, &QTcpSocket::readyRead, 0, 0);

    bool shouldEmit = false;
    switch (m_socket->state())
    {
    case 0:
        m_socket->disconnectFromHost();
        shouldEmit = true;
        break;
    case 2:
        m_socket->abort();
        shouldEmit = true;
        break;
    default:
        m_socket->abort();
    }

    if (shouldEmit)
    {
        m_status = false;

    }
}

void Client::connect2host()
{

    m_timeoutTimer->start(3000);

    m_socket->connectToHost(m_host, m_port);
    connect(m_socket, &QTcpSocket::connected, this, &Client::connected);
    connect(m_socket, &QTcpSocket::readyRead, this, &Client::readyRead);
}


void Client::receivedSomething(QString msg)
{
    emit someMessage(msg);

}

void Client::gotError(QAbstractSocket::SocketError err)
{

    QString strError = "unknown";
    switch (err)
    {
    case 0:
        strError = "Connection was refused";
        break;
    case 1:
        strError = "Remote host closed the connection";
        break;
    case 2:
        strError = "Host address was not found";
        break;
    case 5:
        strError = "Connection timed out";
        break;
    default:
        strError = "Unknown error";
    }

    inGame = false;
    emit someError(strError);
}

void Client::sendData(QString msg)
{

    QByteArray arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);

    out << quint16(0) << msg;

    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));

    this->m_socket->write(arrBlock);
}


void Client::connectClicked()
{


    this->connect2host();

}

void Client::disconnectClicked()
{

    this->closeConnection();

}

void Client::readyRead()
{

    QDataStream in(m_socket);
    for (;;)
    {
        if (!m_NextBlockSize)
        {
            if (m_socket->bytesAvailable() < sizeof(quint16)) { break; }
            in >> m_NextBlockSize;
        }

        if (m_socket->bytesAvailable() < m_NextBlockSize) { break; }

        QString str; in >> str;

        if (str == "0")
        {
            str = "Connection closed";
            closeConnection();
        }

        emit hasReadSome(str);
        m_NextBlockSize = 0;
    }
}

void Client::connected()
{
    m_status = true;
}

void Client::connectionTimeout()
{

    if(m_socket->state() == QAbstractSocket::ConnectingState)
    {
        m_socket->abort();
        emit someError("timeout");
        delete m_timeoutTimer;
    }
}

QString Client::name() const
{
    return m_name;
}

void Client::setName(const QString &newName)
{
    m_name = newName;
}

QString Client::host() const
{
    return m_host;
}

void Client::setHost(const QString &newHost)
{
    m_host = newHost;
}

quint16 Client::port() const
{
    return m_port;
}

void Client::setPort(quint16 newPort)
{
    m_port = newPort;
}

