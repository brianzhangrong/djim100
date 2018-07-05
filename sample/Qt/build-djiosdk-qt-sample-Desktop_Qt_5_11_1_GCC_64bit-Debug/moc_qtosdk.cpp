/****************************************************************************
** Meta object code from reading C++ file 'qtosdk.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../djiosdk-qt-sample/qtosdk.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtosdk.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtOsdk_t {
    QByteArrayData data[21];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qtOsdk_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qtOsdk_t qt_meta_stringdata_qtOsdk = {
    {
QT_MOC_LITERAL(0, 0, 6), // "qtOsdk"
QT_MOC_LITERAL(1, 7, 28), // "changeControlAuthorityStatus"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "textToDisplay"
QT_MOC_LITERAL(4, 51, 16), // "changeInitButton"
QT_MOC_LITERAL(5, 68, 7), // "success"
QT_MOC_LITERAL(6, 76, 20), // "changeActivateButton"
QT_MOC_LITERAL(7, 97, 22), // "on_initVehicle_clicked"
QT_MOC_LITERAL(8, 120, 25), // "on_activateButton_clicked"
QT_MOC_LITERAL(9, 146, 27), // "on_obtainCtrlButton_clicked"
QT_MOC_LITERAL(10, 174, 17), // "ctrlStatusChanged"
QT_MOC_LITERAL(11, 192, 12), // "initFinished"
QT_MOC_LITERAL(12, 205, 10), // "initStatus"
QT_MOC_LITERAL(13, 216, 10), // "initResult"
QT_MOC_LITERAL(14, 227, 16), // "activateFinished"
QT_MOC_LITERAL(15, 244, 14), // "activateStatus"
QT_MOC_LITERAL(16, 259, 14), // "activateResult"
QT_MOC_LITERAL(17, 274, 31), // "on_componentTabs_currentChanged"
QT_MOC_LITERAL(18, 306, 5), // "index"
QT_MOC_LITERAL(19, 312, 26), // "on_portSelection_activated"
QT_MOC_LITERAL(20, 339, 4) // "arg1"

    },
    "qtOsdk\0changeControlAuthorityStatus\0"
    "\0textToDisplay\0changeInitButton\0success\0"
    "changeActivateButton\0on_initVehicle_clicked\0"
    "on_activateButton_clicked\0"
    "on_obtainCtrlButton_clicked\0"
    "ctrlStatusChanged\0initFinished\0"
    "initStatus\0initResult\0activateFinished\0"
    "activateStatus\0activateResult\0"
    "on_componentTabs_currentChanged\0index\0"
    "on_portSelection_activated\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtOsdk[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    2,   72,    2, 0x06 /* Public */,
       6,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   82,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    2,   88,    2, 0x08 /* Private */,
      14,    2,   93,    2, 0x08 /* Private */,
      17,    1,   98,    2, 0x08 /* Private */,
      19,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void qtOsdk::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qtOsdk *_t = static_cast<qtOsdk *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeControlAuthorityStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->changeInitButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->changeActivateButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->on_initVehicle_clicked(); break;
        case 4: _t->on_activateButton_clicked(); break;
        case 5: _t->on_obtainCtrlButton_clicked(); break;
        case 6: _t->ctrlStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->initFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->activateFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->on_componentTabs_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_portSelection_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtOsdk::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtOsdk::changeControlAuthorityStatus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtOsdk::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtOsdk::changeInitButton)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qtOsdk::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtOsdk::changeActivateButton)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qtOsdk::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qtOsdk.data,
      qt_meta_data_qtOsdk,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qtOsdk::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtOsdk::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtOsdk.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int qtOsdk::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void qtOsdk::changeControlAuthorityStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qtOsdk::changeInitButton(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qtOsdk::changeActivateButton(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
