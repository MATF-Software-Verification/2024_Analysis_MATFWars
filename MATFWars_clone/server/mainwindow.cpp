#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit_log->setReadOnly(true);

    server = new Server(this);
    connect(server, &Server::newMessage,
            this, &MainWindow::gotNewMesssage);
    connect(server->m_server, &QTcpServer::newConnection,
            this, &MainWindow::smbConnectedToServer);
    connect(server, &Server::smbDisconnected, this, &MainWindow::disconnection);

}

MainWindow::~MainWindow()
{
    delete server;
    delete ui;
}

void MainWindow::on_pushButton_startServer_clicked()
{

    quint16 port = ui->lineEdit_port->text().toUShort();

    if (!server->m_server->listen(QHostAddress::Any, port))
    {
        ui->textEdit_log->append(tr("<font color=\"red\"><b>Error!</b> The port is taken by some other service.</font>"));
        return;
    }
    connect(server->m_server, &QTcpServer::newConnection, server, &Server::newConnection);
    ui->textEdit_log->append(tr("<font color=\"green\"><b>Server started</b>, ")+ QString::number(port) +tr(" port is openned.</font>"));
}

void MainWindow::on_pushButton_stopServer_clicked()
{
    if(server->m_server->isListening())
    {
        disconnect(server->m_server, &QTcpServer::newConnection, server, &Server::newConnection);

        QList<QTcpSocket *> clients = server->getClients();
        for(int i = 0; i < clients.count(); i++)
        {
            //server->sendToClient(clients.at(i), "Connection closed");
            server->sendToClient(clients.at(i), "0");
        }

        server->m_server->close();
        ui->textEdit_log->append(tr("<b>Server stopped</b>, port is closed"));
    }
    else
    {
        ui->textEdit_log->append(tr("<b>Error!</b> Server was not running"));
    }
}

void MainWindow::on_pushButton_testConn_clicked()
{
    if(server->m_server->isListening())
    {
        ui->textEdit_log->append(
            QString("%1 %2")
                .arg("Server is listening, number of connected clients:")
                .arg(QString::number(server->getClients().count()))
            );
    }
    else
    {
        ui->textEdit_log->append(
            QString("%1 %2")
                .arg("Server is not listening, number of connected clients:")
                .arg(QString::number(server->getClients().count()))
            );
    }
}

void MainWindow::smbConnectedToServer()
{
    ui->textEdit_log->append(tr("Somebody has connected"));
}

void MainWindow::gotNewMesssage(QString msg)
{
    QByteArray jsonData = msg.toUtf8();
    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    QJsonObject jsonObj = doc.object();

    if(jsonObj["type"] == "gameCreated"){
        server->gameInSession = true;
    }else if(jsonObj["type"] == "question" && server->gameInSession == true)
        server->sendToClient(server->getClients()[1], "true");
    else if(jsonObj["type"] == "question" && server->gameInSession == false)
        server->sendToClient(server->getClients()[0], "false");
    ui->textEdit_log->append(QString("New message: %1").arg(msg));

}

void MainWindow::disconnection()
{
    ui->textEdit_log->append(QString("Somebody has disconnected"));
    if(server->gameInSession){
        QTimer::singleShot(3000, [this]{on_pushButton_stopServer_clicked();});
    }
}
