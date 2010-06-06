/* 
 * File:   ProcesarLlamada.cpp
 * Author: vialrogo
 * 
 * Created on 2 de Junho de 2010, 12:23
 */

#include "ProcesarLlamada.h"

ProcesarLlamada::ProcesarLlamada() {
}

ProcesarLlamada::~ProcesarLlamada() {
}

bool ProcesarLlamada::procesallamada(QString flujollamadaS){
    // Estos enteros tienen que cambiar dependiendo de los registros de la BD
//    int ano_inicio=4;
//    int ano_largo=2;
//    int mes_inicio=0;
//    int mes_largo=2;
//    int dia_inicio=2;
//    int dia_largo=2;
    int hora_inicio=0;
    int hora_largo=2;
    int minutos_inicio=2;
    int minutos_largo=2;
//    int segundos_inicio=4;
//    int segundos_largo=4;
    int duracionS_inicio=4;
    int duracionS_largo=4;
    int origen_inicio=32;
    int origen_largo=10;
    int destino_inicio=17;
    int destino_largo=15;
    int codigocuenta_inicio=59;
    int codigocuenta_largo=5;
    int prefijo_inicio=11; //Es una secuencia de teclas antes de la llamda
    int prefijo_largo=2;  //ej: 9+<numero extension>

    //Parametros del metodo:
    QString ano="";
    QString mes="";
    QString dia="";
    QString hora="";
    QString minutos="";
    QString segundos="";
    QString duracionS="";
    QString origen="";
    QString destino="";
    QString codigocuenta="";
    QString prefijo="";
    QString tipo="";
    int duracion=0;

    //Llenada de parámetros:
    QDate fecha = (QDateTime::currentDateTime()).date();
    int i_dia=fecha.day();
    int i_mes=fecha.month();
    int i_ano=fecha.year();

//    qDebug(qPrintable("dia: "+QString::number(i_dia)+" mes: "+QString::number(i_mes)+" año: "+QString::number(i_ano)));

    dia=QString::number(i_dia);
    mes=QString::number(i_mes);
    ano=QString::number(i_ano);

//    qDebug(qPrintable("dia: "+dia+" mes: "+mes+" año: "+ano));

    if (i_dia<10)
        dia.prepend("0");
    if (i_mes<10)
        mes.prepend("0");

    qDebug(qPrintable("dia: "+dia+" mes: "+mes+" año: "+ano));

    hora=flujollamadaS.mid(hora_inicio, hora_largo);
    minutos=flujollamadaS.mid(minutos_inicio, minutos_largo);
    segundos="00";
    duracionS=flujollamadaS.mid(duracionS_inicio, duracionS_largo);
    origen=flujollamadaS.mid(origen_inicio, origen_largo).trimmed();
    destino=flujollamadaS.mid(destino_inicio, destino_largo).trimmed();
    codigocuenta=flujollamadaS.mid(codigocuenta_inicio, codigocuenta_largo).trimmed();
    prefijo=flujollamadaS.mid(prefijo_inicio, prefijo_largo).trimmed();

    if(prefijo=="") // si es igual a dos espacios
        tipo="Interna";
    else
    {
        if(destino.startsWith("00"))
            tipo="Internacional";
        else
        {
            if(destino.startsWith("03"))
                tipo="Celular";
            else
            {
                if(destino.startsWith("0"))
                    tipo="Nacional";
                else
                    tipo="Local";
            }
        }
    }

    duracion=ceil(duracionS.toDouble()/60.0);
    QString fechaSalida = ano+"-"+mes+"-"+dia+" "+hora+"-"+minutos+"-"+segundos;

    llamadita = new Llamada (fechaSalida , origen, destino, codigocuenta, tipo, duracion);
    bool ok = llamadita->GuardarBD("localhost", "pbxviewer", "pbxviewer", "pbxviewer");

    return ok;
}