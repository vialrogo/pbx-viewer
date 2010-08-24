/* 
 * File:   MiniPBX.cpp
 * Author: andritom
 * 
 * Created on 1 de Junho de 2010, 19:06
 */

#include <QtGui/qwindowdefs.h>

#include "MiniPBX.h"
using namespace std;

MiniPBX::MiniPBX() {
    estaCorriendo = false;    
//    timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(enviarLlamada()));
}

MiniPBX::~MiniPBX() {
}

void MiniPBX::enviarLlamada(){

     QFile file(rutaArchivo);
     QString *line = new QString();

     if ( file.open(QIODevice::ReadOnly) ) {

         QTextStream stream( &file );

         while ( !stream.atEnd() ) {
             *line = stream.readLine() + "\n";
//             escribirRS232(line);
             qDebug(qPrintable(*line));
             usleep(100000);
         }
         file.close();
     }
     else
     {
         qDebug()<<"No se pudo abrir el archivo :(";
     }
}

bool MiniPBX::crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt){
    conectionR232 = new RS232_Conection(name, brt, fc, pt, dbt, sbt);
    return true;
}

void MiniPBX::escribirRS232(QString * llamadaTrasmitir){ //Arreglar
    
    qDebug(qPrintable(*llamadaTrasmitir));
    conectionR232->setMessage(llamadaTrasmitir);
    conectionR232->transmitMsg();
}

void MiniPBX::correr(QString rutaArchivo_in){
    if(!estaCorriendo){
        rutaArchivo = rutaArchivo_in;
        conectionR232->openPort();        
        estaCorriendo = true;
        enviarLlamada();
//        timer->start(10);
    }
}

void MiniPBX::parar(){
    if(estaCorriendo){
        estaCorriendo = false;
//        timer->stop();
        conectionR232->closePort();
    }
}

bool MiniPBX::probarR232(){
    return conectionR232->openPort() && conectionR232->closePort();
}

