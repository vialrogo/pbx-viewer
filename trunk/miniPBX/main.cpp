/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 5 de Junho de 2010, 18:03
 */

#include <QString>
#include <QtGui/QApplication>
#include "RS232_Conection.h"
#include "GUIMiniPBX.h"

using namespace std;

int main(int argc, char *argv[]) {

//    char a;
//    cout<<"Esperando cualquier cosa";
//    cin>>a;
//
//    RS232_Conection *conection = new RS232_Conection("/dev/ttyS0", BAUD19200, FLOW_OFF, PAR_NONE, DATA_8, STOP_1);
//    conection->openPort();
//
//    QString *msg =new QString("145900139                   1833 926592296                        1068   0   602 1      000         ");
////     QString * msg;
////    cout<<qPrintable(*msg)<<endl;
//     while(true)
//     {
//        for (int i = 0; i <1; i++)
//        {
////            msg =new QString(" -- mensaje numero "+QString::number(i));
//            conection->setMessage(msg);
//            conection->transmitMsg();
//            cout<<qPrintable(*msg)<<endl;
//        }
//
//        cout<<"Esperando cualquier cosa ";
//        cin>>a;
//     }
//
////    char a;
////    cout<<"Esperando cualquier cosa";
////    cin>>a;
////    cout<<endl<<endl;
////
////    QString *msg_rec =new QString("cadena recibida: ");
////    conection->receiveMsg();
////    msg_rec->append(*conection->getReceived_msg());
////    cout<<qPrintable(*msg_rec)<<endl;
//
//    conection->closePort();

    QApplication app(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    GUIMiniPBX* aplicacion = new GUIMiniPBX();
    aplicacion->show();

    return app.exec();;

    return 0;
}
