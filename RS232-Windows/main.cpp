/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 28 de Maio de 2010, 13:11
 */

#include <QtGui/QApplication>
#include "GUIAdaptador.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);    
    // create and show your widgets here
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    GUIAdaptador* guiAdaptador = new GUIAdaptador();
    guiAdaptador->show();
    return app.exec();
}
