/* 
 * File:   GUIAdaptador.h
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 20:34
 */

#ifndef _GUIADAPTADOR_H
#define	_GUIADAPTADOR_H

#include "ui_GUIAdaptador.h"
#include "Adaptador.h"
#include <iostream>
class GUIAdaptador : public QMainWindow {
    Q_OBJECT
public:
    GUIAdaptador();
    virtual ~GUIAdaptador();
private:
    Ui::GUIAdaptador widget;
    Adaptador *objAdaptador;
    void actualizarInterfaz();
    QTranslator *traductorEN;
    QTranslator *traductorPT;
private slots:
    void clickIniciar();
    void clickDetener();
    void idiomaIngles();
    void idiomaEspanol();
    void idiomaPortugues();
};

#endif	/* _GUIADAPTADOR_H */
