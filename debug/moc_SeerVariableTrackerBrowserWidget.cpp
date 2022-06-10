/****************************************************************************
** Meta object code from reading C++ file 'SeerVariableTrackerBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Variable/SeerVariableTrackerBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerVariableTrackerBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerVariableTrackerBrowserWidget_t {
    QByteArrayData data[20];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerVariableTrackerBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerVariableTrackerBrowserWidget_t qt_meta_stringdata_SeerVariableTrackerBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "SeerVariableTrackerBrowserWidget"
QT_MOC_LITERAL(1, 33, 27), // "refreshVariableTrackerNames"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 28), // "refreshVariableTrackerValues"
QT_MOC_LITERAL(4, 91, 21), // "addVariableExpression"
QT_MOC_LITERAL(5, 113, 10), // "expression"
QT_MOC_LITERAL(6, 124, 25), // "deleteVariableExpressions"
QT_MOC_LITERAL(7, 150, 13), // "expressionids"
QT_MOC_LITERAL(8, 164, 10), // "handleText"
QT_MOC_LITERAL(9, 175, 4), // "text"
QT_MOC_LITERAL(10, 180, 26), // "handleStoppingPointReached"
QT_MOC_LITERAL(11, 207, 7), // "refresh"
QT_MOC_LITERAL(12, 215, 13), // "refreshValues"
QT_MOC_LITERAL(13, 229, 17), // "handleAddLineEdit"
QT_MOC_LITERAL(14, 247, 22), // "handleDeleteToolButton"
QT_MOC_LITERAL(15, 270, 25), // "handleDeleteAllToolButton"
QT_MOC_LITERAL(16, 296, 17), // "handleItemEntered"
QT_MOC_LITERAL(17, 314, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(18, 331, 4), // "item"
QT_MOC_LITERAL(19, 336, 6) // "column"

    },
    "SeerVariableTrackerBrowserWidget\0"
    "refreshVariableTrackerNames\0\0"
    "refreshVariableTrackerValues\0"
    "addVariableExpression\0expression\0"
    "deleteVariableExpressions\0expressionids\0"
    "handleText\0text\0handleStoppingPointReached\0"
    "refresh\0refreshValues\0handleAddLineEdit\0"
    "handleDeleteToolButton\0handleDeleteAllToolButton\0"
    "handleItemEntered\0QTreeWidgetItem*\0"
    "item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerVariableTrackerBrowserWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   82,    2, 0x0a /* Public */,
      10,    0,   85,    2, 0x0a /* Public */,
      11,    0,   86,    2, 0x0a /* Public */,
      12,    0,   87,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    2,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,   18,   19,

       0        // eod
};

void SeerVariableTrackerBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerVariableTrackerBrowserWidget *_t = static_cast<SeerVariableTrackerBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshVariableTrackerNames(); break;
        case 1: _t->refreshVariableTrackerValues(); break;
        case 2: _t->addVariableExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->deleteVariableExpressions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handleStoppingPointReached(); break;
        case 6: _t->refresh(); break;
        case 7: _t->refreshValues(); break;
        case 8: _t->handleAddLineEdit(); break;
        case 9: _t->handleDeleteToolButton(); break;
        case 10: _t->handleDeleteAllToolButton(); break;
        case 11: _t->handleItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerVariableTrackerBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerVariableTrackerBrowserWidget::refreshVariableTrackerNames)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerVariableTrackerBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerVariableTrackerBrowserWidget::refreshVariableTrackerValues)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SeerVariableTrackerBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerVariableTrackerBrowserWidget::addVariableExpression)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SeerVariableTrackerBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerVariableTrackerBrowserWidget::deleteVariableExpressions)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerVariableTrackerBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerVariableTrackerBrowserWidget.data,
    qt_meta_data_SeerVariableTrackerBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerVariableTrackerBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerVariableTrackerBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerVariableTrackerBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerVariableTrackerBrowserWidgetForm"))
        return static_cast< Ui::SeerVariableTrackerBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerVariableTrackerBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SeerVariableTrackerBrowserWidget::refreshVariableTrackerNames()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SeerVariableTrackerBrowserWidget::refreshVariableTrackerValues()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SeerVariableTrackerBrowserWidget::addVariableExpression(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SeerVariableTrackerBrowserWidget::deleteVariableExpressions(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
