/**
=================================================================================================
===================================       PBX - VIEWER       ====================================
=================================================================================================

	Universidad del Valle
	Escuela de Ingenieria Electrica y Electronica
	Programa de Ingenieria Electronica
	
	Autor: Victor Alberto Romero
	email: varg04444@gmail.com
	
	Fecha de ultima modificacion: 12 Mayo de 2010
	
=================================================================================================

	P: Archivo que contiene un main en el cual se implementan pruebas

=================================================================================================
*/

#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QLabel>

#include "MysqlConection.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QLabel resultado("");
	
	MysqlConection* mysconect = new MysqlConection();
	
	if (mysconect->hayDriver()) 
	{
		resultado.setText("Driver Mysql disponible");
	}
	else
	{
		resultado.setText("Mala suerte, driver Mysql NO disponible");
	}
	
	resultado.show();
	return app.exec();
}