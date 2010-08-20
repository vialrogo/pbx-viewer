/*
 * File:   GUIMiniPBX.cpp
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 20:34
 */

#include "GUIMiniPBX.h"

GUIMiniPBX::GUIMiniPBX() {
    widget.setupUi(this);
    objMiniPBX = new MiniPBX();
    traductorEN = new QTranslator(this);
    traductorPT = new QTranslator(this);
    actionGroup = new QActionGroup(this);
    actionGroup->addAction(widget.actionEspanol);
    actionGroup->addAction(widget.actionIngles);
    actionGroup->addAction(widget.actionPortugues);
    connect(widget.pushButtonSalir, SIGNAL(clicked()), this, SLOT(close()));
    connect(widget.actionCerrar, SIGNAL(triggered()), this, SLOT(close()));
    connect(widget.pushButtonIniciar, SIGNAL(clicked()), this, SLOT(clickIniciar()));
    connect(widget.actionIniciar, SIGNAL(triggered()), this, SLOT(clickIniciar()));
    connect(widget.pushButtonDetener, SIGNAL(clicked()), this, SLOT(clickDetener()));
    connect(widget.actionDetener, SIGNAL(triggered()), this, SLOT(clickDetener()));
    connect(widget.actionEspanol, SIGNAL(triggered()), this, SLOT(idiomaEspanol()));
    connect(widget.actionIngles, SIGNAL(triggered()), this, SLOT(idiomaIngles()));
    connect(widget.actionPortugues, SIGNAL(triggered()), this, SLOT(idiomaPortugues()));
    connect(widget.actionAcerca_de_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(widget.actionAcerca_de, SIGNAL(triggered()), this, SLOT(acercaDe()));
    connect(widget.actionAyuda, SIGNAL(triggered()), this, SLOT(ayuda()));
    connect(widget.pushButtonArchivo, SIGNAL(clicked()), this, SLOT(clickBuscarArchivo()));
}

GUIMiniPBX::~GUIMiniPBX() {
}


void GUIMiniPBX::clickIniciar(){

    
    bool estaListoRS232 = false;
    bool archivoValido = false;

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


      //if(objMiniPBX->crearConexionRS232(puertoRS232, BAUD19200, FLOW_OFF, PAR_NONE, DATA_8, STOP_1)){
      if(objMiniPBX->crearConexionRS232(puertoRS232, opcionVelocidad, opcionFlujo, opcionParidad, opcionData, opcionStop)){
          qDebug() << "RS232 Creado";
          if(objMiniPBX->probarR232()){
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

      QFile file(rutaArchivo);

      if(file.exists())
      {
          archivoValido=true;
      }
      else
      {
          qDebug() << "Archivo no existe";
          widget.statusbar->showMessage(tr("El archivo especificado no existe"));
      }

      /// Iniciar proceso
      if(estaListoRS232 && archivoValido){
        widget.pushButtonIniciar->setDisabled(true);
        widget.actionIniciar->setDisabled(true);
        widget.pushButtonDetener->setDisabled(false);
        widget.actionDetener->setDisabled(false);
        objMiniPBX->correr(rutaArchivo);
        activarInterfaz(false);
        widget.statusbar->showMessage(tr("MiniPBX corriendo"));
      }
}

void GUIMiniPBX::clickDetener(){
    widget.pushButtonIniciar->setDisabled(false);
    widget.actionIniciar->setDisabled(false);
    widget.pushButtonDetener->setDisabled(true);
    widget.actionDetener->setDisabled(true);
    activarInterfaz(true);
    objMiniPBX->parar();
    widget.statusbar->showMessage(tr("Se ha detenido exitosamente"));
}

 void GUIMiniPBX::actualizarInterfaz(){
     widget.retranslateUi(this);
     widget.statusbar->showMessage(tr("Idioma cambiado"));
 }

 void GUIMiniPBX::idiomaIngles(){
     traductorEN->load("miniPBX_en");
     qApp->installTranslator(traductorEN);
     actualizarInterfaz();
 }

 void GUIMiniPBX::idiomaEspanol(){
     qApp->removeTranslator(traductorEN);
     qApp->removeTranslator(traductorPT);
     actualizarInterfaz();
 }

 void GUIMiniPBX::idiomaPortugues(){
     traductorPT->load("miniPBX_pt");
     qApp->installTranslator(traductorPT);
     actualizarInterfaz();
 }

 void GUIMiniPBX::acercaDe(){
     QMessageBox *acercaDe = new QMessageBox();
     QImage logo("logo.png");
     acercaDe->setIconPixmap(QPixmap::fromImage(logo));
     acercaDe->setText(tr("<h3>PBX Viewer: MiniPBX RS232 a Socket 1.0</h3><br>Un MiniPBX de RS232 a Socket escrito en Qt.<br><br>GNU Lesser General Public License<br><a href=\"http://www.gnu.org/licenses/lgpl.html\">http://www.gnu.org/licenses/lgpl.html</a><br><br>Creado por :<br>Victor Alberto Romero Gonzalez<br><br>Escuela de Ingeniería Eléctrica Y Electrónica<br>Universidad del Valle<br>2010"));
     acercaDe->setWindowTitle(tr("Acerca de"));
     acercaDe->show();     
 }

 void GUIMiniPBX::ayuda(){
    QMessageBox *ayuda = new QMessageBox();
    QImage logo("logo.png");
    ayuda->setIconPixmap(QPixmap::fromImage(logo));
    ayuda->setText(tr("<h3>Bienvenido a la ayuda de PBX Viewer: MiniPBX RS232 a Socket</h3><h4>Ayuda</h4><p>Esta aplicación permite recibir tramas a través del puerto RS232 y retransmitirlas a un puerto de red.La aplicación consta de 2 secciones,RS232 y Socket,las cuales contienen las configuraciones de cada una respectivamente.</p><p>Si presenta problemas de conexion con el puerto y/o socket,por favor consulte al administrador del sistema.</p><h4>Contribuye al proyecto</h4><p>El proyecto se encuentra bajo licencia LGPL. Para saber como contribuir a este proyecto, por favor contacte al autor.</p><h4>Contacto</h4><p>Victor Alberto Romero Gonzalez<br>varg04444@gmail.com</p>"));
    ayuda->setWindowTitle(tr("Ayuda"));
    ayuda->show();
 }


 void GUIMiniPBX::activarInterfaz(bool activar){
//     widget.lineEditPuerto->setEnabled(activar);
//     widget.lineEditServidor->setEnabled(activar);
     widget.comboData->setEnabled(activar);
     widget.comboParidad->setEnabled(activar);
     widget.comboPuerto->setEnabled(activar);
     widget.comboStop->setEnabled(activar);
     widget.comboTipo->setEnabled(activar);
     widget.comboVelocidad->setEnabled(activar);
 }

 void GUIMiniPBX::clickBuscarArchivo(){

     
     rutaArchivo = QFileDialog::getOpenFileName(this, "Choose a file to open", QString::null, QString::null);
     widget.lineEditArchivo->setText(rutaArchivo);
     
     qDebug()<<""<<rutaArchivo;
 }