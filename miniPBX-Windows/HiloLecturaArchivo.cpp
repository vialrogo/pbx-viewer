/* 
 * File:   HiloLecturaArchivo.cpp
 * Author: vialrogo
 * 
 * Created on 24 de Agosto de 2010, 16:14
 */

#include "HiloLecturaArchivo.h"

HiloLecturaArchivo::HiloLecturaArchivo()
{
}

HiloLecturaArchivo::~HiloLecturaArchivo()
{
}

void HiloLecturaArchivo::definirParametros(QString rutaArchivo_in, bool ciclico_in)
{
    rutaArchivo = rutaArchivo_in;
    ciclico = ciclico_in;
}

void HiloLecturaArchivo::run()
{
     QFile file(rutaArchivo);
     QString *line = new QString();

     if ( file.open(QIODevice::ReadOnly) ) {

         QTextStream stream( &file );

         while ( !stream.atEnd() ) {
             *line = stream.readLine() + "\n";
             escribirRS232(line);
//             qDebug(qPrintable(*line));
             msleep(1000);
         }
         file.close();

         if(ciclico)
             this->run();

     }
     else
         qDebug()<<"No se pudo abrir el archivo :(";

     this->exec();
}

bool HiloLecturaArchivo::probarR232()
{
    return conectionR232->openPort() && conectionR232->closePort();
}

bool HiloLecturaArchivo::crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt)
{
    conectionR232 = new RS232_Conection(name, brt, fc, pt, dbt, sbt);
    return true;
}

void HiloLecturaArchivo::escribirRS232(QString * llamadaTrasmitir)
{

    qDebug(qPrintable(*llamadaTrasmitir));
    conectionR232->setMessage(llamadaTrasmitir);
    conectionR232->transmitMsg();
}

void HiloLecturaArchivo::abrirPuerto()
{
    conectionR232->openPort();
}

void HiloLecturaArchivo::cerrarPuerto()
{
    conectionR232->closePort();
}

