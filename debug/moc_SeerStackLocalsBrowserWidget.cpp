/****************************************************************************
** Meta object code from reading C++ file 'SeerStackLocalsBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Stack/SeerStackLocalsBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerStackLocalsBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerStackLocalsBrowserWidget_t {
    QByteArrayData data[13];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerStackLocalsBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerStackLocalsBrowserWidget_t qt_meta_stringdata_SeerStackLocalsBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SeerStackLocalsBrowserWidget"
QT_MOC_LITERAL(1, 29, 18), // "refreshStackLocals"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 10), // "handleText"
QT_MOC_LITERAL(4, 60, 4), // "text"
QT_MOC_LITERAL(5, 65, 26), // "handleStoppingPointReached"
QT_MOC_LITERAL(6, 92, 7), // "refresh"
QT_MOC_LITERAL(7, 100, 18), // "handleItemExpanded"
QT_MOC_LITERAL(8, 119, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 136, 4), // "item"
QT_MOC_LITERAL(10, 141, 19), // "handleItemCollapsed"
QT_MOC_LITERAL(11, 161, 17), // "handleItemEntered"
QT_MOC_LITERAL(12, 179, 6) // "column"

    },
    "SeerStackLocalsBrowserWidget\0"
    "refreshStackLocals\0\0handleText\0text\0"
    "handleStoppingPointReached\0refresh\0"
    "handleItemExpanded\0QTreeWidgetItem*\0"
    "item\0handleItemCollapsed\0handleItemEntered\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerStackLocalsBrowserWidget[] = {

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
       3,    1,   50,    2, 0x0a /* Public */,
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x09 /* Protected */,
      10,    1,   58,    2, 0x09 /* Protected */,
      11,    2,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   12,

       0        // eod
};

void SeerStackLocalsBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerStackLocalsBrowserWidget *_t = static_cast<SeerStackLocalsBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshStackLocals(); break;
        case 1: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleStoppingPointReached(); break;
        case 3: _t->refresh(); break;
        case 4: _t->handleItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->handleItemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->handleItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerStackLocalsBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerStackLocalsBrowserWidget::refreshStackLocals)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerStackLocalsBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerStackLocalsBrowserWidget.data,
    qt_meta_data_SeerStackLocalsBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerStackLocalsBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerStackLocalsBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerStackLocalsBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerStackLocalsBrowserWidgetForm"))
        return static_cast< Ui::SeerStackLocalsBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerStackLocalsBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SeerStackLocalsBrowserWidget::refreshStackLocals()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
