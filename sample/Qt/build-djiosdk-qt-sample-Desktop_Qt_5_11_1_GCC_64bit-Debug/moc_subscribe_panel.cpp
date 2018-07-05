/****************************************************************************
** Meta object code from reading C++ file 'subscribe_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../djiosdk-qt-sample/Subscribe/subscribe_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subscribe_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SubscribePanel_t {
    QByteArrayData data[16];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubscribePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubscribePanel_t qt_meta_stringdata_SubscribePanel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SubscribePanel"
QT_MOC_LITERAL(1, 15, 20), // "on_btn_match_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 26), // "on_tableWidget_itemChanged"
QT_MOC_LITERAL(4, 64, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(5, 82, 4), // "item"
QT_MOC_LITERAL(6, 87, 20), // "on_startPkg0_clicked"
QT_MOC_LITERAL(7, 108, 19), // "on_stopPkg0_clicked"
QT_MOC_LITERAL(8, 128, 20), // "on_startPkg1_clicked"
QT_MOC_LITERAL(9, 149, 19), // "on_stopPkg1_clicked"
QT_MOC_LITERAL(10, 169, 20), // "on_startPkg2_clicked"
QT_MOC_LITERAL(11, 190, 19), // "on_stopPkg2_clicked"
QT_MOC_LITERAL(12, 210, 20), // "on_startPkg3_clicked"
QT_MOC_LITERAL(13, 231, 19), // "on_stopPkg3_clicked"
QT_MOC_LITERAL(14, 251, 19), // "on_stopPkg4_clicked"
QT_MOC_LITERAL(15, 271, 20) // "on_startPkg4_clicked"

    },
    "SubscribePanel\0on_btn_match_clicked\0"
    "\0on_tableWidget_itemChanged\0"
    "QTableWidgetItem*\0item\0on_startPkg0_clicked\0"
    "on_stopPkg0_clicked\0on_startPkg1_clicked\0"
    "on_stopPkg1_clicked\0on_startPkg2_clicked\0"
    "on_stopPkg2_clicked\0on_startPkg3_clicked\0"
    "on_stopPkg3_clicked\0on_stopPkg4_clicked\0"
    "on_startPkg4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubscribePanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    1,   75,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubscribePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubscribePanel *_t = static_cast<SubscribePanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_match_clicked(); break;
        case 1: _t->on_tableWidget_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_startPkg0_clicked(); break;
        case 3: _t->on_stopPkg0_clicked(); break;
        case 4: _t->on_startPkg1_clicked(); break;
        case 5: _t->on_stopPkg1_clicked(); break;
        case 6: _t->on_startPkg2_clicked(); break;
        case 7: _t->on_stopPkg2_clicked(); break;
        case 8: _t->on_startPkg3_clicked(); break;
        case 9: _t->on_stopPkg3_clicked(); break;
        case 10: _t->on_stopPkg4_clicked(); break;
        case 11: _t->on_startPkg4_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SubscribePanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubscribePanel.data,
      qt_meta_data_SubscribePanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SubscribePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubscribePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubscribePanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SubscribePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
