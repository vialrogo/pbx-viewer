/* 
 * File:   MiniPBX.h
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 19:06
 */

#ifndef _MINIPBX_H
#define	_MINIPBX_H


//#include "RS232_Conection.h"
#include "HiloLecturaArchivo.h"
#include <QDebug>

class QTcpSocket;

class MiniPBX: public QObject{

    Q_OBJECT

public:
    MiniPBX();
    virtual ~MiniPBX();
    bool crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt);
    void correr(QString rutaArchivo_in, bool ciclico_in);
    void parar();
    bool probarR232();

private:
    HiloLecturaArchivo * hilo;
    bool estaCorriendo;
  

private slots:
    
};

#endif	/* _MINIPBX_H */

