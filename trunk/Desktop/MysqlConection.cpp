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
}

bool MysqlConection::hayDriver()
{
	return QSqlDatabase::isDriverAvailable("QMYSQL");
}

bool MysqlConection::Conectar(QString hostname, QString Database, QString username, QString passwd)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostname);
    db.setDatabaseName(Database);
    db.setUserName(username);
    db.setPassword(passwd);
    bool ok = db.open();

    return ok;
}

QVector<QString*> MysqlConection::Consulta(QString consulta, int columnas)
{
    bool ok = query.exec(consulta);
    int size = query.size();

    QVector<QString*> vector(0);
    //vector = new QVector<QString*>();
    QString* arreglo = new QString[columnas];

    if(ok)
    {
        for (int i = 0; i < size; i++)
        {
            query.next();
            for (int j = 0; j < columnas; j++)
            {
                arreglo[j] = query.value(j).toString();
            }
            vector.append(arreglo);
        }
    }
    else
        qDebug("Error, no pudo realizar la consulta");

    return vector;
}
