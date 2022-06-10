/****************************************************************************
** Meta object code from reading C++ file 'SeerMemoryVisualizerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../viz/memory/SeerMemoryVisualizerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerMemoryVisualizerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerMemoryVisualizerWidget_t {
    QByteArrayData data[19];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerMemoryVisualizerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerMemoryVisualizerWidget_t qt_meta_stringdata_SeerMemoryVisualizerWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "SeerMemoryVisualizerWidget"
QT_MOC_LITERAL(1, 27, 26), // "evaluateVariableExpression"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 12), // "expressionid"
QT_MOC_LITERAL(4, 68, 10), // "expression"
QT_MOC_LITERAL(5, 79, 24), // "evaluateMemoryExpression"
QT_MOC_LITERAL(6, 104, 7), // "address"
QT_MOC_LITERAL(7, 112, 5), // "count"
QT_MOC_LITERAL(8, 118, 10), // "handleText"
QT_MOC_LITERAL(9, 129, 4), // "text"
QT_MOC_LITERAL(10, 134, 19), // "handleRefreshButton"
QT_MOC_LITERAL(11, 154, 26), // "handleVariableNameLineEdit"
QT_MOC_LITERAL(12, 181, 33), // "handleMemoryDisplayFormatComb..."
QT_MOC_LITERAL(13, 215, 5), // "index"
QT_MOC_LITERAL(14, 221, 31), // "handleCharDisplayFormatComboBox"
QT_MOC_LITERAL(15, 253, 24), // "handleColumnCountSpinBox"
QT_MOC_LITERAL(16, 278, 5), // "value"
QT_MOC_LITERAL(17, 284, 17), // "handlePrintButton"
QT_MOC_LITERAL(18, 302, 16) // "handleSaveButton"

    },
    "SeerMemoryVisualizerWidget\0"
    "evaluateVariableExpression\0\0expressionid\0"
    "expression\0evaluateMemoryExpression\0"
    "address\0count\0handleText\0text\0"
    "handleRefreshButton\0handleVariableNameLineEdit\0"
    "handleMemoryDisplayFormatComboBox\0"
    "index\0handleCharDisplayFormatComboBox\0"
    "handleColumnCountSpinBox\0value\0"
    "handlePrintButton\0handleSaveButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerMemoryVisualizerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    3,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   76,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x09 /* Protected */,
      11,    0,   80,    2, 0x09 /* Protected */,
      12,    1,   81,    2, 0x09 /* Protected */,
      14,    1,   84,    2, 0x09 /* Protected */,
      15,    1,   87,    2, 0x09 /* Protected */,
      17,    0,   90,    2, 0x09 /* Protected */,
      18,    0,   91,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,    3,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SeerMemoryVisualizerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerMemoryVisualizerWidget *_t = static_cast<SeerMemoryVisualizerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->evaluateVariableExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->evaluateMemoryExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleRefreshButton(); break;
        case 4: _t->handleVariableNameLineEdit(); break;
        case 5: _t->handleMemoryDisplayFormatComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->handleCharDisplayFormatComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->handleColumnCountSpinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->handlePrintButton(); break;
        case 9: _t->handleSaveButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerMemoryVisualizerWidget::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerMemoryVisualizerWidget::evaluateVariableExpression)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerMemoryVisualizerWidget::*)(int , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerMemoryVisualizerWidget::evaluateMemoryExpression)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerMemoryVisualizerWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerMemoryVisualizerWidget.data,
    qt_meta_data_SeerMemoryVisualizerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerMemoryVisualizerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerMemoryVisualizerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerMemoryVisualizerWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerMemoryVisualizerWidgetForm"))
        return static_cast< Ui::SeerMemoryVisualizerWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerMemoryVisualizerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SeerMemoryVisualizerWidget::evaluateVariableExpression(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SeerMemoryVisualizerWidget::evaluateMemoryExpression(int _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
