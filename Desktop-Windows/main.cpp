/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 28 de Maio de 2010, 10:28
 */

#include <iostream>
#include <QtGui/QApplication>
#include "MysqlConection.h"
//#include "Llamada.h"
#include "GUIDesktop.h"

using namespace std;

int main(int argc, char *argv[]) {

//    Llamada* llamadaprueba;
//    bool ok;
//
//    for (int i = 0; i < 10; i++) {
//        llamadaprueba = new Llamada( (QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm:ss") , "3333333", "4444444", "12345", "Interna", 10.5+i);
//        ok = llamadaprueba->GuardarBD("localhost", "pbxviewer", "pbxviewer", "pbxviewer");
//
//        if(ok)
//            cout<<"Guardo la llamada :)"<<endl<<endl;
//        else
//            cout<<"No guardo la llamada :("<<endl<<endl;
//    }
    
//    ProcesarLlamada* procesador = new ProcesarLlamada("localhost", "pbxviewer", "pbxviewer", "pbxviewer");
//    bool ok;
//
//    for (int i = 0; i < 3; i++) {
//        ok = procesador->procesallamada("145900139                   1833 926592296                        1068   0   602 1      000         ");
//
//        if(ok)
//            cout<<"Guardo la llamada :)"<<endl<<endl;
//        else
//            cout<<"No guardo la llamada :("<<endl<<endl;
//    }

//    if(conectado)
//        cout<<"Se conecto! :)"<<endl<<endl;
//    else
//        cout<<"No se conecto :("<<endl<<endl;
//
//    QString cadena = (QDateTime::currentDateTime() ).toString("yyyy-MM-dd hh:mm:ss");
//    cout<< qPrintable(cadena)<<endl;
//    cout<< qPrintable(QString::number((QDateTime::currentDateTime()).date().year())) <<endl;

//    int duracion=ceil(QString("122.234").toDouble()/60.0);
//    cout<<"Salida: "<<duracion<<endl;

    QApplication app(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    GUIDesktop* aplicacion = new GUIDesktop();
    aplicacion->show();
    
    return app.exec();;
}
