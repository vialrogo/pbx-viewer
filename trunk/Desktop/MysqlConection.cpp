/* 
 * File:   MysqlConection.cpp
 * Author: vialrogo
 * 
 * Created on 12 de mayo de 2010, 04:42 PM
 */

#include <qt4/QtNetwork/qnetworkreply.h>
#include <qt4/QtCore/qdebug.h>

#include "MysqlConection.h"

MysqlConection::MysqlConection()
{
}

MysqlConection::~MysqlConection()
{
    delete query;
}

bool MysqlConection::hayDriver()
{
	return QSqlDatabase::isDriverAvailable("QMYSQL");
}

bool MysqlConection::conectar(QString hostname, QString Database, QString username, QString passwd)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostname);
    db.setDatabaseName(Database);
    db.setUserName(username);
    db.setPassword(passwd);
    bool ok = db.open();
    query = new QSqlQuery(db);

    return ok;
}

void MysqlConection::desconectar()
{
    QString nombreConeccion = db.connectionName();
    db.close();
    db = QSqlDatabase();
    QSqlDatabase::removeDatabase(nombreConeccion);
}

QVector<QString*> MysqlConection::consulta(QString consulta,bool debug)
{
//    qDebug(qPrintable(consulta));

    if(debug)
        qDebug() << "SQL > " << consulta;
    bool ok = query->exec(consulta);
    int size = query->size();
    int columnas = query->record().count();

    QVector<QString*> vector(0);

    if(ok)
    {
        for (int i = 0; i < size; i++)
        {
            QString* arreglo = new QString[columnas];
            query->next();
            for (int j = 0; j < columnas; j++)
            {
                arreglo[j] = query->value(j).toString();
            }
            vector.append(arreglo);
        }
    }
    else
        qDebug("Error, no pudo realizar la consulta");

    
    return vector;
}
bool MysqlConection::insercion(QString insertion,bool debug)
{
    insertion.replace(QString("''"), QString("NULL"));
//    qDebug(qPrintable(insertion));
   if(debug)
        qDebug() << "SQL=>" << insertion;
    return query->exec(insertion);
}

QString MysqlConection::ultimoId(){
    QVariant v = query->lastInsertId();
    if(!v.isNull())
        return v.toString();
    return 0;
}

bool MysqlConection::eliminacion(QString deletion,bool debug)
{
    if(debug)
        qDebug() << "SQL=>" << deletion;
    return query->exec(deletion);
}

bool MysqlConection::actualizacion(QString insertion,bool debug)
{
    insertion.replace(QString("''"), QString("NULL"));
//    qDebug(qPrintable(insertion));
    if(debug)
        qDebug() << "SQL=>" << insertion;
    return query->exec(insertion);
}