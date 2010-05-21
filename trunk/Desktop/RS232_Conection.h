/* */
#ifndef RS232_CONECTION_H
#define RS232_CONECTION_H

#include "qextserialport_mod/qextserialport.h"
#include <QString>
#include <iostream>

using namespace std;

class RS232_Conection
{
	private:
		QextSerialPort *port;
		QString *message;
		QString *received_msg;

	public:
		RS232_Conection();
		RS232_Conection(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt);
		virtual ~RS232_Conection();
		void closePort();
		void openPort();
		void transmitMsg();
		void receiveMsg();
		QString* getReceived_msg();
		void setMessage(QString *msg);
};
#endif