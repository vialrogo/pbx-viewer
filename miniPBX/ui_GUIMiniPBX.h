/********************************************************************************
** Form generated from reading UI file 'GUIMiniPBX.ui'
**
** Created: Mon Aug 9 11:35:00 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIMINIPBX_H
#define UI_GUIMINIPBX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIMiniPBX
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUIMiniPBX)
    {
        if (GUIMiniPBX->objectName().isEmpty())
            GUIMiniPBX->setObjectName(QString::fromUtf8("GUIMiniPBX"));
        GUIMiniPBX->resize(379, 477);
        centralwidget = new QWidget(GUIMiniPBX);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 370, 91, 27));
        GUIMiniPBX->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUIMiniPBX);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 379, 21));
        GUIMiniPBX->setMenuBar(menubar);
        statusbar = new QStatusBar(GUIMiniPBX);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GUIMiniPBX->setStatusBar(statusbar);

        retranslateUi(GUIMiniPBX);

        QMetaObject::connectSlotsByName(GUIMiniPBX);
    } // setupUi

    void retranslateUi(QMainWindow *GUIMiniPBX)
    {
        GUIMiniPBX->setWindowTitle(QApplication::translate("GUIMiniPBX", "GUIMiniPBX", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("GUIMiniPBX", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GUIMiniPBX: public Ui_GUIMiniPBX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIMINIPBX_H
