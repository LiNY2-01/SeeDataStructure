/****************************************************************************
** Meta object code from reading C++ file 'SeerRegisterValuesBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Variable/SeerRegisterValuesBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerRegisterValuesBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerRegisterValuesBrowserWidget_t {
    QByteArrayData data[12];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerRegisterValuesBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerRegisterValuesBrowserWidget_t qt_meta_stringdata_SeerRegisterValuesBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "SeerRegisterValuesBrowserWidget"
QT_MOC_LITERAL(1, 32, 20), // "refreshRegisterNames"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 21), // "refreshRegisterValues"
QT_MOC_LITERAL(4, 76, 10), // "handleText"
QT_MOC_LITERAL(5, 87, 4), // "text"
QT_MOC_LITERAL(6, 92, 26), // "handleStoppingPointReached"
QT_MOC_LITERAL(7, 119, 7), // "refresh"
QT_MOC_LITERAL(8, 127, 17), // "handleItemEntered"
QT_MOC_LITERAL(9, 145, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(10, 162, 4), // "item"
QT_MOC_LITERAL(11, 167, 6) // "column"

    },
    "SeerRegisterValuesBrowserWidget\0"
    "refreshRegisterNames\0\0refreshRegisterValues\0"
    "handleText\0text\0handleStoppingPointReached\0"
    "refresh\0handleItemEntered\0QTreeWidgetItem*\0"
    "item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerRegisterValuesBrowserWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    2,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   11,

       0        // eod
};

void SeerRegisterValuesBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerRegisterValuesBrowserWidget *_t = static_cast<SeerRegisterValuesBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshRegisterNames(); break;
        case 1: _t->refreshRegisterValues(); break;
        case 2: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleStoppingPointReached(); break;
        case 4: _t->refresh(); break;
        case 5: _t->handleItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerRegisterValuesBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerRegisterValuesBrowserWidget::refreshRegisterNames)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerRegisterValuesBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerRegisterValuesBrowserWidget::refreshRegisterValues)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerRegisterValuesBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerRegisterValuesBrowserWidget.data,
    qt_meta_data_SeerRegisterValuesBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerRegisterValuesBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerRegisterValuesBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerRegisterValuesBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerRegisterValuesBrowserWidgetForm"))
        return static_cast< Ui::SeerRegisterValuesBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerRegisterValuesBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SeerRegisterValuesBrowserWidget::refreshRegisterNames()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SeerRegisterValuesBrowserWidget::refreshRegisterValues()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
