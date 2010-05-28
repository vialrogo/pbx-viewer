/* */
#include "RS232_Conection.h"

RS232_Conection::RS232_Conection()
{
	//Características por defect
	port = new QextSerialPort("/dev/ttyUSB0");
	port->setBaudRate(BAUD19200);
	port->setFlowControl(FLOW_OFF);
	port->setParity(PAR_NONE);
	port->setDataBits(DATA_8);
	port->setStopBits(STOP_1);

	message = new QString();
	received_msg = new QString();
}
RS232_Conection::RS232_Conection(const QString &name, BaudRateType brt, FlowType fc, ParityType pt, DataBitsType dbt, StopBitsType sbt)
{
	port = new QextSerialPort(name);
	port->setBaudRate(brt);
	port->setFlowControl(fc);
	port->setParity(pt);
	port->setDataBits(dbt);
	port->setStopBits(sbt);

	message = new QString();
	received_msg = new QString();
}

RS232_Conection::~RS232_Conection()
{
    delete port;
    port = NULL;
}

void RS232_Conection::transmitMsg()
{
	int i = port->write(message->toAscii(),message->length());
	cout<<"Bytes transmitidos: "<<i<<endl;
}

void RS232_Conection::receiveMsg()
{
	char buff[1024];
  	int numBytes;

	numBytes = port->bytesAvailable();
	if(numBytes > 0)
	{
	    if(numBytes > 1024)
			numBytes = 1024;

	    int i = port->read(buff, numBytes);
		buff[i] = '\0';
	    QString msg = buff;

	   	received_msg->append(msg);
		cout<<"Bytes disponibles: "<<numBytes<<endl;
		cout<<"Bytes recibidos: "<<i<<endl;
	}
}

void RS232_Conection::closePort()
{
	port->close();
	if(port->isOpen())
		cout<<"Error al cerrar el puerto"<<endl;
	else
		cout<<"Puerto cerrado exitosamente"<<endl;
}

void RS232_Conection::openPort()
{
	port->open(QIODevice::ReadWrite);
	if(port->isOpen())
		cout<<"Puerto abierto exitosamente"<<endl;
	else
		cout<<"Error al abrir el puerto"<<endl;
}

QString* RS232_Conection::getReceived_msg()
{
	return received_msg;
}

void RS232_Conection::setMessage(QString *msg)
{
	message = msg;
}