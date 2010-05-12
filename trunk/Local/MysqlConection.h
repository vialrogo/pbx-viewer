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

#ifndef MYSQLCONECTION_H
#define MYSQLCONECTION_H

#include <QtSql>

class MysqlConection
{
	//private:
	
	public:
		
		MysqlConection();
		virtual ~MysqlConection();
		
		bool hayDriver();
};
#endif