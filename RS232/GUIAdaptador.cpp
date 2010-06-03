/*
 * File:   GUIAdaptador.cpp
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 20:34
 */

#include <qt4/QtCore/qdebug.h>

#include "GUIAdaptador.h"



GUIAdaptador::GUIAdaptador() {
    widget.setupUi(this);
    objAdaptador = new Adaptador();

    connect(widget.pushButtonSalir, SIGNAL(clicked()), this, SLOT(close()));
    connect(widget.pushButtonIniciar, SIGNAL(clicked()), this, SLOT(clickIniciar()));
    connect(widget.pushButtonDetener, SIGNAL(clicked()), this, SLOT(clickDetener()));
    widget.statusbar->showMessage(tr("Esperando datos"), 2000);
}

GUIAdaptador::~GUIAdaptador() {
}


void GUIAdaptador::clickIniciar(){

    bool estaValidado = false;

    QString puertoSocket = widget.lineEditPuerto->text();
    QString direccionSocket = widget.lineEditServidor->text();

    if(direccionSocket.compare("") != 0 && puertoSocket.compare("") != 0)
        estaValidado = true;

    if(estaValidado){
      widget.pushButtonIniciar->setDisabled(true);
      widget.pushButtonDetener->setDisabled(false);
      QString puertoRS232 = widget.comboPuerto->currentText();
      
      if(objAdaptador->crearConexionRS232(puertoRS232, BAUD19200, FLOW_OFF, PAR_NONE, DATA_8, STOP_1)){
          qDebug() << "RS232 Creado";          
          qDebug() << "prueba" <<objAdaptador->probarR232();
          objAdaptador->crearSocket(direccionSocket,puertoSocket);


      }
      else{
        // No se pudo crear RS232
      }
    }
}

void GUIAdaptador::clickDetener(){    
    widget.pushButtonIniciar->setDisabled(false);
    widget.pushButtonDetener->setDisabled(true);


}