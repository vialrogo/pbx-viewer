#ifndef MYSQLCONECTION_H
#define MYSQLCONECTION_H

#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QtSql>
#include <QLabel>

class MysqlConection
{
	private:
	
	
	public:
	MysqlConection( );
	virtual ~MysqlConection( );
	
	int consultarAfectoHuevito( );
	void serBuenaMadre( );
};
#endif