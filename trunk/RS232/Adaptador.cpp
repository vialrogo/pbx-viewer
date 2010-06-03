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
    tcpSocket = new QTcpSocket(this);    
    
    cout<<"Conssolo"<<endl;
}

Adaptador::~Adaptador() {
}

QString* Adaptador::convertir(){
    cout<<"Convertir"<<endl;
}

bool Adaptador::escribirTcp(){

}

bool Adaptador::crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt){
    conectionR232 = new RS232_Conection(name, brt, fc, pt, dbt, sbt);
    return true;
}

QString* Adaptador::leerRS232(){

    conectionR232->openPort();
    
    char a;
    cout<<"Esperando cualquier cosa para recibir";
    cin>>a;

    QString *msg_rec =new QString("cadena recibida: ");
    conectionR232->receiveMsg();
    msg_rec->append(*conectionR232->getReceived_msg());
    cout<<qPrintable(*msg_rec)<<endl;

    cout<<"Esperando cualquier cosa para cerrar";
    cin>>a;

    conectionR232->closePort();
    
    return msg_rec;
}

void Adaptador::correr(){
    estaCorriendo = true;
    while(estaCorriendo)
    {
        leerRS232();
    }
}

bool Adaptador::probarR232(){
    return conectionR232->openPort() && conectionR232->closePort();
}

bool Adaptador::crearSocket(QString direccion, QString puerto){
    tcpSocket->abort();
    tcpSocket->connectToHost(direccion,puerto.toInt());
}