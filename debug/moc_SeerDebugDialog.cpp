/****************************************************************************
** Meta object code from reading C++ file 'SeerDebugDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseDebug/SeerDebugDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerDebugDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerDebugDialog_t {
    QByteArrayData data[9];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerDebugDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerDebugDialog_t qt_meta_stringdata_SeerDebugDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SeerDebugDialog"
QT_MOC_LITERAL(1, 16, 30), // "handleExecutableNameToolButton"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 42), // "handleExecutableWorkingDirect..."
QT_MOC_LITERAL(4, 91, 39), // "handleLoadBreakpointsFilename..."
QT_MOC_LITERAL(5, 131, 32), // "handleLoadCoreFilenameToolButton"
QT_MOC_LITERAL(6, 164, 26), // "handleProgramPidToolButton"
QT_MOC_LITERAL(7, 191, 20), // "handleRunModeChanged"
QT_MOC_LITERAL(8, 212, 2) // "id"

    },
    "SeerDebugDialog\0handleExecutableNameToolButton\0"
    "\0handleExecutableWorkingDirectoryToolButton\0"
    "handleLoadBreakpointsFilenameToolButton\0"
    "handleLoadCoreFilenameToolButton\0"
    "handleProgramPidToolButton\0"
    "handleRunModeChanged\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerDebugDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    1,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void SeerDebugDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerDebugDialog *_t = static_cast<SeerDebugDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleExecutableNameToolButton(); break;
        case 1: _t->handleExecutableWorkingDirectoryToolButton(); break;
        case 2: _t->handleLoadBreakpointsFilenameToolButton(); break;
        case 3: _t->handleLoadCoreFilenameToolButton(); break;
        case 4: _t->handleProgramPidToolButton(); break;
        case 5: _t->handleRunModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerDebugDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SeerDebugDialog.data,
    qt_meta_data_SeerDebugDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerDebugDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerDebugDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerDebugDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerDebugDialogForm"))
        return static_cast< Ui::SeerDebugDialogForm*>(this);
    return QDialog::qt_metacast(_clname);
}

int SeerDebugDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
