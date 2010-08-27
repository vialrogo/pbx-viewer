/* 
 * File:   GUIMiniPBX.h
 * Author: andritom
 *
 * Created on 1 de Junho de 2010, 20:34
 */

#ifndef _GUIMINIPBX_H
#define	_GUIMINIPBX_H
#include <QMessageBox>
#include <QTranslator>
#include <QDebug>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include "ui_GUIMiniPBX.h"
#include "MiniPBX.h"
class GUIMiniPBX : public QMainWindow {
    Q_OBJECT
public:
    GUIMiniPBX();
    virtual ~GUIMiniPBX();
private:
    QString rutaArchivo;
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
    void clickBuscarArchivo();
};

#endif	/* _GUIMINIPBX_H */
