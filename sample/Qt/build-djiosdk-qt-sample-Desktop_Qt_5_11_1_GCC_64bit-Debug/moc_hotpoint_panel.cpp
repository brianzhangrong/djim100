/****************************************************************************
** Meta object code from reading C++ file 'hotpoint_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../djiosdk-qt-sample/Missions/hotpoint_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotpoint_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HotpointPanel_t {
    QByteArrayData data[11];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HotpointPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HotpointPanel_t qt_meta_stringdata_HotpointPanel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "HotpointPanel"
QT_MOC_LITERAL(1, 14, 29), // "on_btn_hotPoint_start_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 28), // "on_btn_hotPoint_stop_clicked"
QT_MOC_LITERAL(4, 74, 31), // "on_btn_hotPoint_current_clicked"
QT_MOC_LITERAL(5, 106, 23), // "on_btn_hp_pause_clicked"
QT_MOC_LITERAL(6, 130, 7), // "checked"
QT_MOC_LITERAL(7, 138, 24), // "on_btn_hp_setPal_clicked"
QT_MOC_LITERAL(8, 163, 27), // "on_btn_hp_setRadius_clicked"
QT_MOC_LITERAL(9, 191, 24), // "on_btn_hp_setYaw_clicked"
QT_MOC_LITERAL(10, 216, 22) // "on_btn_hp_data_clicked"

    },
    "HotpointPanel\0on_btn_hotPoint_start_clicked\0"
    "\0on_btn_hotPoint_stop_clicked\0"
    "on_btn_hotPoint_current_clicked\0"
    "on_btn_hp_pause_clicked\0checked\0"
    "on_btn_hp_setPal_clicked\0"
    "on_btn_hp_setRadius_clicked\0"
    "on_btn_hp_setYaw_clicked\0"
    "on_btn_hp_data_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HotpointPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HotpointPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HotpointPanel *_t = static_cast<HotpointPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_hotPoint_start_clicked(); break;
        case 1: _t->on_btn_hotPoint_stop_clicked(); break;
        case 2: _t->on_btn_hotPoint_current_clicked(); break;
        case 3: _t->on_btn_hp_pause_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_btn_hp_setPal_clicked(); break;
        case 5: _t->on_btn_hp_setRadius_clicked(); break;
        case 6: _t->on_btn_hp_setYaw_clicked(); break;
        case 7: _t->on_btn_hp_data_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HotpointPanel::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_HotpointPanel.data,
      qt_meta_data_HotpointPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HotpointPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HotpointPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HotpointPanel.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int HotpointPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
