/* 
 * File:   Adaptador.cpp
 * Author: andritom
 * 
 * Created on 1 de Junho de 2010, 19:06
 */

#include "Adaptador.h"

using namespace std;

Adaptador::Adaptador() {
    estaCorriendo = false;    
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(convertir()));    
}

Adaptador::~Adaptador() {
}



void Adaptador::convertir(){
    qDebug() << "<->";
    mensaje = leerRS232();
    cout<<">>>"<<qPrintable(*mensaje)<<endl;
    qDebug() << ">-<";
}

void Adaptador::escribirTcp(){
    
    QString a = mensaje->left(mensaje->size());
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out << (quint16)0;
    out << a;
    out.device()->seek(0);
    out << (quint16)(block.size() - sizeof(quint16));

    QTcpSocket *clientConnection = tcpServer->nextPendingConnection();
    connect(clientConnection, SIGNAL(disconnected()),
            clientConnection, SLOT(deleteLater()));

    clientConnection->write(block);
    clientConnection->disconnectFromHost();    
}

bool Adaptador::crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt){
    conectionR232 = new RS232_Conection(name, brt, fc, pt, dbt, sbt);
    return true;
}

QString* Adaptador::leerRS232(){
    QString *msg_rec =new QString("");
    conectionR232->receiveMsg();
    msg_rec->append(*conectionR232->getReceived_msg());
    return msg_rec;
}

void Adaptador::correr(){
    if(!estaCorriendo){
        conectionR232->openPort();        
        estaCorriendo = true;
        timer->start(1000);
    }
}

void Adaptador::parar(){
    if(estaCorriendo){
        estaCorriendo = false;
        timer->stop();
        conectionR232->closePort();
        
    }
}

bool Adaptador::probarR232(){
    return conectionR232->openPort() && conectionR232->closePort();
}

bool Adaptador::crearSocket(QString direccion, QString puerto){
    tcpServer = new QTcpServer(this);
        if (!tcpServer->listen())
            return false;
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(escribirTcp()));
    qDebug() << "PUERTO:" <<tcpServer->serverPort();
    return true;
}

/*
bool Adaptador::crearSocket(QString direccion, QString puerto){
    tcpSocket = new QTcpSocket(this);
    blockSize = 0;
    tcpSocket->abort();
    //tcpSocket->connectToHost(direccion,puerto.toInt());
    tcpSocket->connectToHost("127.0.0.1",QString("47348").toInt());
    //connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readFortune()));
    //connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));
    return true;
}
 * */