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
    bool estaListoRS232 = false;
    bool estaListoSocket = false;
    QString puertoSocket = widget.lineEditPuerto->text();
    QString direccionSocket = widget.lineEditServidor->text();

   // if(direccionSocket.compare("") != 0 && puertoSocket.compare("") != 0)
        estaValidado = true;

    if(estaValidado){      
      QString puertoRS232 = widget.comboPuerto->currentText();

      /// Crear y probar RS232
      if(objAdaptador->crearConexionRS232(puertoRS232, BAUD19200, FLOW_OFF, PAR_NONE, DATA_8, STOP_1)){
          qDebug() << "RS232 Creado";
          if(objAdaptador->probarR232()){
            qDebug() << "RS232 Probado";
            estaListoRS232 = true;
          }
          else{
            qDebug() << "RS232 Prueba fallo";
          }
      }
      else{
        // No se pudo crear RS232
          qDebug() << "RS232 NO Creado";
      }

      /// Crear y probar Socket
      if(objAdaptador->crearSocket(direccionSocket,puertoSocket)){
        qDebug() << "Socket Creado";
        estaListoSocket = true;
      }
      else{
        qDebug() << "Socket NO Creado";
      }

      /// Iniciar proceso
      if(estaListoRS232 && estaListoSocket){
        widget.pushButtonIniciar->setDisabled(true);
        widget.pushButtonDetener->setDisabled(false);
        objAdaptador->correr();
      }
    }
}

void GUIAdaptador::clickDetener(){    
    widget.pushButtonIniciar->setDisabled(false);
    widget.pushButtonDetener->setDisabled(true);
    objAdaptador->parar();
}