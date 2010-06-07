/*
 * File:   GUIDesktop.cpp
 * Author: vialrogo
 *
 * Created on 6 de Junho de 2010, 17:10
 */

#include "GUIDesktop.h"

GUIDesktop::GUIDesktop() {
    widget.setupUi(this);
    tcpServer = new QTcpServer(this);
    traductorEN = new QTranslator(this);
    traductorPT = new QTranslator(this);
    validadorPuerto = new QIntValidator(5000,65536,this);
    objDesktop = new Desktop("localhost", "pbxviewer", "pbxviewer", "pbxviewer");
    widget.lineEdit_puerto->setValidator(validadorPuerto);
    connect(widget.boton_iniciar, SIGNAL(clicked()), this, SLOT(clickIniciar()));
    connect(widget.boton_parar, SIGNAL(clicked()), this, SLOT(clickDetener()));
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(crearConexion()));
    connect(widget.actionEspanol, SIGNAL(triggered()), this, SLOT(idiomaEspanol()));
    connect(widget.actionIngles, SIGNAL(triggered()), this, SLOT(idiomaIngles()));
    connect(widget.actionPortugues, SIGNAL(triggered()), this, SLOT(idiomaPortugues()));
    connect(widget.menuAcercadeQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(widget.menuAcercade, SIGNAL(triggered()), this, SLOT(acercaDe()));
    connect(widget.actionAyuda, SIGNAL(triggered()), this, SLOT(ayuda()));
    cargarListaPBX();
}

GUIDesktop::~GUIDesktop() {
}


void GUIDesktop::clickIniciar(){
    
    bool estaValidado = false;

    QString puertoSocket = widget.lineEdit_puerto->text();

    if(puertoSocket.compare("") != 0){
        if(puertoSocket.toInt()<5000)
            widget.statusbar->showMessage(tr("El puerto debe ser mayor a ")+"5000");
        else
            estaValidado = true;
    }
    else
        widget.statusbar->showMessage(tr("Ingrese el puerto"));

    if(estaValidado){
        widget.boton_iniciar->setDisabled(true);
        widget.boton_parar->setDisabled(false);

        if (!tcpServer->listen(QHostAddress::Any,quint16(puertoSocket.toInt()))) {
            widget.statusbar->showMessage(tr("Error, iniciando el servidor"));
        }

        activarInterfaz(false);
        widget.statusbar->showMessage(tr(" corriendo"));
    }
}

void GUIDesktop::clickDetener(){
    widget.boton_iniciar->setDisabled(false);
    widget.boton_parar->setDisabled(true);
    activarInterfaz(true);
    widget.statusbar->showMessage(tr("Se ha detenido exitosamente"));
}

 void GUIDesktop::actualizarInterfaz(){
     widget.retranslateUi(this);
     widget.statusbar->showMessage(tr("Idioma cambiado"));
 }

 void GUIDesktop::idiomaIngles(){
     traductorEN->load("Desktop_en");
     qApp->installTranslator(traductorEN);
     actualizarInterfaz();
 }

 void GUIDesktop::idiomaEspanol(){
     qApp->removeTranslator(traductorEN);
     qApp->removeTranslator(traductorPT);
     actualizarInterfaz();
 }

 void GUIDesktop::idiomaPortugues(){
     traductorPT->load("Desktop_pt");
     qApp->installTranslator(traductorPT);
     actualizarInterfaz();
 }

 void GUIDesktop::acercaDe(){
    QMessageBox::about(this,"Acerca de","texto Acerca de");
 }

 void GUIDesktop::ayuda(){
    QMessageBox::about(this,"Ayuda","texto de Ayuda");
 }

 void GUIDesktop::activarInterfaz(bool activar){
     widget.lineEdit_puerto->setEnabled(activar);
     widget.comboB_pbxs->setEnabled(activar);
     widget.boton_nuevo->setEnabled(activar);
     widget.boton_editar->setEnabled(activar);
     widget.boton_eliminar->setEnabled(activar);
 }

 void GUIDesktop::crearConexion(){
    tcpClient = tcpServer->nextPendingConnection();
    connect(tcpClient, SIGNAL( readyRead() ), this, SLOT( escucharClienteTcp()));
}

void GUIDesktop::escucharClienteTcp(){
    QByteArray tcpData = tcpClient->readAll();
    int cantidadTramas = objDesktop->procesarLlamada(QString(tcpData),widget.comboB_pbxs->currentText());
    widget.statusbar->showMessage(tr("Se han guardado ")+QString(cantidadTramas));
}

void GUIDesktop::cargarListaPBX(){
    widget.comboB_pbxs->clear();
    QVector<QString*> pbxs = objDesktop->listarPBXs();
   
    for (int i = 0; i < pbxs.size(); i++) {
        widget.comboB_pbxs->addItem((QString)pbxs.at(i)[0]);
    }
}