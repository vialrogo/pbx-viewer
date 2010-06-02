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

Llamada::Llamada(QString hora_in, QString origen_in, QString destino_in,  QString codigocuenta_in, QString tipo_in, int duracion_in, double costo_in) {
    hora = hora_in;
    origen = origen_in;
    destino = destino_in;
    codigocuenta = codigocuenta_in;
    tipo = tipo_in;
    duracion = duracion_in;
    costo = costo_in;

    myconection = new MysqlConection();
}

Llamada::~Llamada() {
}

bool Llamada::GuardarBD(QString host, QString database, QString username, QString password) {

    bool isConectado = myconection->conectar(host, database, username, password);
    QString duracionS = QString::number(duracion);
    QString costoS = QString::number(costo);

    cout<<"Conectado: "<<isConectado<<endl;
    QString llamadaS= "INSERT INTO  llamada (lla_hora, lla_origen, lla_destino, lla_codigocuenta, lla_tipo, lla_duracion, lla_costo) VALUES ('"+ hora +"' , '"+ origen + "', '"+ destino +"', '"+ codigocuenta +"', '"+ tipo +"', '"+ duracionS +"', '"+ costoS+ "');";
//    QString llamadaS= "SELECT * FROM llamada;";

    cout<<endl<<endl<<qPrintable(llamadaS)<<endl<<endl<<endl;

    bool ok = false;
//    QVector<QString*> vector(0);

    if(isConectado){
        ok = myconection->insercion(llamadaS);
//        vector = myconection->consulta(llamadaS, 8);
        cout<<"Entro al if y ok: "<<ok<<endl;
//        cout<<"vector.size(): "<<vector.size()<<endl;
    }
    return ok;
}

