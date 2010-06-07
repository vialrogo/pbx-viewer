/* 
 * File:   MysqlConection.cpp
 * Author: vialrogo
 * 
 * Created on 12 de mayo de 2010, 04:42 PM
 */

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

QVector<QString*> MysqlConection::consulta(QString consulta)
{
    bool ok = query->exec(consulta);
    int size = query->size();
    int columnas = query->record().count();

    QVector<QString*> vector(0);
    QString* arreglo = new QString[columnas];

    if(ok)
    {
        for (int i = 0; i < size; i++)
        {
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
bool MysqlConection::insercion(QString insertion)
{
    insertion.replace(QString("''"), QString("NULL"));
    return query->exec(insertion);
}
