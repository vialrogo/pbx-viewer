/* 
 * File:   Adaptador.h
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 19:06
 */

#ifndef _ADAPTADOR_H
#define	_ADAPTADOR_H


#include <iostream>
#include "RS232_Conection.h"
#include <QtNetwork>


class QTcpServer;

class Adaptador: public QObject{

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
    QString *mensaje;
    QTcpServer *tcpServer;
    bool estaCorriendo;
    RS232_Conection *conectionR232;
    QTimer *timer;
    quint16 blockSize;
    QString* leerRS232();
    

private slots:
    void convertir();
    void escribirTcp();
};

#endif	/* _ADAPTADOR_H */

