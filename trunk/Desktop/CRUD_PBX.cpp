/*
 * File:   CRUD_PBX.cpp
 * Author: andritom
 *
 * Created on 9 de Junho de 2010, 19:59
 */

#include <qt4/QtCore/qdebug.h>

#include "CRUD_PBX.h"

CRUD_PBX::CRUD_PBX() {
    estado = 0;
    widget.setupUi(this);    
}

CRUD_PBX::~CRUD_PBX() {
}

void CRUD_PBX::nuevoPerfil() {
    this->show();
}

void CRUD_PBX::inicializar(QMap<QString,QString> mapa) {    
    QString pbx_nombre = mapa.value("pbx_nombre","");
    if(pbx_nombre.compare("")!=0)
        widget.lineEditNombrePBX->setEnabled(false);
    else
        widget.lineEditNombrePBX->setEnabled(true);
    widget.lineEditNombrePBX->setText(pbx_nombre);
    widget.lineEditAnoI->setText(mapa.value("ano_inicio",""));
    widget.lineEditAnoL->setText(mapa.value("ano_largo",""));
    widget.lineEditMesI->setText(mapa.value("mes_inicio",""));
    widget.lineEditMesL->setText(mapa.value("mes_largo",""));
    widget.lineEditDiaI->setText(mapa.value("dia_inicio",""));
    widget.lineEditDiaL->setText(mapa.value("dia_largo",""));
    widget.lineEditHoraI->setText(mapa.value("hora_inicio",""));
    widget.lineEditHoraL->setText(mapa.value("hora_largo",""));
    widget.lineEditMinutoI->setText(mapa.value("minutos_inicio",""));
    widget.lineEditMinutoL->setText(mapa.value("minutos_largo",""));
    widget.lineEditSegundoI->setText(mapa.value("segundos_inicio",""));
    widget.lineEditSegundoL->setText(mapa.value("segundos_largo",""));
    widget.lineEditDuracionI->setText(mapa.value("duracionS_inicio",""));
    widget.lineEditDuracionL->setText(mapa.value("duracionS_largo",""));
    widget.lineEditOrigenI->setText(mapa.value("origen_inicio",""));
    widget.lineEditOrigenL->setText(mapa.value("origen_largo",""));
    widget.lineEditDestinoI->setText(mapa.value("destino_inicio",""));
    widget.lineEditDestinoL->setText(mapa.value("destino_largo",""));
    widget.lineEditCuentaI->setText(mapa.value("codigocuenta_inicio",""));
    widget.lineEditCuentaL->setText(mapa.value("codigocuenta_largo",""));
    widget.lineEditInternoL->setText(mapa.value("longitud_lla_interna",""));
    widget.lineEditTramaL->setText(mapa.value("longitud_trama",""));
}

QMap<QString,QString> CRUD_PBX::obtenerDatos() {
    QMap<QString, QString> mapeador;
    mapeador["pbx_nombre"]=widget.lineEditNombrePBX->text();
    mapeador["ano_inicio"]=widget.lineEditAnoI->text();
    mapeador["ano_largo"]=widget.lineEditAnoL->text();
    mapeador["mes_inicio"]=widget.lineEditMesI->text();
    mapeador["mes_largo"]=widget.lineEditMesL->text();
    mapeador["dia_inicio"]=widget.lineEditDiaI->text();
    mapeador["dia_largo"]=widget.lineEditDiaL->text();
    mapeador["hora_inicio"]=widget.lineEditHoraI->text();
    mapeador["hora_largo"]=widget.lineEditHoraL->text();
    mapeador["minutos_inicio"]=widget.lineEditMinutoI->text();
    mapeador["minutos_largo"]=widget.lineEditMinutoL->text();
    mapeador["segundos_inicio"]=widget.lineEditSegundoI->text();
    mapeador["segundos_largo"]=widget.lineEditSegundoL->text();
    mapeador["duracionS_inicio"]=widget.lineEditDuracionI->text();
    mapeador["duracionS_largo"]=widget.lineEditDuracionL->text();
    mapeador["origen_inicio"]=widget.lineEditOrigenI->text();
    mapeador["origen_largo"]=widget.lineEditOrigenL->text();
    mapeador["destino_inicio"]=widget.lineEditDestinoI->text();
    mapeador["destino_largo"]=widget.lineEditDestinoL->text();
    mapeador["codigocuenta_inicio"]=widget.lineEditCuentaI->text();
    mapeador["codigocuenta_largo"]=widget.lineEditCuentaL->text();
    mapeador["longitud_lla_interna"]=widget.lineEditInternoL->text();
    mapeador["longitud_trama"]=widget.lineEditTramaL->text();
    return mapeador;
}