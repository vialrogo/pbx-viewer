/*
 * File:   GUIAdaptador.cpp
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 20:34
 */

#include "GUIAdaptador.h"

GUIAdaptador::GUIAdaptador() {
    widget.setupUi(this);
    objAdaptador = new Adaptador();
    traductorEN = new QTranslator(this);
    traductorPT = new QTranslator(this);
    validadorPuerto = new QIntValidator(5000,65536,this);
    widget.lineEditPuerto->setValidator(validadorPuerto);
    connect(widget.pushButtonSalir, SIGNAL(clicked()), this, SLOT(close()));
    connect(widget.actionCerrar, SIGNAL(triggered()), this, SLOT(close()));
    connect(widget.pushButtonIniciar, SIGNAL(clicked()), this, SLOT(clickIniciar()));
    connect(widget.pushButtonDetener, SIGNAL(clicked()), this, SLOT(clickDetener()));
    connect(widget.actionEspanol, SIGNAL(triggered()), this, SLOT(idiomaEspanol()));
    connect(widget.actionIngles, SIGNAL(triggered()), this, SLOT(idiomaIngles()));
    connect(widget.actionPortugues, SIGNAL(triggered()), this, SLOT(idiomaPortugues()));
    connect(widget.actionAcerca_de_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(widget.actionAcerca_de, SIGNAL(triggered()), this, SLOT(acercaDe()));
    connect(widget.actionAyuda, SIGNAL(triggered()), this, SLOT(ayuda()));
}

GUIAdaptador::~GUIAdaptador() {
}


void GUIAdaptador::clickIniciar(){
    
    bool estaValidado = false;
    bool estaListoRS232 = false;
    bool estaListoSocket = false;
    QString puertoSocket = widget.lineEditPuerto->text();
    QString direccionSocket = widget.lineEditServidor->text();

    if(direccionSocket.compare("") != 0 && puertoSocket.compare("") != 0){
        
        if(puertoSocket.toInt()<5000)
            widget.statusbar->showMessage(tr("El puerto debe ser mayor a ")+"5000");
        else
            estaValidado = true;
    }
    else
        widget.statusbar->showMessage(tr("Ingrese correctamente los datos"));


    if(estaValidado){      
    QString puertoRS232 = widget.comboPuerto->currentText();
    QString velocidadRS232 = widget.comboVelocidad->currentText();
    QString flujoRS232 = widget.comboTipo->currentText();
    QString paridadRS232 = widget.comboParidad->currentText();
    QString dataRS232 = widget.comboData->currentText();
    QString stopRS232 = widget.comboStop->currentText();
    BaudRateType opcionVelocidad;
    FlowType opcionFlujo;
    ParityType opcionParidad;
    DataBitsType opcionData;
    StopBitsType opcionStop;

    if(velocidadRS232.compare("300")==0)
        opcionVelocidad = BAUD300;
    else if(velocidadRS232.compare("600")==0)
        opcionVelocidad = BAUD600;
    else if(velocidadRS232.compare("1200")==0)
        opcionVelocidad = BAUD1200;
    else if(velocidadRS232.compare("2400")==0)
        opcionVelocidad = BAUD2400;
    else if(velocidadRS232.compare("4800")==0)
        opcionVelocidad = BAUD4800;
    else if(velocidadRS232.compare("9600")==0)
        opcionVelocidad = BAUD9600;
    else if(velocidadRS232.compare("19200")==0)
        opcionVelocidad = BAUD19200;
    else if(velocidadRS232.compare("38400")==0)
        opcionVelocidad = BAUD38400;
    else if(velocidadRS232.compare("57600")==0)
        opcionVelocidad = BAUD57600;
    else
        opcionVelocidad = BAUD115200;

    if(flujoRS232.compare("RTS/CTS")==0)
        opcionFlujo = FLOW_HARDWARE;
    else if(flujoRS232.compare("Xon/Xoff")==0)
        opcionFlujo = FLOW_XONXOFF;
    else
        opcionFlujo = FLOW_OFF;

    if(paridadRS232.compare("Par")==0)
        opcionParidad = PAR_EVEN;
    else if(dataRS232.compare("Impar")==0)
        opcionParidad = PAR_ODD;
    else
        opcionParidad = PAR_NONE;

    if(dataRS232.compare("5")==0)
        opcionData=DATA_5;
    else if(dataRS232.compare("6")==0)
        opcionData=DATA_6;
    else if(dataRS232.compare("7")==0)
        opcionData=DATA_7;
    else
        opcionData=DATA_8;

    if(stopRS232.compare("1")==0)
        opcionStop = STOP_1;
    else
        opcionStop = STOP_2;


      /// Crear y probar RS232


      //if(objAdaptador->crearConexionRS232(puertoRS232, BAUD19200, FLOW_OFF, PAR_NONE, DATA_8, STOP_1)){
      if(objAdaptador->crearConexionRS232(puertoRS232, opcionVelocidad, opcionFlujo, opcionParidad, opcionData, opcionStop)){
          qDebug() << "RS232 Creado";
          if(objAdaptador->probarR232()){
            qDebug() << "RS232 Probado";
            estaListoRS232 = true;
          }
          else{
            qDebug() << "RS232 Prueba fallo";
            widget.statusbar->showMessage(tr("Error probando Conexion RS232"));
          }
      }
      else{
        // No se pudo crear RS232
          qDebug() << "RS232 NO Creado";
          widget.statusbar->showMessage(tr("Error creando Conexion RS232"));
      }

      /// Crear y probar Socket
      if(objAdaptador->crearSocket(direccionSocket,puertoSocket)){
        qDebug() << "Socket Creado";
        estaListoSocket = true;
      }
      else{
        qDebug() << "Socket NO Creado";
        widget.statusbar->showMessage(tr("Error probando comunicacion con Socket"));
      }

      /// Iniciar proceso
      if(estaListoRS232 && estaListoSocket){
        widget.pushButtonIniciar->setDisabled(true);
        widget.pushButtonDetener->setDisabled(false);
        objAdaptador->correr();
        activarInterfaz(false);
        widget.statusbar->showMessage(tr("Adaptador corriendo"));
      }
    }
}

void GUIAdaptador::clickDetener(){
    widget.pushButtonIniciar->setDisabled(false);
    widget.pushButtonDetener->setDisabled(true);
    activarInterfaz(true);
    objAdaptador->parar();
    widget.statusbar->showMessage(tr("Se ha detenido exitosamente"));
}

 void GUIAdaptador::actualizarInterfaz(){
     widget.retranslateUi(this);
     widget.statusbar->showMessage(tr("Idioma cambiado"));
 }

 void GUIAdaptador::idiomaIngles(){     
     traductorEN->load("Adaptador_en");
     qApp->installTranslator(traductorEN);
     actualizarInterfaz();
 }

 void GUIAdaptador::idiomaEspanol(){
     qApp->removeTranslator(traductorEN);
     qApp->removeTranslator(traductorPT);
     actualizarInterfaz();
 }

 void GUIAdaptador::idiomaPortugues(){
     traductorPT->load("Adaptador_pt");
     qApp->installTranslator(traductorPT);
     actualizarInterfaz();
 }

 void GUIAdaptador::acercaDe(){
    QMessageBox::about(this,"Acerca de","texto Acerca de");
 }

 void GUIAdaptador::ayuda(){
    QMessageBox::about(this,"Ayuda","texto de Ayuda");
 }

 void GUIAdaptador::activarInterfaz(bool activar){
     widget.lineEditPuerto->setEnabled(activar);
     widget.lineEditServidor->setEnabled(activar);
     widget.comboData->setEnabled(activar);
     widget.comboParidad->setEnabled(activar);
     widget.comboPuerto->setEnabled(activar);
     widget.comboStop->setEnabled(activar);
     widget.comboTipo->setEnabled(activar);
     widget.comboVelocidad->setEnabled(activar);
 }