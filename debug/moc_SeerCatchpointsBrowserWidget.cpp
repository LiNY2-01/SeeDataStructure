/****************************************************************************
** Meta object code from reading C++ file 'SeerCatchpointsBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseDebug/SeerCatchpointsBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerCatchpointsBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerCatchpointsBrowserWidget_t {
    QByteArrayData data[17];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerCatchpointsBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerCatchpointsBrowserWidget_t qt_meta_stringdata_SeerCatchpointsBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SeerCatchpointsBrowserWidget"
QT_MOC_LITERAL(1, 29, 22), // "refreshCatchpointsList"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 17), // "deleteCatchpoints"
QT_MOC_LITERAL(4, 71, 11), // "catchpoints"
QT_MOC_LITERAL(5, 83, 17), // "enableCatchpoints"
QT_MOC_LITERAL(6, 101, 18), // "disableCatchpoints"
QT_MOC_LITERAL(7, 120, 16), // "insertCatchpoint"
QT_MOC_LITERAL(8, 137, 10), // "catchpoint"
QT_MOC_LITERAL(9, 148, 10), // "handleText"
QT_MOC_LITERAL(10, 159, 4), // "text"
QT_MOC_LITERAL(11, 164, 26), // "handleStoppingPointReached"
QT_MOC_LITERAL(12, 191, 23), // "handleRefreshToolButton"
QT_MOC_LITERAL(13, 215, 19), // "handleAddToolButton"
QT_MOC_LITERAL(14, 235, 22), // "handleDeleteToolButton"
QT_MOC_LITERAL(15, 258, 22), // "handleEnableToolButton"
QT_MOC_LITERAL(16, 281, 23) // "handleDisableToolButton"

    },
    "SeerCatchpointsBrowserWidget\0"
    "refreshCatchpointsList\0\0deleteCatchpoints\0"
    "catchpoints\0enableCatchpoints\0"
    "disableCatchpoints\0insertCatchpoint\0"
    "catchpoint\0handleText\0text\0"
    "handleStoppingPointReached\0"
    "handleRefreshToolButton\0handleAddToolButton\0"
    "handleDeleteToolButton\0handleEnableToolButton\0"
    "handleDisableToolButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerCatchpointsBrowserWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       6,    1,   81,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   87,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SeerCatchpointsBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerCatchpointsBrowserWidget *_t = static_cast<SeerCatchpointsBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshCatchpointsList(); break;
        case 1: _t->deleteCatchpoints((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->enableCatchpoints((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->disableCatchpoints((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->insertCatchpoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->handleStoppingPointReached(); break;
        case 7: _t->handleRefreshToolButton(); break;
        case 8: _t->handleAddToolButton(); break;
        case 9: _t->handleDeleteToolButton(); break;
        case 10: _t->handleEnableToolButton(); break;
        case 11: _t->handleDisableToolButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerCatchpointsBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerCatchpointsBrowserWidget::refreshCatchpointsList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerCatchpointsBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerCatchpointsBrowserWidget::deleteCatchpoints)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SeerCatchpointsBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerCatchpointsBrowserWidget::enableCatchpoints)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SeerCatchpointsBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerCatchpointsBrowserWidget::disableCatchpoints)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SeerCatchpointsBrowserWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerCatchpointsBrowserWidget::insertCatchpoint)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerCatchpointsBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerCatchpointsBrowserWidget.data,
    qt_meta_data_SeerCatchpointsBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerCatchpointsBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerCatchpointsBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerCatchpointsBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerCatchpointsBrowserWidgetForm"))
        return static_cast< Ui::SeerCatchpointsBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerCatchpointsBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SeerCatchpointsBrowserWidget::refreshCatchpointsList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SeerCatchpointsBrowserWidget::deleteCatchpoints(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SeerCatchpointsBrowserWidget::enableCatchpoints(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SeerCatchpointsBrowserWidget::disableCatchpoints(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SeerCatchpointsBrowserWidget::insertCatchpoint(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
