/********************************************************************************
** Form generated from reading UI file 'CRUD_PBX.ui'
**
** Created: Tue Jun 15 09:56:54 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUD_PBX_H
#define UI_CRUD_PBX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRUD_PBX
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEditAnoI;
    QLineEdit *lineEditAnoL;
    QLineEdit *lineEditMesL;
    QLineEdit *lineEditMesI;
    QLineEdit *lineEditDiaL;
    QLineEdit *lineEditHoraI;
    QLineEdit *lineEditHoraL;
    QLineEdit *lineEditMinutoI;
    QLineEdit *lineEditMinutoL;
    QLineEdit *lineEditSegundoL;
    QLineEdit *lineEditSegundoI;
    QLineEdit *lineEditDiaI;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_5;
    QLabel *label_17;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_18;
    QLabel *label_15;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QLineEdit *lineEditNombrePBX;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditDuracionI;
    QLineEdit *lineEditDuracionL;
    QLineEdit *lineEditOrigenI;
    QLineEdit *lineEditOrigenL;
    QLineEdit *lineEditDestinoL;
    QLineEdit *lineEditDestinoI;
    QLineEdit *lineEditCuentaI;
    QLineEdit *lineEditCuentaL;
    QLabel *label_29;
    QLabel *label_26;
    QLabel *label_23;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_34;
    QLabel *label_28;
    QLabel *label_24;
    QLabel *label_30;
    QLabel *label_27;
    QLabel *label_25;
    QLabel *label_22;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonAceptar;
    QPushButton *pushButtonCancelar;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_33;
    QLineEdit *lineEditInternoL;
    QLineEdit *lineEditTramaL;
    QLabel *label_32;

    void setupUi(QDialog *CRUD_PBX)
    {
        if (CRUD_PBX->objectName().isEmpty())
            CRUD_PBX->setObjectName(QString::fromUtf8("CRUD_PBX"));
        CRUD_PBX->resize(618, 421);
        groupBox = new QGroupBox(CRUD_PBX);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 251, 381));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 30, 241, 332));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        lineEditAnoI = new QLineEdit(gridLayoutWidget);
        lineEditAnoI->setObjectName(QString::fromUtf8("lineEditAnoI"));
        lineEditAnoI->setMinimumSize(QSize(10, 0));
        lineEditAnoI->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditAnoI, 3, 1, 1, 1);

        lineEditAnoL = new QLineEdit(gridLayoutWidget);
        lineEditAnoL->setObjectName(QString::fromUtf8("lineEditAnoL"));
        lineEditAnoL->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditAnoL, 3, 3, 1, 1);

        lineEditMesL = new QLineEdit(gridLayoutWidget);
        lineEditMesL->setObjectName(QString::fromUtf8("lineEditMesL"));
        lineEditMesL->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditMesL, 5, 3, 1, 1);

        lineEditMesI = new QLineEdit(gridLayoutWidget);
        lineEditMesI->setObjectName(QString::fromUtf8("lineEditMesI"));
        lineEditMesI->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditMesI, 5, 1, 1, 1);

        lineEditDiaL = new QLineEdit(gridLayoutWidget);
        lineEditDiaL->setObjectName(QString::fromUtf8("lineEditDiaL"));
        lineEditDiaL->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditDiaL, 7, 3, 1, 1);

        lineEditHoraI = new QLineEdit(gridLayoutWidget);
        lineEditHoraI->setObjectName(QString::fromUtf8("lineEditHoraI"));
        lineEditHoraI->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditHoraI, 9, 1, 1, 1);

        lineEditHoraL = new QLineEdit(gridLayoutWidget);
        lineEditHoraL->setObjectName(QString::fromUtf8("lineEditHoraL"));
        lineEditHoraL->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditHoraL, 9, 3, 1, 1);

        lineEditMinutoI = new QLineEdit(gridLayoutWidget);
        lineEditMinutoI->setObjectName(QString::fromUtf8("lineEditMinutoI"));
        lineEditMinutoI->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditMinutoI, 11, 1, 1, 1);

        lineEditMinutoL = new QLineEdit(gridLayoutWidget);
        lineEditMinutoL->setObjectName(QString::fromUtf8("lineEditMinutoL"));
        lineEditMinutoL->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditMinutoL, 11, 3, 1, 1);

        lineEditSegundoL = new QLineEdit(gridLayoutWidget);
        lineEditSegundoL->setObjectName(QString::fromUtf8("lineEditSegundoL"));
        lineEditSegundoL->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditSegundoL, 13, 3, 1, 1);

        lineEditSegundoI = new QLineEdit(gridLayoutWidget);
        lineEditSegundoI->setObjectName(QString::fromUtf8("lineEditSegundoI"));
        lineEditSegundoI->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditSegundoI, 13, 1, 1, 1);

        lineEditDiaI = new QLineEdit(gridLayoutWidget);
        lineEditDiaI->setObjectName(QString::fromUtf8("lineEditDiaI"));
        lineEditDiaI->setMaximumSize(QSize(48, 16777215));

        gridLayout->addWidget(lineEditDiaI, 7, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShadow(QFrame::Plain);
        label->setWordWrap(false);
        label->setIndent(0);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 10, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 12, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_17, 7, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 9, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 11, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 13, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 2, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 5, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 7, 2, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 9, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 11, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 13, 2, 1, 1);

        horizontalLayoutWidget = new QWidget(CRUD_PBX);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 0, 591, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout->addWidget(label_19);

        lineEditNombrePBX = new QLineEdit(horizontalLayoutWidget);
        lineEditNombrePBX->setObjectName(QString::fromUtf8("lineEditNombrePBX"));

        horizontalLayout->addWidget(lineEditNombrePBX);

        groupBox_2 = new QGroupBox(CRUD_PBX);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(270, 50, 361, 251));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 30, 341, 221));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditDuracionI = new QLineEdit(gridLayoutWidget_2);
        lineEditDuracionI->setObjectName(QString::fromUtf8("lineEditDuracionI"));
        lineEditDuracionI->setMaximumSize(QSize(48, 16777215));

        gridLayout_2->addWidget(lineEditDuracionI, 1, 1, 1, 1);

        lineEditDuracionL = new QLineEdit(gridLayoutWidget_2);
        lineEditDuracionL->setObjectName(QString::fromUtf8("lineEditDuracionL"));
        lineEditDuracionL->setMaximumSize(QSize(48, 16777215));

        gridLayout_2->addWidget(lineEditDuracionL, 1, 3, 1, 1);

        lineEditOrigenI = new QLineEdit(gridLayoutWidget_2);
        lineEditOrigenI->setObjectName(QString::fromUtf8("lineEditOrigenI"));
        lineEditOrigenI->setMaximumSize(QSize(48, 16777215));

        gridLayout_2->addWidget(lineEditOrigenI, 3, 1, 1, 1);

        lineEditOrigenL = new QLineEdit(gridLayoutWidget_2);
        lineEditOrigenL->setObjectName(QString::fromUtf8("lineEditOrigenL"));
        lineEditOrigenL->setMaximumSize(QSize(48, 16777215));

        gridLayout_2->addWidget(lineEditOrigenL, 3, 3, 1, 1);

        lineEditDestinoL = new QLineEdit(gridLayoutWidget_2);
        lineEditDestinoL->setObjectName(QString::fromUtf8("lineEditDestinoL"));
        lineEditDestinoL->setMaximumSize(QSize(48, 16777215));

        gridLayout_2->addWidget(lineEditDestinoL, 5, 3, 1, 1);

        lineEditDestinoI = new QLineEdit(gridLayoutWidget_2);
        lineEditDestinoI->setObjectName(QString::fromUtf8("lineEditDestinoI"));
        lineEditDestinoI->setMaximumSize(QSize(48, 16777215));

        gridLayout_2->addWidget(lineEditDestinoI, 5, 1, 1, 1);

        lineEditCuentaI = new QLineEdit(gridLayoutWidget_2);
        lineEditCuentaI->setObjectName(QString::fromUtf8("lineEditCuentaI"));
        lineEditCuentaI->setMaximumSize(QSize(48, 16777215));

        gridLayout_2->addWidget(lineEditCuentaI, 7, 1, 1, 1);

        lineEditCuentaL = new QLineEdit(gridLayoutWidget_2);
        lineEditCuentaL->setObjectName(QString::fromUtf8("lineEditCuentaL"));
        lineEditCuentaL->setMaximumSize(QSize(48, 16777215));

        gridLayout_2->addWidget(lineEditCuentaL, 7, 3, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_2->addWidget(label_29, 6, 0, 1, 1);

        label_26 = new QLabel(gridLayoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 4, 0, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 2, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 0, 0, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_21, 1, 0, 1, 1);

        label_34 = new QLabel(gridLayoutWidget_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_34, 3, 0, 1, 1);

        label_28 = new QLabel(gridLayoutWidget_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_28, 5, 0, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_24, 7, 0, 1, 1);

        label_30 = new QLabel(gridLayoutWidget_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_30, 1, 2, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_27, 3, 2, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_25, 5, 2, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_22, 7, 2, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(CRUD_PBX);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(360, 380, 251, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonAceptar = new QPushButton(horizontalLayoutWidget_2);
        pushButtonAceptar->setObjectName(QString::fromUtf8("pushButtonAceptar"));

        horizontalLayout_2->addWidget(pushButtonAceptar);

        pushButtonCancelar = new QPushButton(horizontalLayoutWidget_2);
        pushButtonCancelar->setObjectName(QString::fromUtf8("pushButtonCancelar"));

        horizontalLayout_2->addWidget(pushButtonCancelar);

        gridLayoutWidget_3 = new QWidget(CRUD_PBX);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(340, 310, 271, 62));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(gridLayoutWidget_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_3->addWidget(label_33, 1, 0, 1, 1);

        lineEditInternoL = new QLineEdit(gridLayoutWidget_3);
        lineEditInternoL->setObjectName(QString::fromUtf8("lineEditInternoL"));
        lineEditInternoL->setMaximumSize(QSize(64, 16777215));

        gridLayout_3->addWidget(lineEditInternoL, 0, 1, 1, 1);

        lineEditTramaL = new QLineEdit(gridLayoutWidget_3);
        lineEditTramaL->setObjectName(QString::fromUtf8("lineEditTramaL"));
        lineEditTramaL->setMaximumSize(QSize(64, 16777215));

        gridLayout_3->addWidget(lineEditTramaL, 1, 1, 1, 1);

        label_32 = new QLabel(gridLayoutWidget_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_3->addWidget(label_32, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEditNombrePBX, lineEditAnoI);
        QWidget::setTabOrder(lineEditAnoI, lineEditAnoL);
        QWidget::setTabOrder(lineEditAnoL, lineEditMesI);
        QWidget::setTabOrder(lineEditMesI, lineEditMesL);
        QWidget::setTabOrder(lineEditMesL, lineEditDiaI);
        QWidget::setTabOrder(lineEditDiaI, lineEditDiaL);
        QWidget::setTabOrder(lineEditDiaL, lineEditHoraI);
        QWidget::setTabOrder(lineEditHoraI, lineEditHoraL);
        QWidget::setTabOrder(lineEditHoraL, lineEditMinutoI);
        QWidget::setTabOrder(lineEditMinutoI, lineEditMinutoL);
        QWidget::setTabOrder(lineEditMinutoL, lineEditSegundoI);
        QWidget::setTabOrder(lineEditSegundoI, lineEditSegundoL);
        QWidget::setTabOrder(lineEditSegundoL, lineEditDuracionI);
        QWidget::setTabOrder(lineEditDuracionI, lineEditDuracionL);
        QWidget::setTabOrder(lineEditDuracionL, lineEditOrigenI);
        QWidget::setTabOrder(lineEditOrigenI, lineEditOrigenL);
        QWidget::setTabOrder(lineEditOrigenL, lineEditDestinoI);
        QWidget::setTabOrder(lineEditDestinoI, lineEditDestinoL);
        QWidget::setTabOrder(lineEditDestinoL, lineEditCuentaI);
        QWidget::setTabOrder(lineEditCuentaI, lineEditCuentaL);
        QWidget::setTabOrder(lineEditCuentaL, lineEditInternoL);
        QWidget::setTabOrder(lineEditInternoL, lineEditTramaL);
        QWidget::setTabOrder(lineEditTramaL, pushButtonAceptar);
        QWidget::setTabOrder(pushButtonAceptar, pushButtonCancelar);

        retranslateUi(CRUD_PBX);

        QMetaObject::connectSlotsByName(CRUD_PBX);
    } // setupUi

    void retranslateUi(QDialog *CRUD_PBX)
    {
        CRUD_PBX->setWindowTitle(QApplication::translate("CRUD_PBX", "Configuracion de perfiles de PBX", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CRUD_PBX", "Fecha Llamada", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CRUD_PBX", "A\303\261o", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CRUD_PBX", "Mes", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CRUD_PBX", "Dia", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CRUD_PBX", "Hora", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CRUD_PBX", "Minuto", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CRUD_PBX", "Segundo", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("CRUD_PBX", "Nombre del PBX : ", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CRUD_PBX", "Datos Llamada", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("CRUD_PBX", "Codigo de Cuenta", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("CRUD_PBX", "Destino", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CRUD_PBX", "Origen", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CRUD_PBX", "Duracion", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("CRUD_PBX", "Inicio : ", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CRUD_PBX", "Largo : ", 0, QApplication::UnicodeUTF8));
        pushButtonAceptar->setText(QApplication::translate("CRUD_PBX", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButtonCancelar->setText(QApplication::translate("CRUD_PBX", "Cancelar", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("CRUD_PBX", "Longitud de la trama : ", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("CRUD_PBX", "Longitud telefono interno:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CRUD_PBX: public Ui_CRUD_PBX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUD_PBX_H
