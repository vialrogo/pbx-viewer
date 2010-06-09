/* 
 * File:   GUIDesktop.h
 * Author: vialrogo
 *
 * Created on 6 de Junho de 2010, 17:10
 */

#ifndef _GUIDESKTOP_H
#define	_GUIDESKTOP_H

#include "ui_GUIDesktop.h"
#include <QtNetwork>
#include <QMessageBox>
#include "Desktop.h"
class QTcpServer;
class QTcpSocket;

class GUIDesktop : public QMainWindow {
    Q_OBJECT
public:
    GUIDesktop();
    virtual ~GUIDesktop();
private:
    Ui::GUIDesktop widget;
    QTcpServer *tcpServer;
    QTcpSocket *tcpClient;
    QTranslator *traductorEN;
    QTranslator *traductorPT;
    QIntValidator *validadorPuerto;
    Desktop* objDesktop;
    QActionGroup* actionGroup;
    void actualizarInterfaz();
    void activarInterfaz(bool activar);
    void cargarListaPBX();

private slots:
    void clickIniciar();
    void clickDetener();
    void idiomaIngles();
    void idiomaEspanol();
    void idiomaPortugues();
    void acercaDe();
    void ayuda();
    void crearConexion();
    void escucharClienteTcp();
};

#endif	/* _GUIDESKTOP_H */
