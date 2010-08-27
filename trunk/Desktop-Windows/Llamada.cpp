/* 
 * File:   Llamada.cpp
 * Author: vialrogo
 * 
 * Created on 1 de Junho de 2010, 18:20
 */

#include "Llamada.h"

Llamada::Llamada() {
     myconection = new MysqlConection();
}

Llamada::Llamada(QString hora_in, QString origen_in, QString destino_in,  QString codigocuenta_in, QString tipo_in, int duracion_in) {
    hora = hora_in;
    origen = origen_in;
    destino = destino_in;
    codigocuenta = codigocuenta_in;
    tipo = tipo_in;
    duracion = duracion_in;

    myconection = new MysqlConection();
}

Llamada::~Llamada() {
}

bool Llamada::GuardarBD(QString host, QString database, QString username, QString password) {

    bool isConectado = myconection->conectar(host, database, username, password);
    QString duracionS = QString::number(duracion);
    bool ok = false;

    QString idTipo=(myconection->consulta("SELECT tip_id FROM `tipo_llamada` WHERE tip_nombre='" + tipo + "';").at(0))[0];

    QString llamadaS= "INSERT INTO  llamada (lla_hora, lla_origen, lla_destino, lla_codigocuenta, lla_idTipo, lla_duracion) VALUES ('"+ hora +"' , '"+ origen + "', '"+ destino +"', '"+ codigocuenta +"', '"+ idTipo +"', '"+ duracionS +"');";

    if(isConectado){
        ok = myconection->insercion(llamadaS);
    }
    
    myconection->desconectar();

    return ok;
}

