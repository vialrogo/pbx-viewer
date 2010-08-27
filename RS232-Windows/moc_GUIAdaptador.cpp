/****************************************************************************
** Meta object code from reading C++ file 'GUIAdaptador.h'
**
** Created: Fri 27. Aug 00:42:24 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GUIAdaptador.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUIAdaptador.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUIAdaptador[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      29,   13,   13,   13, 0x08,
      44,   13,   13,   13, 0x08,
      59,   13,   13,   13, 0x08,
      75,   13,   13,   13, 0x08,
      93,   13,   13,   13, 0x08,
     104,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUIAdaptador[] = {
    "GUIAdaptador\0\0clickIniciar()\0"
    "clickDetener()\0idiomaIngles()\0"
    "idiomaEspanol()\0idiomaPortugues()\0"
    "acercaDe()\0ayuda()\0"
};

const QMetaObject GUIAdaptador::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GUIAdaptador,
      qt_meta_data_GUIAdaptador, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUIAdaptador::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUIAdaptador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUIAdaptador::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUIAdaptador))
        return static_cast<void*>(const_cast< GUIAdaptador*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GUIAdaptador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
