/****************************************************************************
** Meta object code from reading C++ file 'select.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PhotoSelector/select.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'select.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Select_t {
    QByteArrayData data[9];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Select_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Select_t qt_meta_stringdata_Select = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Select"
QT_MOC_LITERAL(1, 7, 10), // "BackToMenu"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 29), // "on_pushButtonKeyEnter_clicked"
QT_MOC_LITERAL(4, 49, 25), // "on_pushButtonKey1_clicked"
QT_MOC_LITERAL(5, 75, 25), // "on_pushButtonKey2_clicked"
QT_MOC_LITERAL(6, 101, 25), // "on_pushButtonKey3_clicked"
QT_MOC_LITERAL(7, 127, 25), // "on_pushButtonKey4_clicked"
QT_MOC_LITERAL(8, 153, 25) // "on_pushButtonExit_clicked"

    },
    "Select\0BackToMenu\0\0on_pushButtonKeyEnter_clicked\0"
    "on_pushButtonKey1_clicked\0"
    "on_pushButtonKey2_clicked\0"
    "on_pushButtonKey3_clicked\0"
    "on_pushButtonKey4_clicked\0"
    "on_pushButtonExit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Select[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Select::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Select *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackToMenu(); break;
        case 1: _t->on_pushButtonKeyEnter_clicked(); break;
        case 2: _t->on_pushButtonKey1_clicked(); break;
        case 3: _t->on_pushButtonKey2_clicked(); break;
        case 4: _t->on_pushButtonKey3_clicked(); break;
        case 5: _t->on_pushButtonKey4_clicked(); break;
        case 6: _t->on_pushButtonExit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Select::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Select::BackToMenu)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Select::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_Select.data,
    qt_meta_data_Select,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Select::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Select::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Select.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Select::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Select::BackToMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
