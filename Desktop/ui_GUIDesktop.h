/********************************************************************************
** Form generated from reading UI file 'GUIDesktop.ui'
**
** Created: Tue Jun 8 19:06:43 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDESKTOP_H
#define UI_GUIDESKTOP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIDesktop
{
public:
    QAction *menuSalir;
    QAction *menuNuevoPerfil;
    QAction *menuModificarPerfil;
    QAction *menuEliminarPerfil;
    QAction *menuAcercade;
    QAction *menuAcercadeQt;
    QAction *actionEspanol;
    QAction *actionIngles;
    QAction *actionPortugues;
    QAction *actionAyuda;
    QAction *menuIniciar;
    QAction *menuParar;
    QWidget *centralwidget;
    QLabel *label_Socket;
    QLabel *label_PBX;
    QFrame *linea_arriba;
    QLabel *label_puerto;
    QLineEdit *lineEdit_puerto;
    QLabel *label_tipoPBX;
    QComboBox *comboB_pbxs;
    QPushButton *boton_iniciar;
    QPushButton *boton_parar;
    QPushButton *boton_salir;
    QFrame *linea_abajo;
    QPushButton *boton_nuevo;
    QPushButton *boton_editar;
    QPushButton *boton_eliminar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPlainTextEdit *texarea;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdici_n;
    QMenu *menuIdioma_2;
    QMenu *menuPBX;
    QMenu *menuAyuda;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUIDesktop)
    {
        if (GUIDesktop->objectName().isEmpty())
            GUIDesktop->setObjectName(QString::fromUtf8("GUIDesktop"));
        GUIDesktop->resize(370, 522);
        QFont font;
        font.setPointSize(11);
        GUIDesktop->setFont(font);
        GUIDesktop->setAcceptDrops(false);
        GUIDesktop->setWindowTitle(QString::fromUtf8("PBX-Viewer: Desktop"));
        menuSalir = new QAction(GUIDesktop);
        menuSalir->setObjectName(QString::fromUtf8("menuSalir"));
        menuNuevoPerfil = new QAction(GUIDesktop);
        menuNuevoPerfil->setObjectName(QString::fromUtf8("menuNuevoPerfil"));
        menuModificarPerfil = new QAction(GUIDesktop);
        menuModificarPerfil->setObjectName(QString::fromUtf8("menuModificarPerfil"));
        menuEliminarPerfil = new QAction(GUIDesktop);
        menuEliminarPerfil->setObjectName(QString::fromUtf8("menuEliminarPerfil"));
        menuEliminarPerfil->setCheckable(false);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        menuEliminarPerfil->setFont(font1);
        menuAcercade = new QAction(GUIDesktop);
        menuAcercade->setObjectName(QString::fromUtf8("menuAcercade"));
        menuAcercadeQt = new QAction(GUIDesktop);
        menuAcercadeQt->setObjectName(QString::fromUtf8("menuAcercadeQt"));
        actionEspanol = new QAction(GUIDesktop);
        actionEspanol->setObjectName(QString::fromUtf8("actionEspanol"));
        actionEspanol->setCheckable(true);
        actionEspanol->setChecked(true);
        actionIngles = new QAction(GUIDesktop);
        actionIngles->setObjectName(QString::fromUtf8("actionIngles"));
        actionIngles->setCheckable(true);
        actionPortugues = new QAction(GUIDesktop);
        actionPortugues->setObjectName(QString::fromUtf8("actionPortugues"));
        actionPortugues->setCheckable(true);
        actionAyuda = new QAction(GUIDesktop);
        actionAyuda->setObjectName(QString::fromUtf8("actionAyuda"));
        menuIniciar = new QAction(GUIDesktop);
        menuIniciar->setObjectName(QString::fromUtf8("menuIniciar"));
        menuParar = new QAction(GUIDesktop);
        menuParar->setObjectName(QString::fromUtf8("menuParar"));
        menuParar->setEnabled(false);
        centralwidget = new QWidget(GUIDesktop);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_Socket = new QLabel(centralwidget);
        label_Socket->setObjectName(QString::fromUtf8("label_Socket"));
        label_Socket->setGeometry(QRect(140, 20, 101, 21));
        QFont font2;
        font2.setPointSize(15);
        label_Socket->setFont(font2);
        label_PBX = new QLabel(centralwidget);
        label_PBX->setObjectName(QString::fromUtf8("label_PBX"));
        label_PBX->setGeometry(QRect(160, 120, 51, 31));
        label_PBX->setFont(font2);
        linea_arriba = new QFrame(centralwidget);
        linea_arriba->setObjectName(QString::fromUtf8("linea_arriba"));
        linea_arriba->setGeometry(QRect(10, 100, 351, 20));
        linea_arriba->setFrameShape(QFrame::HLine);
        linea_arriba->setFrameShadow(QFrame::Sunken);
        label_puerto = new QLabel(centralwidget);
        label_puerto->setObjectName(QString::fromUtf8("label_puerto"));
        label_puerto->setGeometry(QRect(90, 70, 77, 19));
        lineEdit_puerto = new QLineEdit(centralwidget);
        lineEdit_puerto->setObjectName(QString::fromUtf8("lineEdit_puerto"));
        lineEdit_puerto->setGeometry(QRect(190, 60, 113, 29));
        label_tipoPBX = new QLabel(centralwidget);
        label_tipoPBX->setObjectName(QString::fromUtf8("label_tipoPBX"));
        label_tipoPBX->setGeometry(QRect(80, 170, 91, 21));
        comboB_pbxs = new QComboBox(centralwidget);
        comboB_pbxs->setObjectName(QString::fromUtf8("comboB_pbxs"));
        comboB_pbxs->setGeometry(QRect(210, 160, 92, 29));
        boton_iniciar = new QPushButton(centralwidget);
        boton_iniciar->setObjectName(QString::fromUtf8("boton_iniciar"));
        boton_iniciar->setGeometry(QRect(13, 420, 113, 31));
        QFont font3;
        font3.setPointSize(13);
        boton_iniciar->setFont(font3);
        boton_parar = new QPushButton(centralwidget);
        boton_parar->setObjectName(QString::fromUtf8("boton_parar"));
        boton_parar->setEnabled(false);
        boton_parar->setGeometry(QRect(133, 420, 113, 31));
        boton_parar->setFont(font3);
        boton_salir = new QPushButton(centralwidget);
        boton_salir->setObjectName(QString::fromUtf8("boton_salir"));
        boton_salir->setGeometry(QRect(253, 420, 113, 31));
        boton_salir->setFont(font3);
        linea_abajo = new QFrame(centralwidget);
        linea_abajo->setObjectName(QString::fromUtf8("linea_abajo"));
        linea_abajo->setGeometry(QRect(20, 400, 341, 20));
        linea_abajo->setFrameShape(QFrame::HLine);
        linea_abajo->setFrameShadow(QFrame::Sunken);
        boton_nuevo = new QPushButton(centralwidget);
        boton_nuevo->setObjectName(QString::fromUtf8("boton_nuevo"));
        boton_nuevo->setGeometry(QRect(80, 210, 61, 29));
        QFont font4;
        font4.setPointSize(10);
        boton_nuevo->setFont(font4);
        boton_editar = new QPushButton(centralwidget);
        boton_editar->setObjectName(QString::fromUtf8("boton_editar"));
        boton_editar->setGeometry(QRect(150, 210, 61, 29));
        boton_editar->setFont(font4);
        boton_eliminar = new QPushButton(centralwidget);
        boton_eliminar->setObjectName(QString::fromUtf8("boton_eliminar"));
        boton_eliminar->setGeometry(QRect(220, 210, 81, 29));
        boton_eliminar->setFont(font4);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 250, 351, 141));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 349, 139));
        texarea = new QPlainTextEdit(scrollAreaWidgetContents);
        texarea->setObjectName(QString::fromUtf8("texarea"));
        texarea->setEnabled(false);
        texarea->setGeometry(QRect(0, 0, 351, 141));
        scrollArea->setWidget(scrollAreaWidgetContents);
        GUIDesktop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUIDesktop);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 370, 27));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEdici_n = new QMenu(menubar);
        menuEdici_n->setObjectName(QString::fromUtf8("menuEdici_n"));
        menuIdioma_2 = new QMenu(menuEdici_n);
        menuIdioma_2->setObjectName(QString::fromUtf8("menuIdioma_2"));
        menuPBX = new QMenu(menubar);
        menuPBX->setObjectName(QString::fromUtf8("menuPBX"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        GUIDesktop->setMenuBar(menubar);
        statusbar = new QStatusBar(GUIDesktop);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GUIDesktop->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdici_n->menuAction());
        menubar->addAction(menuPBX->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(menuIniciar);
        menuArchivo->addAction(menuParar);
        menuArchivo->addAction(menuSalir);
        menuEdici_n->addAction(menuIdioma_2->menuAction());
        menuIdioma_2->addAction(actionEspanol);
        menuIdioma_2->addAction(actionIngles);
        menuIdioma_2->addAction(actionPortugues);
        menuPBX->addAction(menuNuevoPerfil);
        menuPBX->addAction(menuModificarPerfil);
        menuPBX->addAction(menuEliminarPerfil);
        menuAyuda->addAction(actionAyuda);
        menuAyuda->addAction(menuAcercade);
        menuAyuda->addAction(menuAcercadeQt);

        retranslateUi(GUIDesktop);
        QObject::connect(boton_salir, SIGNAL(clicked()), GUIDesktop, SLOT(close()));
        QObject::connect(menuSalir, SIGNAL(activated()), GUIDesktop, SLOT(close()));

        QMetaObject::connectSlotsByName(GUIDesktop);
    } // setupUi

    void retranslateUi(QMainWindow *GUIDesktop)
    {
        menuSalir->setText(QApplication::translate("GUIDesktop", "Salir", 0, QApplication::UnicodeUTF8));
        menuNuevoPerfil->setText(QApplication::translate("GUIDesktop", "Nuevo Perfil", 0, QApplication::UnicodeUTF8));
        menuModificarPerfil->setText(QApplication::translate("GUIDesktop", "Modificar Perfil", 0, QApplication::UnicodeUTF8));
        menuEliminarPerfil->setText(QApplication::translate("GUIDesktop", "Eliminar Perfil", 0, QApplication::UnicodeUTF8));
        menuAcercade->setText(QApplication::translate("GUIDesktop", "Acerca de", 0, QApplication::UnicodeUTF8));
        menuAcercadeQt->setText(QApplication::translate("GUIDesktop", "Acerca de Qt", 0, QApplication::UnicodeUTF8));
        actionEspanol->setText(QApplication::translate("GUIDesktop", "Espa\303\261ol", 0, QApplication::UnicodeUTF8));
        actionIngles->setText(QApplication::translate("GUIDesktop", "Ingl\303\251s", 0, QApplication::UnicodeUTF8));
        actionPortugues->setText(QApplication::translate("GUIDesktop", "Portugu\303\251s", 0, QApplication::UnicodeUTF8));
        actionAyuda->setText(QApplication::translate("GUIDesktop", "Ayuda", 0, QApplication::UnicodeUTF8));
        menuIniciar->setText(QApplication::translate("GUIDesktop", "Iniciar", 0, QApplication::UnicodeUTF8));
        menuParar->setText(QApplication::translate("GUIDesktop", "Parar", 0, QApplication::UnicodeUTF8));
        label_Socket->setText(QApplication::translate("GUIDesktop", "SOCKET", 0, QApplication::UnicodeUTF8));
        label_PBX->setText(QApplication::translate("GUIDesktop", "PBX", 0, QApplication::UnicodeUTF8));
        label_puerto->setText(QApplication::translate("GUIDesktop", "Puerto: ", 0, QApplication::UnicodeUTF8));
        label_tipoPBX->setText(QApplication::translate("GUIDesktop", "Tipo PBX: ", 0, QApplication::UnicodeUTF8));
        boton_iniciar->setText(QApplication::translate("GUIDesktop", "Iniciar", 0, QApplication::UnicodeUTF8));
        boton_parar->setText(QApplication::translate("GUIDesktop", "Parar", 0, QApplication::UnicodeUTF8));
        boton_salir->setText(QApplication::translate("GUIDesktop", "Salir", 0, QApplication::UnicodeUTF8));
        boton_nuevo->setText(QApplication::translate("GUIDesktop", "Nuevo", 0, QApplication::UnicodeUTF8));
        boton_editar->setText(QApplication::translate("GUIDesktop", "Editar", 0, QApplication::UnicodeUTF8));
        boton_eliminar->setText(QApplication::translate("GUIDesktop", "Eliminar", 0, QApplication::UnicodeUTF8));
        menuArchivo->setTitle(QApplication::translate("GUIDesktop", "Archivo", 0, QApplication::UnicodeUTF8));
        menuEdici_n->setTitle(QApplication::translate("GUIDesktop", "Edici\303\263n", 0, QApplication::UnicodeUTF8));
        menuIdioma_2->setTitle(QApplication::translate("GUIDesktop", "Idioma", 0, QApplication::UnicodeUTF8));
        menuPBX->setTitle(QApplication::translate("GUIDesktop", "PBX", 0, QApplication::UnicodeUTF8));
        menuAyuda->setTitle(QApplication::translate("GUIDesktop", "Ayuda", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(GUIDesktop);
    } // retranslateUi

};

namespace Ui {
    class GUIDesktop: public Ui_GUIDesktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDESKTOP_H
