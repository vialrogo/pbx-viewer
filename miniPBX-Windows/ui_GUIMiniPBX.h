/********************************************************************************
** Form generated from reading UI file 'GUIMiniPBX.ui'
**
** Created: Wed Aug 25 09:20:24 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIMINIPBX_H
#define UI_GUIMINIPBX_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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

class Ui_GUIMiniPBX
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
    QAction *actionIniciar;
    QAction *actionDetener;
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
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonIniciar;
    QPushButton *pushButtonDetener;
    QPushButton *pushButtonSalir;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *labelArchivo;
    QCheckBox *checkBoxCiclico;
    QLineEdit *lineEditArchivo;
    QPushButton *pushButtonArchivo;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdici_n;
    QMenu *menuIdioma;
    QMenu *menuAyuda;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUIMiniPBX)
    {
        if (GUIMiniPBX->objectName().isEmpty())
            GUIMiniPBX->setObjectName(QString::fromUtf8("GUIMiniPBX"));
        GUIMiniPBX->setWindowModality(Qt::ApplicationModal);
        GUIMiniPBX->resize(300, 540);
        GUIMiniPBX->setMinimumSize(QSize(300, 540));
        GUIMiniPBX->setMaximumSize(QSize(300, 540));
        GUIMiniPBX->setFocusPolicy(Qt::TabFocus);
        GUIMiniPBX->setLocale(QLocale(QLocale::Spanish, QLocale::Colombia));
        actionAbrir = new QAction(GUIMiniPBX);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionAbrir->setCheckable(true);
        actionGuardar = new QAction(GUIMiniPBX);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionCerrar = new QAction(GUIMiniPBX);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        actionAyuda = new QAction(GUIMiniPBX);
        actionAyuda->setObjectName(QString::fromUtf8("actionAyuda"));
        actionAcerca_de = new QAction(GUIMiniPBX);
        actionAcerca_de->setObjectName(QString::fromUtf8("actionAcerca_de"));
        actionEspanol = new QAction(GUIMiniPBX);
        actionEspanol->setObjectName(QString::fromUtf8("actionEspanol"));
        actionEspanol->setCheckable(true);
        actionEspanol->setChecked(true);
        actionIngles = new QAction(GUIMiniPBX);
        actionIngles->setObjectName(QString::fromUtf8("actionIngles"));
        actionIngles->setCheckable(true);
        actionPortugues = new QAction(GUIMiniPBX);
        actionPortugues->setObjectName(QString::fromUtf8("actionPortugues"));
        actionPortugues->setCheckable(true);
        actionAcerca_de_Qt = new QAction(GUIMiniPBX);
        actionAcerca_de_Qt->setObjectName(QString::fromUtf8("actionAcerca_de_Qt"));
        actionIniciar = new QAction(GUIMiniPBX);
        actionIniciar->setObjectName(QString::fromUtf8("actionIniciar"));
        actionDetener = new QAction(GUIMiniPBX);
        actionDetener->setObjectName(QString::fromUtf8("actionDetener"));
        actionDetener->setEnabled(false);
        centralwidget = new QWidget(GUIMiniPBX);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 285, 266));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMargin(10);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMargin(10);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMargin(10);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMargin(10);

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
        label_2->setMargin(10);

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
        label_7->setMargin(10);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 330, 121, 21));
        QFont font;
        font.setPointSize(12);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 440, 281, 51));
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
        label->setGeometry(QRect(110, 10, 71, 20));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 290, 281, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(11, 430, 280, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        labelArchivo = new QLabel(centralwidget);
        labelArchivo->setObjectName(QString::fromUtf8("labelArchivo"));
        labelArchivo->setGeometry(QRect(20, 361, 57, 20));
        checkBoxCiclico = new QCheckBox(centralwidget);
        checkBoxCiclico->setObjectName(QString::fromUtf8("checkBoxCiclico"));
        checkBoxCiclico->setGeometry(QRect(120, 400, 71, 20));
        lineEditArchivo = new QLineEdit(centralwidget);
        lineEditArchivo->setObjectName(QString::fromUtf8("lineEditArchivo"));
        lineEditArchivo->setEnabled(true);
        lineEditArchivo->setGeometry(QRect(90, 360, 171, 25));
#ifndef QT_NO_STATUSTIP
        lineEditArchivo->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
        lineEditArchivo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButtonArchivo = new QPushButton(centralwidget);
        pushButtonArchivo->setObjectName(QString::fromUtf8("pushButtonArchivo"));
        pushButtonArchivo->setGeometry(QRect(260, 360, 25, 25));
        GUIMiniPBX->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUIMiniPBX);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEdici_n = new QMenu(menubar);
        menuEdici_n->setObjectName(QString::fromUtf8("menuEdici_n"));
        menuIdioma = new QMenu(menuEdici_n);
        menuIdioma->setObjectName(QString::fromUtf8("menuIdioma"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        GUIMiniPBX->setMenuBar(menubar);
        statusbar = new QStatusBar(GUIMiniPBX);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GUIMiniPBX->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdici_n->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionIniciar);
        menuArchivo->addAction(actionDetener);
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

        retranslateUi(GUIMiniPBX);

        QMetaObject::connectSlotsByName(GUIMiniPBX);
    } // setupUi

    void retranslateUi(QMainWindow *GUIMiniPBX)
    {
        GUIMiniPBX->setWindowTitle(QApplication::translate("GUIMiniPBX", "MiniPBX", 0, QApplication::UnicodeUTF8));
        actionAbrir->setText(QApplication::translate("GUIMiniPBX", "Abrir", 0, QApplication::UnicodeUTF8));
        actionGuardar->setText(QApplication::translate("GUIMiniPBX", "Guardar", 0, QApplication::UnicodeUTF8));
        actionCerrar->setText(QApplication::translate("GUIMiniPBX", "Salir", 0, QApplication::UnicodeUTF8));
        actionAyuda->setText(QApplication::translate("GUIMiniPBX", "Ayuda", 0, QApplication::UnicodeUTF8));
        actionAcerca_de->setText(QApplication::translate("GUIMiniPBX", "Acerca de", 0, QApplication::UnicodeUTF8));
        actionEspanol->setText(QApplication::translate("GUIMiniPBX", "Espa\303\261ol", 0, QApplication::UnicodeUTF8));
        actionIngles->setText(QApplication::translate("GUIMiniPBX", "Ingles", 0, QApplication::UnicodeUTF8));
        actionPortugues->setText(QApplication::translate("GUIMiniPBX", "Portugues", 0, QApplication::UnicodeUTF8));
        actionAcerca_de_Qt->setText(QApplication::translate("GUIMiniPBX", "Acerca de Qt", 0, QApplication::UnicodeUTF8));
        actionIniciar->setText(QApplication::translate("GUIMiniPBX", "Iniciar", 0, QApplication::UnicodeUTF8));
        actionDetener->setText(QApplication::translate("GUIMiniPBX", "Detener", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GUIMiniPBX", "Velocidad : ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GUIMiniPBX", "Tipo de Flujo : ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GUIMiniPBX", "Paridad : ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GUIMiniPBX", "Bits : ", 0, QApplication::UnicodeUTF8));
        comboTipo->setItemText(0, QApplication::translate("GUIMiniPBX", "Ninguno", 0, QApplication::UnicodeUTF8));

        comboParidad->clear();
        comboParidad->insertItems(0, QStringList()
         << QApplication::translate("GUIMiniPBX", "Ninguna", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUIMiniPBX", "Par", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUIMiniPBX", "Impar", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("GUIMiniPBX", "Puerto : ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GUIMiniPBX", "Bit de Parada : ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GUIMiniPBX", "ARCHIVO", 0, QApplication::UnicodeUTF8));
        pushButtonIniciar->setText(QApplication::translate("GUIMiniPBX", "Iniciar", 0, QApplication::UnicodeUTF8));
        pushButtonDetener->setText(QApplication::translate("GUIMiniPBX", "Detener", 0, QApplication::UnicodeUTF8));
        pushButtonSalir->setText(QApplication::translate("GUIMiniPBX", "Salir", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GUIMiniPBX", "RS232", 0, QApplication::UnicodeUTF8));
        labelArchivo->setText(QApplication::translate("GUIMiniPBX", "Archivo :", 0, QApplication::UnicodeUTF8));
        checkBoxCiclico->setText(QApplication::translate("GUIMiniPBX", "C\303\255clico", 0, QApplication::UnicodeUTF8));
        pushButtonArchivo->setText(QApplication::translate("GUIMiniPBX", "...", 0, QApplication::UnicodeUTF8));
        menuArchivo->setTitle(QApplication::translate("GUIMiniPBX", "Archivo", 0, QApplication::UnicodeUTF8));
        menuEdici_n->setTitle(QApplication::translate("GUIMiniPBX", "Edici\303\263n", 0, QApplication::UnicodeUTF8));
        menuIdioma->setTitle(QApplication::translate("GUIMiniPBX", "Idioma", 0, QApplication::UnicodeUTF8));
        menuAyuda->setTitle(QApplication::translate("GUIMiniPBX", "Ayuda", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GUIMiniPBX: public Ui_GUIMiniPBX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIMINIPBX_H
