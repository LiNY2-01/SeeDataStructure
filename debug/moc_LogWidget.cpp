/****************************************************************************
** Meta object code from reading C++ file 'LogWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseDebug/LogWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogWidget_t {
    QByteArrayData data[11];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogWidget_t qt_meta_stringdata_LogWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LogWidget"
QT_MOC_LITERAL(1, 10, 17), // "logEnabledChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "flag"
QT_MOC_LITERAL(4, 34, 10), // "handleText"
QT_MOC_LITERAL(5, 45, 4), // "text"
QT_MOC_LITERAL(6, 50, 17), // "handleClearButton"
QT_MOC_LITERAL(7, 68, 17), // "handlePrintButton"
QT_MOC_LITERAL(8, 86, 16), // "handleSaveButton"
QT_MOC_LITERAL(9, 103, 22), // "handleWrapTextCheckBox"
QT_MOC_LITERAL(10, 126, 20) // "handleEnableCheckBox"

    },
    "LogWidget\0logEnabledChanged\0\0flag\0"
    "handleText\0text\0handleClearButton\0"
    "handlePrintButton\0handleSaveButton\0"
    "handleWrapTextCheckBox\0handleEnableCheckBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogWidget[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogWidget *_t = static_cast<LogWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleClearButton(); break;
        case 3: _t->handlePrintButton(); break;
        case 4: _t->handleSaveButton(); break;
        case 5: _t->handleWrapTextCheckBox(); break;
        case 6: _t->handleEnableCheckBox(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogWidget::logEnabledChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_LogWidget.data,
    qt_meta_data_LogWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void LogWidget::logEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
