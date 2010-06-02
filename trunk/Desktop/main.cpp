/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 28 de Maio de 2010, 10:28
 */

#include <iostream>
#include "MysqlConection.h"
#include "Llamada.h"

using namespace std;

int main(int argc, char *argv[]) {

    Llamada* llamadaprueba;
    bool ok;

    for (int i = 0; i < 10; i++) {
        llamadaprueba = new Llamada( (QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm:ss") , "3333333", "4444444", "12345", "4", 10.5+i, 5000*i);
        ok = llamadaprueba->GuardarBD("localhost", "pbxviewer", "pbxviewer", "pbxviewer");
        
        if(ok)
            cout<<"Guardo la llamada :)"<<endl<<endl;
        else
            cout<<"No guardo la llamada :("<<endl<<endl;
    }

//    if(conectado)
//        cout<<"Se conecto! :)"<<endl<<endl;
//    else
//        cout<<"No se conecto :("<<endl<<endl;
//
//    QString cadena = (QDateTime::currentDateTime() ).toString("yyyy-MM-dd hh:mm:ss");
//    cout<< qPrintable(cadena) <<endl;

    return 0;
}
