/********************************************************************************
** Form generated from reading UI file 'GUIAdaptador.ui'
**
** Created: Sun Jun 6 18:57:58 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIADAPTADOR_H
#define UI_GUIADAPTADOR_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIAdaptador
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionCerrar;
    QAction *actionAyuda;
    QAction *actionAcerca_de;
    QAction *actionEspanol;
    QAction *actionIngles;
    QAction *actionPortugues;
    QAction *actionAcerca_de_Qt;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboVelocidad;
    QComboBox *comboTipo;
    QComboBox *comboParidad;
    QComboBox *comboData;
    QComboBox *comboStop;
    QLabel *label_2;
    QComboBox *comboPuerto;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *lineEditPuerto;
    QLineEdit *lineEditServidor;
    QLabel *label_9;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonIniciar;
    QPushButton *pushButtonDetener;
    QPushButton *pushButtonSalir;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdici_n;
    QMenu *menuIdioma;
    QMenu *menuAyuda;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUIAdaptador)
    {
        if (GUIAdaptador->objectName().isEmpty())
            GUIAdaptador->setObjectName(QString::fromUtf8("GUIAdaptador"));
        GUIAdaptador->setWindowModality(Qt::ApplicationModal);
        GUIAdaptador->resize(300, 500);
        GUIAdaptador->setMinimumSize(QSize(300, 500));
        GUIAdaptador->setMaximumSize(QSize(300, 500));
        GUIAdaptador->setFocusPolicy(Qt::TabFocus);
        GUIAdaptador->setLocale(QLocale(QLocale::Spanish, QLocale::Colombia));
        actionAbrir = new QAction(GUIAdaptador);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionAbrir->setCheckable(true);
        actionGuardar = new QAction(GUIAdaptador);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionCerrar = new QAction(GUIAdaptador);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        actionAyuda = new QAction(GUIAdaptador);
        actionAyuda->setObjectName(QString::fromUtf8("actionAyuda"));
        actionAcerca_de = new QAction(GUIAdaptador);
        actionAcerca_de->setObjectName(QString::fromUtf8("actionAcerca_de"));
        actionEspanol = new QAction(GUIAdaptador);
        actionEspanol->setObjectName(QString::fromUtf8("actionEspanol"));
        actionIngles = new QAction(GUIAdaptador);
        actionIngles->setObjectName(QString::fromUtf8("actionIngles"));
        actionPortugues = new QAction(GUIAdaptador);
        actionPortugues->setObjectName(QString::fromUtf8("actionPortugues"));
        actionAcerca_de_Qt = new QAction(GUIAdaptador);
        actionAcerca_de_Qt->setObjectName(QString::fromUtf8("actionAcerca_de_Qt"));
        centralwidget = new QWidget(GUIAdaptador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 281, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        comboVelocidad = new QComboBox(gridLayoutWidget);
        comboVelocidad->insertItems(0, QStringList()
         << QString::fromUtf8("300")
         << QString::fromUtf8("600")
         << QString::fromUtf8("1200")
         << QString::fromUtf8("2400")
         << QString::fromUtf8("4800")
         << QString::fromUtf8("9600")
         << QString::fromUtf8("19200")
         << QString::fromUtf8("38400")
         << QString::fromUtf8("57600")
         << QString::fromUtf8("115200")
        );
        comboVelocidad->setObjectName(QString::fromUtf8("comboVelocidad"));

        gridLayout->addWidget(comboVelocidad, 2, 1, 1, 1);

        comboTipo = new QComboBox(gridLayoutWidget);
        comboTipo->addItem(QString());
        comboTipo->addItem(QString::fromUtf8("RTS/CTS"));
        comboTipo->addItem(QString::fromUtf8("Xon/Xoff"));
        comboTipo->setObjectName(QString::fromUtf8("comboTipo"));

        gridLayout->addWidget(comboTipo, 3, 1, 1, 1);

        comboParidad = new QComboBox(gridLayoutWidget);
        comboParidad->setObjectName(QString::fromUtf8("comboParidad"));

        gridLayout->addWidget(comboParidad, 4, 1, 1, 1);

        comboData = new QComboBox(gridLayoutWidget);
        comboData->insertItems(0, QStringList()
         << QString::fromUtf8("5")
         << QString::fromUtf8("6")
         << QString::fromUtf8("7")
         << QString::fromUtf8("8")
        );
        comboData->setObjectName(QString::fromUtf8("comboData"));

        gridLayout->addWidget(comboData, 5, 1, 1, 1);

        comboStop = new QComboBox(gridLayoutWidget);
        comboStop->insertItems(0, QStringList()
         << QString::fromUtf8("1")
         << QString::fromUtf8("2")
        );
        comboStop->setObjectName(QString::fromUtf8("comboStop"));

        gridLayout->addWidget(comboStop, 6, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboPuerto = new QComboBox(gridLayoutWidget);
        comboPuerto->insertItems(0, QStringList()
         << QString::fromUtf8("/dev/ttyUSB0")
         << QString::fromUtf8("/dev/ttyS0")
         << QString::fromUtf8("/dev/ttyS1")
         << QString::fromUtf8("/dev/ttyS2")
         << QString::fromUtf8("/dev/ttyS3")
        );
        comboPuerto->setObjectName(QString::fromUtf8("comboPuerto"));

        gridLayout->addWidget(comboPuerto, 1, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(120, 280, 62, 17));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 300, 281, 93));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        lineEditPuerto = new QLineEdit(gridLayoutWidget_2);
        lineEditPuerto->setObjectName(QString::fromUtf8("lineEditPuerto"));
        lineEditPuerto->setMinimumSize(QSize(100, 0));
        lineEditPuerto->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(lineEditPuerto, 2, 1, 1, 1);

        lineEditServidor = new QLineEdit(gridLayoutWidget_2);
        lineEditServidor->setObjectName(QString::fromUtf8("lineEditServidor"));
        lineEditServidor->setMinimumSize(QSize(100, 0));
        lineEditServidor->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(lineEditServidor, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 400, 281, 51));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonIniciar = new QPushButton(gridLayoutWidget_3);
        pushButtonIniciar->setObjectName(QString::fromUtf8("pushButtonIniciar"));

        gridLayout_3->addWidget(pushButtonIniciar, 0, 0, 1, 1);

        pushButtonDetener = new QPushButton(gridLayoutWidget_3);
        pushButtonDetener->setObjectName(QString::fromUtf8("pushButtonDetener"));
        pushButtonDetener->setEnabled(false);

        gridLayout_3->addWidget(pushButtonDetener, 0, 1, 1, 1);

        pushButtonSalir = new QPushButton(gridLayoutWidget_3);
        pushButtonSalir->setObjectName(QString::fromUtf8("pushButtonSalir"));

        gridLayout_3->addWidget(pushButtonSalir, 0, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 41, 20));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 260, 281, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(11, 390, 280, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        GUIAdaptador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUIAdaptador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 23));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEdici_n = new QMenu(menubar);
        menuEdici_n->setObjectName(QString::fromUtf8("menuEdici_n"));
        menuIdioma = new QMenu(menuEdici_n);
        menuIdioma->setObjectName(QString::fromUtf8("menuIdioma"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        GUIAdaptador->setMenuBar(menubar);
        statusbar = new QStatusBar(GUIAdaptador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GUIAdaptador->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdici_n->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionCerrar);
        menuEdici_n->addSeparator();
        menuEdici_n->addAction(menuIdioma->menuAction());
        menuIdioma->addAction(actionEspanol);
        menuIdioma->addAction(actionIngles);
        menuIdioma->addAction(actionPortugues);
        menuAyuda->addAction(actionAyuda);
        menuAyuda->addSeparator();
        menuAyuda->addAction(actionAcerca_de);
        menuAyuda->addAction(actionAcerca_de_Qt);

        retranslateUi(GUIAdaptador);

        QMetaObject::connectSlotsByName(GUIAdaptador);
    } // setupUi

    void retranslateUi(QMainWindow *GUIAdaptador)
    {
        GUIAdaptador->setWindowTitle(QApplication::translate("GUIAdaptador", "Adaptador R232 - Socket", 0, QApplication::UnicodeUTF8));
        actionAbrir->setText(QApplication::translate("GUIAdaptador", "Abrir", 0, QApplication::UnicodeUTF8));
        actionGuardar->setText(QApplication::translate("GUIAdaptador", "Guardar", 0, QApplication::UnicodeUTF8));
        actionCerrar->setText(QApplication::translate("GUIAdaptador", "Salir", 0, QApplication::UnicodeUTF8));
        actionAyuda->setText(QApplication::translate("GUIAdaptador", "Ayuda", 0, QApplication::UnicodeUTF8));
        actionAcerca_de->setText(QApplication::translate("GUIAdaptador", "Acerca de", 0, QApplication::UnicodeUTF8));
        actionEspanol->setText(QApplication::translate("GUIAdaptador", "Espa\303\261ol", 0, QApplication::UnicodeUTF8));
        actionIngles->setText(QApplication::translate("GUIAdaptador", "Ingles", 0, QApplication::UnicodeUTF8));
        actionPortugues->setText(QApplication::translate("GUIAdaptador", "Portugues", 0, QApplication::UnicodeUTF8));
        actionAcerca_de_Qt->setText(QApplication::translate("GUIAdaptador", "Acerca de Qt", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GUIAdaptador", "Velocidad : ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GUIAdaptador", "Tipo de Flujo : ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GUIAdaptador", "Paridad : ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GUIAdaptador", "Bits : ", 0, QApplication::UnicodeUTF8));
        comboTipo->setItemText(0, QApplication::translate("GUIAdaptador", "Ninguno", 0, QApplication::UnicodeUTF8));

        comboParidad->clear();
        comboParidad->insertItems(0, QStringList()
         << QApplication::translate("GUIAdaptador", "Ninguna", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUIAdaptador", "Par", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUIAdaptador", "Impar", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("GUIAdaptador", "Puerto : ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GUIAdaptador", "Bit de Parada : ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GUIAdaptador", "SOCKET", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("GUIAdaptador", "Puerto", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("GUIAdaptador", "Servidor : ", 0, QApplication::UnicodeUTF8));
        pushButtonIniciar->setText(QApplication::translate("GUIAdaptador", "Iniciar", 0, QApplication::UnicodeUTF8));
        pushButtonDetener->setText(QApplication::translate("GUIAdaptador", "Detener", 0, QApplication::UnicodeUTF8));
        pushButtonSalir->setText(QApplication::translate("GUIAdaptador", "Salir", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GUIAdaptador", "RS232", 0, QApplication::UnicodeUTF8));
        menuArchivo->setTitle(QApplication::translate("GUIAdaptador", "Archivo", 0, QApplication::UnicodeUTF8));
        menuEdici_n->setTitle(QApplication::translate("GUIAdaptador", "Edici\303\263n", 0, QApplication::UnicodeUTF8));
        menuIdioma->setTitle(QApplication::translate("GUIAdaptador", "Idioma", 0, QApplication::UnicodeUTF8));
        menuAyuda->setTitle(QApplication::translate("GUIAdaptador", "Ayuda", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GUIAdaptador: public Ui_GUIAdaptador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIADAPTADOR_H
