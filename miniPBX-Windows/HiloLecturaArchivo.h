/* 
 * File:   HiloLecturaArchivo.h
 * Author: vialrogo
 *
 * Created on 24 de Agosto de 2010, 16:14
 */

#ifndef HILOLECTURAARCHIVO_H
#define	HILOLECTURAARCHIVO_H

#include "RS232_Conection.h"
#include <QtCore/QThread>
#include <QDebug>
#include <QFile>

class HiloLecturaArchivo : public QThread
{
    Q_OBJECT

public:
    HiloLecturaArchivo();
    virtual ~HiloLecturaArchivo();
    void definirParametros(QString rutaArchivo_in, bool ciclico);
    bool crearConexionRS232(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt);
    bool probarR232();
    void abrirPuerto();
    void cerrarPuerto();

protected:
        void run();

private:
    QString rutaArchivo;
    bool ciclico;
    RS232_Conection *conectionR232;
    quint16 blockSize;
    void escribirRS232(QString * llamadaTrasmitir);
};

#endif	/* HILOLECTURAARCHIVO_H */


