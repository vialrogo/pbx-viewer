/* 
 * File:   MiniPBX.cpp
 * Author: andritom
 * 
 * Created on 1 de Junho de 2010, 19:06
 */

#include "MiniPBX.h"

using namespace std;

MiniPBX::MiniPBX() {
    estaCorriendo = false;    
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(convertir()));
    mensaje = new QString("");
}

MiniPBX::~MiniPBX() {
}



void MiniPBX::convertir(){
    mensaje = leerRS232();
    if(mensaje->compare("")!=0){
//        qDebug() << "<->";
        cout<<">leerRS232()>"<<qPrintable(*mensaje)<<endl;
//        qDebug() << ">-<";
//        escribirTcp();
    }
}

//void MiniPBX::escribirTcp(){
//
//    tcpSocket->write(mensaje->toAscii());
//}

bool MiniPBX::crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt){
    conectionR232 = new RS232_Conection(name, brt, fc, pt, dbt, sbt);
    return true;
}

QString* MiniPBX::leerRS232(){
    
    conectionR232->receiveMsg();
    QString *msg_rec = conectionR232->getReceived_msg();
//    qDebug(qPrintable(*msg_rec));
    //msg_rec->append(*);
    return msg_rec;
}

void MiniPBX::correr(){
    if(!estaCorriendo){
        conectionR232->openPort();        
        estaCorriendo = true;
        timer->start(10);
    }
}

void MiniPBX::parar(){
    if(estaCorriendo){
        estaCorriendo = false;
        timer->stop();
        conectionR232->closePort();
        
    }
}

bool MiniPBX::probarR232(){
    return conectionR232->openPort() && conectionR232->closePort();
}

/*
bool MiniPBX::crearSocket(QString direccion, QString puerto){
    tcpServer = new QTcpServer(this);
        if (!tcpServer->listen())
            return false;
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(escribirTcp()));
    qDebug() << "PUERTO:" <<tcpServer->serverPort();
    return true;
}
*/

//bool MiniPBX::crearSocket(QString direccion, QString puerto){
//    tcpSocket = new QTcpSocket(this);
//    blockSize = 0;
//    tcpSocket->abort();
//    tcpSocket->connectToHost(direccion,puerto.toInt());
//    //connect(tcpSocket, SIGNAL(connected()), this, SLOT(escribirTcp()));
//    //tcpSocket->connectToHost("127.0.0.1",QString("47348").toInt());
//    //connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readFortune()));
//    //connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));
//    return true;
//}
