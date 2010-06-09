/****************************************************************************
** Meta object code from reading C++ file 'GUIDesktop.h'
**
** Created: Tue Jun 8 20:50:35 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GUIDesktop.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUIDesktop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUIDesktop[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,
      57,   11,   11,   11, 0x08,
      73,   11,   11,   11, 0x08,
      91,   11,   11,   11, 0x08,
     102,   11,   11,   11, 0x08,
     110,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUIDesktop[] = {
    "GUIDesktop\0\0clickIniciar()\0clickDetener()\0"
    "idiomaIngles()\0idiomaEspanol()\0"
    "idiomaPortugues()\0acercaDe()\0ayuda()\0"
    "crearConexion()\0escucharClienteTcp()\0"
};

const QMetaObject GUIDesktop::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GUIDesktop,
      qt_meta_data_GUIDesktop, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUIDesktop::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUIDesktop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUIDesktop::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUIDesktop))
        return static_cast<void*>(const_cast< GUIDesktop*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GUIDesktop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clickIniciar(); break;
        case 1: clickDetener(); break;
        case 2: idiomaIngles(); break;
        case 3: idiomaEspanol(); break;
        case 4: idiomaPortugues(); break;
        case 5: acercaDe(); break;
        case 6: ayuda(); break;
        case 7: crearConexion(); break;
        case 8: escucharClienteTcp(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
