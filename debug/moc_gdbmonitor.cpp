/****************************************************************************
** Meta object code from reading C++ file 'gdbmonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GdbCtrl/gdbmonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gdbmonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GdbMonitor_t {
    QByteArrayData data[24];
    char stringdata0[373];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GdbMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GdbMonitor_t qt_meta_stringdata_GdbMonitor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GdbMonitor"
QT_MOC_LITERAL(1, 11, 13), // "allTextOutput"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "text"
QT_MOC_LITERAL(4, 31, 15), // "tildeTextOutput"
QT_MOC_LITERAL(5, 47, 15), // "equalTextOutput"
QT_MOC_LITERAL(6, 63, 16), // "astrixTextOutput"
QT_MOC_LITERAL(7, 80, 15), // "caretTextOutput"
QT_MOC_LITERAL(8, 96, 19), // "ampersandTextOutput"
QT_MOC_LITERAL(9, 116, 10), // "textOutput"
QT_MOC_LITERAL(10, 127, 19), // "handleErrorOccurred"
QT_MOC_LITERAL(11, 147, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(12, 170, 5), // "error"
QT_MOC_LITERAL(13, 176, 14), // "handleFinished"
QT_MOC_LITERAL(14, 191, 8), // "exitCode"
QT_MOC_LITERAL(15, 200, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(16, 221, 10), // "exitStatus"
QT_MOC_LITERAL(17, 232, 28), // "handleReadyReadStandardError"
QT_MOC_LITERAL(18, 261, 29), // "handleReadyReadStandardOutput"
QT_MOC_LITERAL(19, 291, 13), // "handleStarted"
QT_MOC_LITERAL(20, 305, 18), // "handleStateChanged"
QT_MOC_LITERAL(21, 324, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(22, 347, 8), // "newState"
QT_MOC_LITERAL(23, 356, 16) // "handleTextOutput"

    },
    "GdbMonitor\0allTextOutput\0\0text\0"
    "tildeTextOutput\0equalTextOutput\0"
    "astrixTextOutput\0caretTextOutput\0"
    "ampersandTextOutput\0textOutput\0"
    "handleErrorOccurred\0QProcess::ProcessError\0"
    "error\0handleFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "handleReadyReadStandardError\0"
    "handleReadyReadStandardOutput\0"
    "handleStarted\0handleStateChanged\0"
    "QProcess::ProcessState\0newState\0"
    "handleTextOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GdbMonitor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       7,    1,   96,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  105,    2, 0x0a /* Public */,
      13,    2,  108,    2, 0x0a /* Public */,
      17,    0,  113,    2, 0x0a /* Public */,
      18,    0,  114,    2, 0x0a /* Public */,
      19,    0,  115,    2, 0x0a /* Public */,
      20,    1,  116,    2, 0x0a /* Public */,
      23,    1,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,   14,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void GdbMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GdbMonitor *_t = static_cast<GdbMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->allTextOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tildeTextOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->equalTextOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->astrixTextOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->caretTextOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->ampersandTextOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->textOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->handleErrorOccurred((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 8: _t->handleFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 9: _t->handleReadyReadStandardError(); break;
        case 10: _t->handleReadyReadStandardOutput(); break;
        case 11: _t->handleStarted(); break;
        case 12: _t->handleStateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 13: _t->handleTextOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GdbMonitor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbMonitor::allTextOutput)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GdbMonitor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbMonitor::tildeTextOutput)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GdbMonitor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbMonitor::equalTextOutput)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GdbMonitor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbMonitor::astrixTextOutput)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GdbMonitor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbMonitor::caretTextOutput)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GdbMonitor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbMonitor::ampersandTextOutput)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GdbMonitor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbMonitor::textOutput)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GdbMonitor::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GdbMonitor.data,
    qt_meta_data_GdbMonitor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GdbMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GdbMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GdbMonitor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GdbMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void GdbMonitor::allTextOutput(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GdbMonitor::tildeTextOutput(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GdbMonitor::equalTextOutput(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GdbMonitor::astrixTextOutput(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GdbMonitor::caretTextOutput(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GdbMonitor::ampersandTextOutput(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GdbMonitor::textOutput(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
