/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 12 de mayo de 2010, 04:40 PM
 */

#include <iostream>

#include "MysqlConection.h"

using namespace std;

int main(int argc, char *argv[]) {

    MysqlConection* mysconect = new MysqlConection();

    bool conectado = mysconect->Conectar("localhost", "pbxviewer", "pbxviewer", "pbxviewer");

    if(conectado)
        cout<<"Se conecto! :)"<<endl<<endl;
    else
        cout<<"No se conecto :("<<endl<<endl;

    QString** salida= mysconect->Consulta("Select id, Origen, Destino from llamada",3);

//    for (int i = 0; i < salida->size(); i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            //cout<<salida[i][j];
//        }
//    }

    int* arr = new int[5];

    cout<<""<<arr->length();


    return 0;
}
