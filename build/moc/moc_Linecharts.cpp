/****************************************************************************
** Meta object code from reading C++ file 'Linecharts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/linechart/Linecharts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Linecharts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Linecharts_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Linecharts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Linecharts_t qt_meta_stringdata_Linecharts = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Linecharts"
QT_MOC_LITERAL(1, 11, 14), // "logfileWritten"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "fileName"
QT_MOC_LITERAL(4, 36, 17), // "visibilityChanged"
QT_MOC_LITERAL(5, 54, 7) // "visible"

    },
    "Linecharts\0logfileWritten\0\0fileName\0"
    "visibilityChanged\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Linecharts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void Linecharts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Linecharts *_t = static_cast<Linecharts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logfileWritten((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Linecharts::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Linecharts::logfileWritten)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Linecharts::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Linecharts::visibilityChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Linecharts::staticMetaObject = {
    { &MultiVehicleDockWidget::staticMetaObject, qt_meta_stringdata_Linecharts.data,
      qt_meta_data_Linecharts,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Linecharts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Linecharts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Linecharts.stringdata0))
        return static_cast<void*>(this);
    return MultiVehicleDockWidget::qt_metacast(_clname);
}

int Linecharts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MultiVehicleDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Linecharts::logfileWritten(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Linecharts::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
