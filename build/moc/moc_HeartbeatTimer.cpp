/****************************************************************************
** Meta object code from reading C++ file 'HeartbeatTimer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/HeartbeatTimer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HeartbeatTimer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HeartbeatTimer_t {
    QByteArrayData data[7];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeartbeatTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeartbeatTimer_t qt_meta_stringdata_HeartbeatTimer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HeartbeatTimer"
QT_MOC_LITERAL(1, 15, 16), // "heartbeatTimeout"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "vehicle_id"
QT_MOC_LITERAL(4, 44, 13), // "activeChanged"
QT_MOC_LITERAL(5, 58, 6), // "active"
QT_MOC_LITERAL(6, 65, 12) // "timerTimeout"

    },
    "HeartbeatTimer\0heartbeatTimeout\0\0"
    "vehicle_id\0activeChanged\0active\0"
    "timerTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeartbeatTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    5,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void HeartbeatTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HeartbeatTimer *_t = static_cast<HeartbeatTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->heartbeatTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->timerTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HeartbeatTimer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeartbeatTimer::heartbeatTimeout)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HeartbeatTimer::*_t)(bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeartbeatTimer::activeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject HeartbeatTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HeartbeatTimer.data,
      qt_meta_data_HeartbeatTimer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HeartbeatTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeartbeatTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HeartbeatTimer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HeartbeatTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HeartbeatTimer::heartbeatTimeout(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HeartbeatTimer::activeChanged(bool _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
