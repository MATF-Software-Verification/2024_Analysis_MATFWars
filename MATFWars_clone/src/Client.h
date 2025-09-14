#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QTimer>


class Client : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool currentStatus READ getStatus)


public:
    explicit Client(QObject *parent, const QString hostAddress, quint16 portNumber);
     ~Client();

    bool getStatus();

    QTcpSocket *m_socket = nullptr;

    QString host() const;
    void setHost(const QString &newHost);
    quint16 port() const;
    void setPort(quint16 newPort);

    QString name() const;
    void setName(const QString &newName);

    bool inGame = true;

public slots:
    void closeConnection();
    void connect2host();

    void receivedSomething(QString msg);
    void gotError(QAbstractSocket::SocketError err);
    void sendData(QString msg);
    void connectClicked();
    void disconnectClicked();

private slots:
    void readyRead();
    void connected();
    void connectionTimeout();

signals:

    void someError(QString err);
    void someMessage(QString msg);

    void hasReadSome(QString msg);


private:

    QString m_name;
    QString m_host;
    quint16 m_port;
    bool m_status = false;
    quint16 m_NextBlockSize;
    QTimer *m_timeoutTimer = nullptr;

};

#endif // CLIENT_H
