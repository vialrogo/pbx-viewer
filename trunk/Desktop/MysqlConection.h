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
        bool conectar(QString hostname, QString Database, QString username, QString passwd);
        void desconectar();
        QVector<QString*> consulta(QString consulta, int columnas);
        bool insercion(QString insertion);

    private:
        QSqlDatabase db;
        QSqlQuery* query;
};

#endif	/* _MYSQLCONECTION_H */
