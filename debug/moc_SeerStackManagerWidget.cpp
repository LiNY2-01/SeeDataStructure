/****************************************************************************
** Meta object code from reading C++ file 'SeerStackManagerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Stack/SeerStackManagerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerStackManagerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerStackManagerWidget_t {
    QByteArrayData data[8];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerStackManagerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerStackManagerWidget_t qt_meta_stringdata_SeerStackManagerWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SeerStackManagerWidget"
QT_MOC_LITERAL(1, 23, 19), // "refreshThreadFrames"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 10), // "handleText"
QT_MOC_LITERAL(4, 55, 4), // "text"
QT_MOC_LITERAL(5, 60, 26), // "handleStoppingPointReached"
QT_MOC_LITERAL(6, 87, 7), // "refresh"
QT_MOC_LITERAL(7, 95, 30) // "handleRefreshToolButtonClicked"

    },
    "SeerStackManagerWidget\0refreshThreadFrames\0"
    "\0handleText\0text\0handleStoppingPointReached\0"
    "refresh\0handleRefreshToolButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerStackManagerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SeerStackManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerStackManagerWidget *_t = static_cast<SeerStackManagerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshThreadFrames(); break;
        case 1: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleStoppingPointReached(); break;
        case 3: _t->refresh(); break;
        case 4: _t->handleRefreshToolButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerStackManagerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerStackManagerWidget::refreshThreadFrames)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerStackManagerWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerStackManagerWidget.data,
    qt_meta_data_SeerStackManagerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerStackManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerStackManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerStackManagerWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerStackManagerWidgetForm"))
        return static_cast< Ui::SeerStackManagerWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerStackManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SeerStackManagerWidget::refreshThreadFrames()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
