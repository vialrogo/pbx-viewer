/* 
 * File:   GUIAdaptador.h
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 20:34
 */

#ifndef _GUIADAPTADOR_H
#define	_GUIADAPTADOR_H
#include <QMessageBox>
#include "ui_GUIAdaptador.h"
#include "Adaptador.h"
class GUIAdaptador : public QMainWindow {
    Q_OBJECT
public:
    GUIAdaptador();
    virtual ~GUIAdaptador();
private:
    Ui::GUIAdaptador widget;
    Adaptador *objAdaptador;
    QTranslator *traductorEN;
    QTranslator *traductorPT;
    QIntValidator *validadorPuerto;
    QActionGroup* actionGroup;    
    void actualizarInterfaz();
    void activarInterfaz(bool activar);

private slots:
    void clickIniciar();
    void clickDetener();
    void idiomaIngles();
    void idiomaEspanol();
    void idiomaPortugues();
    void acercaDe();
    void ayuda();
};

#endif	/* _GUIADAPTADOR_H */
