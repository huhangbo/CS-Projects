/****************************************************************************
** Meta object code from reading C++ file 'hard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Puzzle game/hard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hard_t {
    QByteArrayData data[19];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hard_t qt_meta_stringdata_hard = {
    {
QT_MOC_LITERAL(0, 0, 4), // "hard"
QT_MOC_LITERAL(1, 5, 7), // "success"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 7), // "succeed"
QT_MOC_LITERAL(4, 22, 16), // "on_back1_clicked"
QT_MOC_LITERAL(5, 39, 18), // "on_showpic_pressed"
QT_MOC_LITERAL(6, 58, 18), // "on_showpic_clicked"
QT_MOC_LITERAL(7, 77, 17), // "on_setpic_clicked"
QT_MOC_LITERAL(8, 95, 18), // "on_restart_clicked"
QT_MOC_LITERAL(9, 114, 5), // "showp"
QT_MOC_LITERAL(10, 120, 15), // "mousePressEvent"
QT_MOC_LITERAL(11, 136, 12), // "QMouseEvent*"
QT_MOC_LITERAL(12, 149, 5), // "event"
QT_MOC_LITERAL(13, 155, 14), // "on_vol_clicked"
QT_MOC_LITERAL(14, 170, 25), // "on_volslider_valueChanged"
QT_MOC_LITERAL(15, 196, 5), // "value"
QT_MOC_LITERAL(16, 202, 13), // "updateDisplay"
QT_MOC_LITERAL(17, 216, 19), // "on_set_step_clicked"
QT_MOC_LITERAL(18, 236, 19) // "on_set_time_clicked"

    },
    "hard\0success\0\0succeed\0on_back1_clicked\0"
    "on_showpic_pressed\0on_showpic_clicked\0"
    "on_setpic_clicked\0on_restart_clicked\0"
    "showp\0mousePressEvent\0QMouseEvent*\0"
    "event\0on_vol_clicked\0on_volslider_valueChanged\0"
    "value\0updateDisplay\0on_set_step_clicked\0"
    "on_set_time_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void hard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<hard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->succeed(); break;
        case 2: _t->on_back1_clicked(); break;
        case 3: _t->on_showpic_pressed(); break;
        case 4: _t->on_showpic_clicked(); break;
        case 5: _t->on_setpic_clicked(); break;
        case 6: _t->on_restart_clicked(); break;
        case 7: _t->showp(); break;
        case 8: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->on_vol_clicked(); break;
        case 10: _t->on_volslider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateDisplay(); break;
        case 12: _t->on_set_step_clicked(); break;
        case 13: _t->on_set_time_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (hard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&hard::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject hard::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_hard.data,
    qt_meta_data_hard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *hard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hard.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int hard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void hard::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
