/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 12 de mayo de 2010, 04:40 PM
 */

#include <iostream>
#include <QString>

#include "RS232_Conection.h"
#include "MysqlConection.h"

using namespace std;

int main(int argc, char *argv[]) {

    RS232_Conection *conection = new RS232_Conection("/dev/ttyS0", BAUD19200, FLOW_OFF, PAR_NONE, DATA_8, STOP_1);
    conection->openPort();

    char a;
    cout<<"Esperando cualquier cosa para recibir";
    cin>>a;

    QString *msg_rec =new QString("cadena recibida: ");
    conection->receiveMsg();
    msg_rec->append(*conection->getReceived_msg());
    cout<<qPrintable(*msg_rec)<<endl;

    cout<<"Esperando cualquier cosa para cerrar";
    cin>>a;

    conection->closePort();

    MysqlConection* mysconect = new MysqlConection();

    bool conectado = mysconect->Conectar("localhost", "pbxviewer", "pbxviewer", "pbxviewer");

    if(conectado)
        cout<<"Se conecto! :)"<<endl<<endl;
    else
        cout<<"No se conecto :("<<endl<<endl;

    //QString** salida= mysconect->Consulta("Select id, Origen, Destino from llamada",3);

    return 0;
}
