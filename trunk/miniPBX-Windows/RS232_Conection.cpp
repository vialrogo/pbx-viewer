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
	char buff[10240];
  	int numBytes;

	numBytes = port->bytesAvailable();
	if(numBytes > 0)
	{
	    if(numBytes > 10240)
			numBytes = 10240;

	    int i = port->read(buff, 10240);
		buff[i] = '\0';
	    //QString msg = buff;

	   	received_msg = new QString(buff);                
		qDebug(qPrintable("Bytes disponibles: "+QString::number(numBytes)));
                qDebug(qPrintable("Bytes recibidos:  "+QString::number(i)));
	}
        else
            received_msg = new QString("");
}

bool RS232_Conection::closePort()
{
	port->close();
	if(port->isOpen()){
		cout<<"Error al cerrar el puerto"<<endl;
                return false;
        }
	else{
		cout<<"Puerto cerrado exitosamente"<<endl;
                return true;
        }
        return false;
}

bool RS232_Conection::openPort()
{
	port->open(QIODevice::ReadWrite);
	if(port->isOpen()){
		cout<<"Puerto abierto exitosamente"<<endl;
                return true;
        }
	else{
		cout<<"Error al abrir el puerto"<<endl;
                return false;
        }
        return false;
}

QString* RS232_Conection::getReceived_msg()
{
	return received_msg;
}

void RS232_Conection::setMessage(QString *msg)
{
	message = msg;
}