/****************************************************************************
** Meta object code from reading C++ file 'SeerArrayVisualizerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../viz/array/SeerArrayVisualizerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerArrayVisualizerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerArrayVisualizerWidget_t {
    QByteArrayData data[24];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerArrayVisualizerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerArrayVisualizerWidget_t qt_meta_stringdata_SeerArrayVisualizerWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "SeerArrayVisualizerWidget"
QT_MOC_LITERAL(1, 26, 26), // "evaluateVariableExpression"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 12), // "expressionid"
QT_MOC_LITERAL(4, 67, 10), // "expression"
QT_MOC_LITERAL(5, 78, 24), // "evaluateMemoryExpression"
QT_MOC_LITERAL(6, 103, 7), // "address"
QT_MOC_LITERAL(7, 111, 5), // "count"
QT_MOC_LITERAL(8, 117, 10), // "handleText"
QT_MOC_LITERAL(9, 128, 4), // "text"
QT_MOC_LITERAL(10, 133, 19), // "handleRefreshButton"
QT_MOC_LITERAL(11, 153, 26), // "handleVariableNameLineEdit"
QT_MOC_LITERAL(12, 180, 32), // "handleArrayDisplayFormatComboBox"
QT_MOC_LITERAL(13, 213, 5), // "index"
QT_MOC_LITERAL(14, 219, 17), // "handleDataChanged"
QT_MOC_LITERAL(15, 237, 19), // "handleSplitterMoved"
QT_MOC_LITERAL(16, 257, 3), // "pos"
QT_MOC_LITERAL(17, 261, 19), // "handleSeriesHovered"
QT_MOC_LITERAL(18, 281, 5), // "point"
QT_MOC_LITERAL(19, 287, 5), // "state"
QT_MOC_LITERAL(20, 293, 19), // "handleTitleLineEdit"
QT_MOC_LITERAL(21, 313, 20), // "handlePointsCheckBox"
QT_MOC_LITERAL(22, 334, 20), // "handleLabelsCheckBox"
QT_MOC_LITERAL(23, 355, 25) // "handleLineTypeButtonGroup"

    },
    "SeerArrayVisualizerWidget\0"
    "evaluateVariableExpression\0\0expressionid\0"
    "expression\0evaluateMemoryExpression\0"
    "address\0count\0handleText\0text\0"
    "handleRefreshButton\0handleVariableNameLineEdit\0"
    "handleArrayDisplayFormatComboBox\0index\0"
    "handleDataChanged\0handleSplitterMoved\0"
    "pos\0handleSeriesHovered\0point\0state\0"
    "handleTitleLineEdit\0handlePointsCheckBox\0"
    "handleLabelsCheckBox\0handleLineTypeButtonGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerArrayVisualizerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    3,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   91,    2, 0x0a /* Public */,
      10,    0,   94,    2, 0x09 /* Protected */,
      11,    0,   95,    2, 0x09 /* Protected */,
      12,    1,   96,    2, 0x09 /* Protected */,
      14,    0,   99,    2, 0x09 /* Protected */,
      15,    2,  100,    2, 0x09 /* Protected */,
      17,    2,  105,    2, 0x09 /* Protected */,
      20,    0,  110,    2, 0x09 /* Protected */,
      21,    0,  111,    2, 0x09 /* Protected */,
      22,    0,  112,    2, 0x09 /* Protected */,
      23,    0,  113,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,    3,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   16,   13,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Bool,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SeerArrayVisualizerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerArrayVisualizerWidget *_t = static_cast<SeerArrayVisualizerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->evaluateVariableExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->evaluateMemoryExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleRefreshButton(); break;
        case 4: _t->handleVariableNameLineEdit(); break;
        case 5: _t->handleArrayDisplayFormatComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->handleDataChanged(); break;
        case 7: _t->handleSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->handleSeriesHovered((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->handleTitleLineEdit(); break;
        case 10: _t->handlePointsCheckBox(); break;
        case 11: _t->handleLabelsCheckBox(); break;
        case 12: _t->handleLineTypeButtonGroup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerArrayVisualizerWidget::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerArrayVisualizerWidget::evaluateVariableExpression)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerArrayVisualizerWidget::*)(int , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerArrayVisualizerWidget::evaluateMemoryExpression)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerArrayVisualizerWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerArrayVisualizerWidget.data,
    qt_meta_data_SeerArrayVisualizerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerArrayVisualizerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerArrayVisualizerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerArrayVisualizerWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerArrayVisualizerWidgetForm"))
        return static_cast< Ui::SeerArrayVisualizerWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerArrayVisualizerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SeerArrayVisualizerWidget::evaluateVariableExpression(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SeerArrayVisualizerWidget::evaluateMemoryExpression(int _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
