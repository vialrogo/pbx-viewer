/*
 * File:   GUIDesktop.cpp
 * Author: vialrogo
 *
 * Created on 6 de Junho de 2010, 17:10
 */

#include "GUIDesktop.h"

GUIDesktop::GUIDesktop() {
    widget.setupUi(this);
    estadoCrud = 0;
    estaCorriendo = false;
    objCrud = new CRUD_PBX();
    tcpServer = new QTcpServer(this);
    traductorEN = new QTranslator(this);
    traductorPT = new QTranslator(this);
    validadorPuerto = new QIntValidator(5000,65536,this);
    objDesktop = new Desktop("localhost", "pbxviewer", "pbxviewer", "pbxviewer");
    widget.lineEdit_puerto->setValidator(validadorPuerto);
    actionGroup = new QActionGroup(this);
    actionGroup->addAction(widget.actionEspanol);
    actionGroup->addAction(widget.actionIngles);
    actionGroup->addAction(widget.actionPortugues);
    connect(widget.boton_iniciar, SIGNAL(clicked()), this, SLOT(clickIniciar()));
    connect(widget.menuIniciar, SIGNAL(triggered()), this, SLOT(clickIniciar()));
    connect(widget.boton_parar, SIGNAL(clicked()), this, SLOT(clickDetener()));
    connect(widget.menuParar, SIGNAL(triggered()), this, SLOT(clickDetener()));
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(crearConexion()));
    connect(widget.actionEspanol, SIGNAL(triggered()), this, SLOT(idiomaEspanol()));
    connect(widget.actionIngles, SIGNAL(triggered()), this, SLOT(idiomaIngles()));
    connect(widget.actionPortugues, SIGNAL(triggered()), this, SLOT(idiomaPortugues()));
    connect(widget.menuAcercadeQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(widget.menuAcercade, SIGNAL(triggered()), this, SLOT(acercaDe()));
    connect(widget.actionAyuda, SIGNAL(triggered()), this, SLOT(ayuda()));
    connect(widget.menuNuevoPerfil, SIGNAL(triggered()), this, SLOT(nuevoPerfil()));
    connect(widget.boton_nuevo, SIGNAL(clicked()), this, SLOT(nuevoPerfil()));
    connect(widget.boton_editar, SIGNAL(clicked()), this, SLOT(clickEditar()));
    connect(widget.boton_eliminar, SIGNAL(clicked()), this, SLOT(clickEliminar()));
    connect(widget.comboB_pbxs, SIGNAL(currentIndexChanged (QString)), this, SLOT(cambioCombo(QString)));
    connect(objCrud->widget.pushButtonAceptar, SIGNAL(clicked()), this, SLOT(botonAceptar()));
    connect(objCrud->widget.pushButtonCancelar, SIGNAL(clicked()), this, SLOT(botonCancelar()));
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
        widget.menuIniciar->setDisabled(true);
        widget.boton_parar->setDisabled(false);
        widget.menuParar->setDisabled(false);

        if (!tcpServer->listen(QHostAddress::Any,quint16(puertoSocket.toInt()))) {
            widget.statusbar->showMessage(tr("Error, iniciando el servidor"));
        }

        activarInterfaz(false);
        widget.statusbar->showMessage(tr("corriendo"));
        estaCorriendo = true;
    }
}

