/****************************************************************************
** Meta object code from reading C++ file 'CRUD_PBX.h'
**
** Created: Mon Jun 28 07:19:20 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CRUD_PBX.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CRUD_PBX.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRUD_PBX[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CRUD_PBX[] = {
    "CRUD_PBX\0\0nuevoPerfil()\0"
};

const QMetaObject CRUD_PBX::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CRUD_PBX,
      qt_meta_data_CRUD_PBX, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRUD_PBX::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRUD_PBX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRUD_PBX::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRUD_PBX))
        return static_cast<void*>(const_cast< CRUD_PBX*>(this));
    return QDialog::qt_metacast(_clname);
}

int CRUD_PBX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nuevoPerfil(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
