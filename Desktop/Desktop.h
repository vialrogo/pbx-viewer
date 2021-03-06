/* 
 * File:   Desktop.h
 * Author: vialrogo
 *
 * Created on 2 de Junho de 2010, 12:23
 */

#ifndef _DESKTOP_H
#define	_DESKTOP_H

#include <QString>
#include "Llamada.h"
#include "MysqlConection.h"

class Desktop {
public:
    Desktop(QString host_in, QString database_in, QString username_in, QString password_in);
    virtual ~Desktop();
    bool procesarLlamada(QString flujollamadaS, QString pbxSelected);
    int procesarFlujoLlamada(QString flujollamadaS, QString pbxSelected);
    QVector<QString*> listarPBXs();
    bool insertarPBX(QMap<QString,QString> mapa);
    bool actualizarPBX(QMap<QString,QString> mapa);
    bool eliminarPBX(QString pbx_nombre);
    QMap<QString,QString> obtenerPBX(QString pbx_nombre);
private:
    Llamada* llamadita;
    MysqlConection* myconection;
    QString host;
    QString database;
    QString username;
    QString password;
};

#endif	/* _DESKTOP_H */

