/* 
 * File:   MysqlConection.h
 * Author: vialrogo
 *
 * Created on 12 de mayo de 2010, 04:42 PM
 */

#ifndef _MYSQLCONECTION_H
#define	_MYSQLCONECTION_H

#include <QtSql>
#include <QVector>

class MysqlConection
{
    public:
        MysqlConection();
        virtual ~MysqlConection();
        bool hayDriver();
        bool Conectar(QString hostname, QString Database, QString username, QString passwd);
        QVector<QString*> Consulta(QString consulta, int columnas);

    private:
        QSqlDatabase db;
        QSqlQuery query;
};

#endif	/* _MYSQLCONECTION_H */

