/* 
 * File:   Desktop.cpp
 * Author: vialrogo
 * 
 * Created on 2 de Junho de 2010, 12:23
 */

#include "Desktop.h"

Desktop::Desktop(QString host_in, QString database_in, QString username_in, QString password_in) {
    host = host_in;
    database = database_in;
    username = username_in;
    password = password_in;

    myconection = new MysqlConection();
}

Desktop::~Desktop() {
}

int Desktop::procesarFlujoLlamada(QString flujollamadaS, QString pbxSelected)
{
    bool isConectado = myconection->conectar(host, database, username, password);
    int longitud_Trama=0;

    if(isConectado)
        longitud_Trama=((QString)(myconection->consulta("SELECT con_con_valor FROM pbx,configuraciones,concepto WHERE pbx_nombre='" + pbxSelected + "' and pbx_id=con_pbx_id and con_nombre='longitud_trama' and con_id=con_con_id;").at(0))[0]).toInt();
    else
    {
        qDebug("Error al conectar a la base de datos");
        return false;
    }
    myconection->desconectar();
    int numerollamadas = (int)(flujollamadaS.length()/longitud_Trama);
    int cantidadProcesadas=0;

    for (int i = 0; i < numerollamadas; i++)
    {
        if(procesarLlamada(flujollamadaS.left(longitud_Trama),pbxSelected))
            cantidadProcesadas++;
        flujollamadaS = flujollamadaS.right(longitud_Trama+1);
    }

    return cantidadProcesadas;
}

bool Desktop::procesarLlamada(QString flujollamadaS, QString pbxSelected){

    
    bool isConectado = myconection->conectar(host, database, username, password);
    QString idPBX="";

    if(isConectado)
        idPBX=(myconection->consulta("SELECT pbx_id FROM `pbx` WHERE pbx_nombre='" + pbxSelected + "';").at(0))[0];
    else
    {
        qDebug("Error al conectar a la base de datos");
        return false;
    }

    QVector<QString*> vector = myconection->consulta("SELECT con_nombre, con_con_valor FROM configuraciones, concepto WHERE con_pbx_id=" + pbxSelected + " and con_con_id=con_id;");
    myconection->desconectar();

    int numeroConceptos = vector.size();
    QMap<QString, int> mapeador;

    for (int i = 0; i < numeroConceptos; i++)
    {
        mapeador[(vector.at(i))[0]]=((QString)(vector.at(i))[1]).toInt();
    }
    
    // Estos enteros tienen que cambiar dependiendo de los registros de la BD
    int ano_inicio=mapeador.value("ano_inicio",-1);
    int ano_largo=mapeador.value("ano_largo",-1);
    int mes_inicio=mapeador.value("mes_inicio",-1);
    int mes_largo=mapeador.value("mes_largo",-1);
    int dia_inicio=mapeador.value("dia_inicio",-1);
    int dia_largo=mapeador.value("dia_largo",-1);
    int hora_inicio=mapeador.value("hora_inicio",-1);
    int hora_largo=mapeador.value("hora_largo",-1);
    int minutos_inicio=mapeador.value("minutos_inicio",-1);
    int minutos_largo=mapeador.value("minutos_largo",-1);
    int segundos_inicio=mapeador.value("segundos_inicio",-1);
    int segundos_largo=mapeador.value("segundos_largo",-1);
    int duracionS_inicio=mapeador.value("duracionS_inicio",-1);
    int duracionS_largo=mapeador.value("duracionS_largo",-1);
    int origen_inicio=mapeador.value("origen_inicio",-1);
    int origen_largo=mapeador.value("origen_largo",-1);
    int destino_inicio=mapeador.value("destino_inicio",-1);
    int destino_largo=mapeador.value("destino_largo",-1);
    int codigocuenta_inicio=mapeador.value("codigocuenta_inicio",-1);
    int codigocuenta_largo=mapeador.value("codigocuenta_largo",-1);
    int longitud_lla_interna=mapeador.value("longitud_lla_interna",-1);

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
    QString tipo="";
    int duracion=0;

    //Llenada de parámetros:
    QDate fecha = (QDateTime::currentDateTime()).date();

    //Año
    if(ano_inicio==-1 || ano_largo==-1)
        ano=QString::number(fecha.year());
    else
        ano=flujollamadaS.mid(ano_inicio, ano_largo);

    //Mes
    if(mes_inicio==-1 || mes_largo==-1)
        mes=QString::number(fecha.month());
    else
    {
        mes=flujollamadaS.mid(mes_inicio, mes_largo);
        if (mes.length()<2)
            mes.prepend("0");
    }

    //Dia
    if(dia_inicio==-1 || dia_largo==-1)
        dia=QString::number(fecha.day());
    else
    {
        dia=flujollamadaS.mid(dia_inicio, dia_largo);
        if (dia.length()<2)
            dia.prepend("0");
    }

    //Hora
    if(hora_inicio==-1 || hora_largo==-1)
        hora=QString::number(QTime::currentTime().hour());
    else
    {
        hora=flujollamadaS.mid(hora_inicio, hora_largo);
        if (hora.length()<2)
            hora.prepend("0");
    }

    //Minutos
    if(minutos_inicio==-1 || minutos_largo==-1)
        minutos=QString::number(QTime::currentTime().minute());
    else
    {
        minutos=flujollamadaS.mid(minutos_inicio, minutos_largo);
        if (minutos.length()<2)
            minutos.prepend("0");
    }

    //Segundos
    if(segundos_inicio==-1 || segundos_largo==-1)
        segundos=QString::number(QTime::currentTime().second());
    else
    {
        segundos=flujollamadaS.mid(segundos_inicio, segundos_largo);
        if (segundos.length()<2)
            segundos.prepend("0");
    }

    qDebug(qPrintable("dia: "+dia+" mes: "+mes+" año: "+ano+" hora: "+hora+" minutos: "+minutos+" segundos: "+segundos));

    //Dueracion, Origen, Destino
    if(duracionS_inicio==-1 || duracionS_largo==-1 || origen_inicio==-1 || origen_largo==-1 || destino_inicio==-1 || destino_largo==-1 )
    {
        qDebug("Error de procesamiento de llamada: Origen, Destino y Duración son esenciales en cualquier formato");
        return false;
    }
    else
    {
        duracionS=flujollamadaS.mid(duracionS_inicio, duracionS_largo);
        origen=flujollamadaS.mid(origen_inicio, origen_largo).trimmed();
        destino=flujollamadaS.mid(destino_inicio, destino_largo).trimmed();
    }

    //Código cuenta
    if(codigocuenta_inicio==-1 || codigocuenta_largo==-1)
        codigocuenta="";
    else
        codigocuenta=flujollamadaS.mid(codigocuenta_inicio, codigocuenta_largo).trimmed();

    //Longitud de llamada interna
    if(longitud_lla_interna==-1)
    {
        qDebug("Error de procesamiento de llamada: Se necesita especificar el largo del un número interno (extensión)");
        return false;
    }

    //Tipo de llamada
    if(destino.length()==longitud_lla_interna)
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

QVector<QString*> Desktop::listarPBXs(){
    bool isConectado = myconection->conectar(host, database, username, password);
    QVector<QString*> vector = myconection->consulta("SELECT nombre FROM pbx;");
    myconection->desconectar();
    return vector;
}