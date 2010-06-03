/* 
 * File:   Adaptador.h
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 19:06
 */

#ifndef _ADAPTADOR_H
#define	_ADAPTADOR_H

#include <QDialog>
#include <iostream>
#include "RS232_Conection.h"
#include <QtNetwork>

class QTcpServer;
class QLabel;
class QPushButton;

class Adaptador : public QDialog{

    Q_OBJECT

public:
    Adaptador();    
    virtual ~Adaptador();
    bool crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt);
    bool crearSocket(QString direccion,QString puerto);
    void correr();
    void parar();
    bool probarR232();
private:
    QTcpSocket *tcpSocket;
    //QTcpServer *tcpServer;
    QString *msg_rec;
    bool estaCorriendo;
    RS232_Conection *conectionR232;
    
    QString* leerRS232();
    bool escribirTcp();

private slots:
    QString* convertir();
};

#endif	/* _ADAPTADOR_H */

