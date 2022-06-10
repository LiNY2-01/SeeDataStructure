/****************************************************************************
** Meta object code from reading C++ file 'SeerVariableLoggerBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Variable/SeerVariableLoggerBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerVariableLoggerBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerVariableLoggerBrowserWidget_t {
    QByteArrayData data[16];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerVariableLoggerBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerVariableLoggerBrowserWidget_t qt_meta_stringdata_SeerVariableLoggerBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "SeerVariableLoggerBrowserWidget"
QT_MOC_LITERAL(1, 32, 26), // "evaluateVariableExpression"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 12), // "expressionid"
QT_MOC_LITERAL(4, 73, 10), // "expression"
QT_MOC_LITERAL(5, 84, 10), // "handleText"
QT_MOC_LITERAL(6, 95, 4), // "text"
QT_MOC_LITERAL(7, 100, 32), // "handleEvaluateVariableExpression"
QT_MOC_LITERAL(8, 133, 21), // "addVariableExpression"
QT_MOC_LITERAL(9, 155, 17), // "handleAddLineEdit"
QT_MOC_LITERAL(10, 173, 22), // "handleDeleteToolButton"
QT_MOC_LITERAL(11, 196, 25), // "handleDeleteAllToolButton"
QT_MOC_LITERAL(12, 222, 17), // "handleItemEntered"
QT_MOC_LITERAL(13, 240, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(14, 257, 4), // "item"
QT_MOC_LITERAL(15, 262, 6) // "column"

    },
    "SeerVariableLoggerBrowserWidget\0"
    "evaluateVariableExpression\0\0expressionid\0"
    "expression\0handleText\0text\0"
    "handleEvaluateVariableExpression\0"
    "addVariableExpression\0handleAddLineEdit\0"
    "handleDeleteToolButton\0handleDeleteAllToolButton\0"
    "handleItemEntered\0QTreeWidgetItem*\0"
    "item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerVariableLoggerBrowserWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   59,    2, 0x0a /* Public */,
       7,    2,   62,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    2,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   15,

       0        // eod
};

void SeerVariableLoggerBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerVariableLoggerBrowserWidget *_t = static_cast<SeerVariableLoggerBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->evaluateVariableExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleEvaluateVariableExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->addVariableExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->handleAddLineEdit(); break;
        case 5: _t->handleDeleteToolButton(); break;
        case 6: _t->handleDeleteAllToolButton(); break;
        case 7: _t->handleItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerVariableLoggerBrowserWidget::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerVariableLoggerBrowserWidget::evaluateVariableExpression)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerVariableLoggerBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerVariableLoggerBrowserWidget.data,
    qt_meta_data_SeerVariableLoggerBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerVariableLoggerBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerVariableLoggerBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerVariableLoggerBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerVariableLoggerBrowserWidgetForm"))
        return static_cast< Ui::SeerVariableLoggerBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerVariableLoggerBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SeerVariableLoggerBrowserWidget::evaluateVariableExpression(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
