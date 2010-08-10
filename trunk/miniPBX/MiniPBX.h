/* 
 * File:   MiniPBX.h
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 19:06
 */

#ifndef _MINIPBX_H
#define	_MINIPBX_H

#include <iostream>
#include "RS232_Conection.h"
#include <QTimer>
//#include <QtNetwork>

class QTcpSocket;

class MiniPBX: public QObject{

    Q_OBJECT

public:
    MiniPBX();
    virtual ~MiniPBX();
    bool crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt);
//    bool crearSocket(QString direccion,QString puerto);
    void correr();
    void parar();
    bool probarR232();
private:
    QString *mensaje;
//    QTcpSocket *tcpSocket;
    bool estaCorriendo;
    RS232_Conection *conectionR232;
    QTimer *timer;
    quint16 blockSize;
    QString* leerRS232();
    

private slots:
    void convertir();
//    void escribirTcp();
};

#endif	/* _MINIPBX_H */

