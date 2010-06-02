/* 
 * File:   Llamada.h
 * Author: vialrogo
 *
 * Created on 1 de Junho de 2010, 18:20
 */

#ifndef _LLAMADA_H
#define	_LLAMADA_H

#include <QString>
#include "MysqlConection.h"
#include <iostream>

using namespace std;

class Llamada {
public:
    Llamada();
    Llamada(QString hora_in, QString origen_in, QString destino_in,  QString codigocuenta_in, QString tipo_in, int duracion_in, double costo_in);
    virtual ~Llamada();
    bool GuardarBD(QString host, QString database, QString username, QString password);
private:
    QString hora;
    QString origen;
    QString destino;
    QString codigocuenta;
    QString tipo;
    int duracion;
    double costo;

    MysqlConection* myconection;
};

#endif	/* _LLAMADA_H */

