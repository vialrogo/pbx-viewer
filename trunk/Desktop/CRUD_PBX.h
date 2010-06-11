/* 
 * File:   CRUD_PBX.h
 * Author: andritom
 *
 * Created on 9 de Junho de 2010, 19:59
 */

#ifndef _CRUD_PBX_H
#define	_CRUD_PBX_H

#include "ui_CRUD_PBX.h"

class CRUD_PBX : public QDialog {
    Q_OBJECT
public:
    CRUD_PBX();
    virtual ~CRUD_PBX();
    Ui::CRUD_PBX widget;
    void inicializar(QMap<QString,QString> mapa);
    QMap<QString,QString> obtenerDatos();
private:
    int estado;
private slots:
    void nuevoPerfil();
};

#endif	/* _CRUD_PBX_H */
