/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 5 de Junho de 2010, 18:03
 */

#include <QString>
#include "RS232_Conection.h"

using namespace std;

int main() {

    char a;
    cout<<"Esperando cualquier cosa";
    cin>>a;

    RS232_Conection *conection = new RS232_Conection("/dev/ttyUSB0", BAUD19200, FLOW_OFF, PAR_NONE, DATA_8, STOP_1);
    conection->openPort();

    QString *msg =new QString("154100219                   1166 926658429                        1031   0   602 1      000         ");
//    cout<<qPrintable(*msg)<<endl;
    conection->setMessage(msg);

    for (int i = 0; i <100; i++)
    {
        conection->transmitMsg();
    }

//    char a;
//    cout<<"Esperando cualquier cosa";
//    cin>>a;
//    cout<<endl<<endl;
//
//    QString *msg_rec =new QString("cadena recibida: ");
//    conection->receiveMsg();
//    msg_rec->append(*conection->getReceived_msg());
//    cout<<qPrintable(*msg_rec)<<endl;

    conection->closePort();

    return 0;
}