void GUIDesktop::clickDetener(){
    if(estaCorriendo){
        widget.boton_iniciar->setDisabled(false);
        widget.menuIniciar->setDisabled(false);
        widget.boton_parar->setDisabled(true);
        widget.menuParar->setDisabled(true);
        activarInterfaz(true);
        widget.statusbar->showMessage(tr("Se ha detenido exitosamente"));
    }
}

 void GUIDesktop::actualizarInterfaz(){
     widget.retranslateUi(this);
     objCrud->widget.retranslateUi(objCrud);
     widget.statusbar->showMessage(tr("Idioma cambiado"),2000);
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
    QMessageBox::about(this,tr("Acerca de"),tr(""));
 }

 void GUIDesktop::ayuda(){
    QMessageBox::about(this,tr("Ayuda"),tr("texto de Ayuda"));
 }

 void GUIDesktop::activarInterfaz(bool activar,bool completa){
     widget.lineEdit_puerto->setEnabled(activar);
     widget.comboB_pbxs->setEnabled(activar);
     widget.boton_nuevo->setEnabled(activar);
     widget.boton_editar->setEnabled(activar);
     widget.boton_eliminar->setEnabled(activar);
     if(completa){
        widget.comboB_pbxs->setEnabled(activar);
        widget.boton_iniciar->setEnabled(activar);
        widget.menuIniciar->setEnabled(activar);
        widget.boton_parar->setEnabled(activar);
        widget.menuParar->setEnabled(activar);
     }
 }

 void GUIDesktop::crearConexion(){
    tcpClient = tcpServer->nextPendingConnection();
    connect(tcpClient, SIGNAL( readyRead() ), this, SLOT( escucharClienteTcp()));
}

void GUIDesktop::escucharClienteTcp(){
    QByteArray tcpData = tcpClient->readAll();
    int cantidadTramas = objDesktop->procesarFlujoLlamada(QString(tcpData),widget.comboB_pbxs->currentText());
    widget.statusbar->showMessage(tr("Se han guardado ")+QString::number(cantidadTramas));
}

void GUIDesktop::cargarListaPBX(){
    widget.comboB_pbxs->clear();
    QVector<QString*> pbxs = objDesktop->listarPBXs();
   
    for (int i = 0; i < pbxs.size(); i++) {
        widget.comboB_pbxs->addItem((QString)pbxs.at(i)[0]);
    }
    if(pbxs.size()>0){
        widget.boton_editar->setEnabled(true);
        widget.boton_eliminar->setEnabled(true);
    }
    else{
        widget.boton_editar->setEnabled(false);
        widget.boton_eliminar->setEnabled(false);
    }    
}

void GUIDesktop::clickEliminar(){
    int x = QMessageBox::question(this,tr("Confirmacion"),tr("Esta seguro de eliminar el perfil ")+widget.comboB_pbxs->currentText()+ " ?",QMessageBox::Yes|QMessageBox::Default,QMessageBox::No|QMessageBox::Escape);
    bool opcion = false;

    if(x == QMessageBox::Yes)
        opcion = true;
    if(opcion){
        if(objDesktop->eliminarPBX(widget.comboB_pbxs->currentText()))
            widget.statusbar->showMessage(tr("El perfil se ha eliminado exitosamente"));
        else
            widget.statusbar->showMessage(tr("Error en la eliminacion del perfil"));
    }
    cargarListaPBX();
}

void GUIDesktop::actionEliminar(){
    
}

void GUIDesktop::clickEditar(){
    estadoCrud = 2;
    objCrud->inicializar(objDesktop->obtenerPBX(widget.comboB_pbxs->currentText()));
    objCrud->show();
}

void GUIDesktop::actionEditar(){

}

void GUIDesktop::insertarPerfil(){

}

void GUIDesktop::nuevoPerfil(){
    estadoCrud = 1;
    QMap<QString,QString> mapaVacio;
    objCrud->inicializar(mapaVacio);
    objCrud->setModal(true);
    objCrud->show();
}

void GUIDesktop::botonAceptar(){    
    switch (estadoCrud){
        case 1:            
            if(objDesktop->insertarPBX(objCrud->obtenerDatos()))
                 widget.statusbar->showMessage(tr("Perfil creado exitosamente"));
            else
                widget.statusbar->showMessage(tr("Error en la creacion del perfil"));
        break;
        case 2:
            if(objDesktop->actualizarPBX(objCrud->obtenerDatos()))
                widget.statusbar->showMessage(tr("Perfil actualizado exitosamente"));
            else
                widget.statusbar->showMessage(tr("Error en la actualizacion del perfil"));
        break;
    }
    cargarListaPBX();
    objCrud->hide();
}

void GUIDesktop::botonCancelar(){
    estadoCrud = 0;
    objCrud->hide();
}

void GUIDesktop::cambioCombo(QString pbx_nombre){
    widget.texarea->setPlainText("Nombre Perfil: "+pbx_nombre);
}