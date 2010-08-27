/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 5 de Junho de 2010, 18:03
 */

#include <QString>
#include <QtGui/QApplication>
#include <QTextCodec>
#include "RS232_Conection.h"
#include "GUIMiniPBX.h"

using namespace std;

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    GUIMiniPBX* aplicacion = new GUIMiniPBX();
    aplicacion->show();

    return app.exec();;

    return 0;
}
