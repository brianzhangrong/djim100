/****************************************************************************
** Meta object code from reading C++ file 'flight_control_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../djiosdk-qt-sample/FlightControl/flight_control_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flight_control_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightControlPanel_t {
    QByteArrayData data[25];
    char stringdata0[627];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightControlPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightControlPanel_t qt_meta_stringdata_FlightControlPanel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FlightControlPanel"
QT_MOC_LITERAL(1, 19, 19), // "changeCommandStatus"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "textToDisplay"
QT_MOC_LITERAL(4, 54, 32), // "on_btn_flight_runCommand_clicked"
QT_MOC_LITERAL(5, 87, 38), // "on_buttonGroupHorizontal_butt..."
QT_MOC_LITERAL(6, 126, 16), // "QAbstractButton*"
QT_MOC_LITERAL(7, 143, 6), // "button"
QT_MOC_LITERAL(8, 150, 36), // "on_buttonGroupVertical_button..."
QT_MOC_LITERAL(9, 187, 31), // "on_buttonGroupYaw_buttonClicked"
QT_MOC_LITERAL(10, 219, 33), // "on_buttonGroupFrame_buttonCli..."
QT_MOC_LITERAL(11, 253, 34), // "on_buttonGroupStable_buttonCl..."
QT_MOC_LITERAL(12, 288, 31), // "on_xControlSpinBox_valueChanged"
QT_MOC_LITERAL(13, 320, 4), // "arg1"
QT_MOC_LITERAL(14, 325, 30), // "on_xControlSlider_valueChanged"
QT_MOC_LITERAL(15, 356, 5), // "value"
QT_MOC_LITERAL(16, 362, 31), // "on_yControlSpinBox_valueChanged"
QT_MOC_LITERAL(17, 394, 30), // "on_yControlSlider_valueChanged"
QT_MOC_LITERAL(18, 425, 31), // "on_zControlSpinBox_valueChanged"
QT_MOC_LITERAL(19, 457, 30), // "on_zControlSlider_valueChanged"
QT_MOC_LITERAL(20, 488, 33), // "on_yawControlSpinBox_valueCha..."
QT_MOC_LITERAL(21, 522, 32), // "on_yawControlSlider_valueChanged"
QT_MOC_LITERAL(22, 555, 26), // "on_btn_flight_send_clicked"
QT_MOC_LITERAL(23, 582, 20), // "commandStatusChanged"
QT_MOC_LITERAL(24, 603, 23) // "on_cb_command_activated"

    },
    "FlightControlPanel\0changeCommandStatus\0"
    "\0textToDisplay\0on_btn_flight_runCommand_clicked\0"
    "on_buttonGroupHorizontal_buttonClicked\0"
    "QAbstractButton*\0button\0"
    "on_buttonGroupVertical_buttonClicked\0"
    "on_buttonGroupYaw_buttonClicked\0"
    "on_buttonGroupFrame_buttonClicked\0"
    "on_buttonGroupStable_buttonClicked\0"
    "on_xControlSpinBox_valueChanged\0arg1\0"
    "on_xControlSlider_valueChanged\0value\0"
    "on_yControlSpinBox_valueChanged\0"
    "on_yControlSlider_valueChanged\0"
    "on_zControlSpinBox_valueChanged\0"
    "on_zControlSlider_valueChanged\0"
    "on_yawControlSpinBox_valueChanged\0"
    "on_yawControlSlider_valueChanged\0"
    "on_btn_flight_send_clicked\0"
    "commandStatusChanged\0on_cb_command_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightControlPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  107,    2, 0x08 /* Private */,
       5,    1,  108,    2, 0x08 /* Private */,
       8,    1,  111,    2, 0x08 /* Private */,
       9,    1,  114,    2, 0x08 /* Private */,
      10,    1,  117,    2, 0x08 /* Private */,
      11,    1,  120,    2, 0x08 /* Private */,
      12,    1,  123,    2, 0x08 /* Private */,
      14,    1,  126,    2, 0x08 /* Private */,
      16,    1,  129,    2, 0x08 /* Private */,
      17,    1,  132,    2, 0x08 /* Private */,
      18,    1,  135,    2, 0x08 /* Private */,
      19,    1,  138,    2, 0x08 /* Private */,
      20,    1,  141,    2, 0x08 /* Private */,
      21,    1,  144,    2, 0x08 /* Private */,
      22,    0,  147,    2, 0x08 /* Private */,
      23,    1,  148,    2, 0x08 /* Private */,
      24,    1,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void FlightControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlightControlPanel *_t = static_cast<FlightControlPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCommandStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_btn_flight_runCommand_clicked(); break;
        case 2: _t->on_buttonGroupHorizontal_buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->on_buttonGroupVertical_buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 4: _t->on_buttonGroupYaw_buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->on_buttonGroupFrame_buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 6: _t->on_buttonGroupStable_buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 7: _t->on_xControlSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_xControlSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_yControlSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_yControlSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_zControlSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->on_zControlSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_yawControlSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->on_yawControlSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_btn_flight_send_clicked(); break;
        case 16: _t->commandStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->on_cb_command_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightControlPanel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightControlPanel::changeCommandStatus)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FlightControlPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FlightControlPanel.data,
      qt_meta_data_FlightControlPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FlightControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightControlPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FlightControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FlightControlPanel::changeCommandStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
