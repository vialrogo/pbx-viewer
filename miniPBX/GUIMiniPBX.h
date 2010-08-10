/* 
 * File:   GUIMiniPBX.h
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 20:34
 */

#ifndef _GUIMINIPBX_H
#define	_GUIMINIPBX_H
#include <QMessageBox>
#include "ui_GUIMiniPBX.h"
#include "MiniPBX.h"
class GUIMiniPBX : public QMainWindow {
    Q_OBJECT
public:
    GUIMiniPBX();
    virtual ~GUIMiniPBX();
private:
    Ui::GUIMiniPBX widget;
    MiniPBX *objMiniPBX;
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

#endif	/* _GUIMINIPBX_H */
