/*
 * File:   main.cpp
 * Author: vialrogo
 *
 * Created on 28 de Maio de 2010, 13:11
 */

#include <QtGui/QApplication>
#include <QTranslator>
#include "GUIAdaptador.h"

using namespace std;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    QTranslator translator;
    translator.load("Adaptador_es");
    app.installTranslator(&translator);
    // create and show your widgets here

    GUIAdaptador* guiAdaptador = new GUIAdaptador();
    guiAdaptador->show();
    return app.exec();
}
