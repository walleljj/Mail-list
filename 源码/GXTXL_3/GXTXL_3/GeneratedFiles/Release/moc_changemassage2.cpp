/****************************************************************************
** Meta object code from reading C++ file 'changemassage2.h'
**
** Created: Tue Jul 10 14:34:31 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../changemassage2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changemassage2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChangeMassage2[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      27,   15,   15,   15, 0x0a,
      42,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChangeMassage2[] = {
    "ChangeMassage2\0\0onBtnOK1()\0onBtnCancel3()\0"
    "onBtn3()\0"
};

const QMetaObject ChangeMassage2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangeMassage2,
      qt_meta_data_ChangeMassage2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChangeMassage2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChangeMassage2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChangeMassage2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeMassage2))
        return static_cast<void*>(const_cast< ChangeMassage2*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChangeMassage2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onBtnOK1(); break;
        case 1: onBtnCancel3(); break;
        case 2: onBtn3(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
