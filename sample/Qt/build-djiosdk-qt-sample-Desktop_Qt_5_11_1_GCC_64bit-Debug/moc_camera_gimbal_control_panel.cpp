/****************************************************************************
** Meta object code from reading C++ file 'camera_gimbal_control_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../djiosdk-qt-sample/CameraGimbalControl/camera_gimbal_control_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera_gimbal_control_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraGimbalControl_t {
    QByteArrayData data[19];
    char stringdata0[499];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraGimbalControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraGimbalControl_t qt_meta_stringdata_CameraGimbalControl = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CameraGimbalControl"
QT_MOC_LITERAL(1, 20, 28), // "on_rollCheckBox_stateChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 4), // "arg1"
QT_MOC_LITERAL(4, 55, 29), // "on_pitchCheckBox_stateChanged"
QT_MOC_LITERAL(5, 85, 27), // "on_yawCheckBox_stateChanged"
QT_MOC_LITERAL(6, 113, 39), // "on_controlModeButtonGroup_but..."
QT_MOC_LITERAL(7, 153, 16), // "QAbstractButton*"
QT_MOC_LITERAL(8, 170, 40), // "on_angleControlButtonGroup_bu..."
QT_MOC_LITERAL(9, 211, 35), // "on_pitchControlSpinBox_valueC..."
QT_MOC_LITERAL(10, 247, 34), // "on_pitchControlSlider_valueCh..."
QT_MOC_LITERAL(11, 282, 5), // "value"
QT_MOC_LITERAL(12, 288, 34), // "on_rollControlSpinBox_valueCh..."
QT_MOC_LITERAL(13, 323, 33), // "on_rollControlSlider_valueCha..."
QT_MOC_LITERAL(14, 357, 33), // "on_yawControlSpinBox_valueCha..."
QT_MOC_LITERAL(15, 391, 32), // "on_yawControlSlider_valueChanged"
QT_MOC_LITERAL(16, 424, 28), // "on_sendGimbalCommand_clicked"
QT_MOC_LITERAL(17, 453, 22), // "on_photoButton_clicked"
QT_MOC_LITERAL(18, 476, 22) // "on_videoButton_clicked"

    },
    "CameraGimbalControl\0on_rollCheckBox_stateChanged\0"
    "\0arg1\0on_pitchCheckBox_stateChanged\0"
    "on_yawCheckBox_stateChanged\0"
    "on_controlModeButtonGroup_buttonClicked\0"
    "QAbstractButton*\0"
    "on_angleControlButtonGroup_buttonClicked\0"
    "on_pitchControlSpinBox_valueChanged\0"
    "on_pitchControlSlider_valueChanged\0"
    "value\0on_rollControlSpinBox_valueChanged\0"
    "on_rollControlSlider_valueChanged\0"
    "on_yawControlSpinBox_valueChanged\0"
    "on_yawControlSlider_valueChanged\0"
    "on_sendGimbalCommand_clicked\0"
    "on_photoButton_clicked\0on_videoButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraGimbalControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    1,   87,    2, 0x08 /* Private */,
       5,    1,   90,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      12,    1,  105,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      14,    1,  111,    2, 0x08 /* Private */,
      15,    1,  114,    2, 0x08 /* Private */,
      16,    0,  117,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CameraGimbalControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraGimbalControl *_t = static_cast<CameraGimbalControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_rollCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pitchCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_yawCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_controlModeButtonGroup_buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 4: _t->on_angleControlButtonGroup_buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->on_pitchControlSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_pitchControlSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_rollControlSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_rollControlSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_yawControlSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_yawControlSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_sendGimbalCommand_clicked(); break;
        case 12: _t->on_photoButton_clicked(); break;
        case 13: _t->on_videoButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CameraGimbalControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CameraGimbalControl.data,
      qt_meta_data_CameraGimbalControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CameraGimbalControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraGimbalControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraGimbalControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CameraGimbalControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
