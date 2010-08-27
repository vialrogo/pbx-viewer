/* 
 * File:   MiniPBX.cpp
 * Author: andritom
 * 
 * Created on 1 de Junho de 2010, 19:06
 */

#include <QtGui/qwindowdefs.h>
#include "MiniPBX.h"

MiniPBX::MiniPBX() {
    estaCorriendo = false;
    hilo = new HiloLecturaArchivo();
}

MiniPBX::~MiniPBX() {
}

bool MiniPBX::crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt)
{
    hilo->crearConexionRS232(name, brt, fc, pt, dbt, sbt);
    return true;
}

void MiniPBX::correr(QString rutaArchivo_in, bool ciclico_in){
    if(!estaCorriendo){
        hilo->abrirPuerto();
        estaCorriendo = true;
        hilo->definirParametros(rutaArchivo_in, ciclico_in);
        hilo->start();
    }
}

void MiniPBX::parar(){
    if(estaCorriendo){
        estaCorriendo = false;
        hilo->terminate();
        hilo->cerrarPuerto();
    }
}

bool MiniPBX::probarR232(){
    return hilo->probarR232();
}

