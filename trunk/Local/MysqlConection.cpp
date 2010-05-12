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

	MysqlConection: Brinda las herramientas para el manejo de la base de datos mysql mediante qt

=================================================================================================
*/

#include "MysqlConection.h"

MysqlConection::MysqlConection( )
{
	
}

MysqlConection::~MysqlConection( )
{

}

bool MysqlConection::hayDriver( )
{
	return QSqlDatabase::isDriverAvailable("QMYSQL");
}
