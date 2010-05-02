#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QtSql>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel resultado("");
    if (QSqlDatabase::isDriverAvailable("QMYSQL")) {
       resultado.setText("Driver Mysql disponible");
    }
    else
        resultado.setText("Mala suerte, driver Mysql NO disponible");
    resultado.show();
    return app.exec();
}