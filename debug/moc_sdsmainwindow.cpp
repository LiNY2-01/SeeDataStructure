/****************************************************************************
** Meta object code from reading C++ file 'sdsmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sdsmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sdsmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sdsMainWindow_t {
    QByteArrayData data[20];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sdsMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sdsMainWindow_t qt_meta_stringdata_sdsMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "sdsMainWindow"
QT_MOC_LITERAL(1, 14, 15), // "handleFileDebug"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "handleFileArguments"
QT_MOC_LITERAL(4, 51, 14), // "handleFileQuit"
QT_MOC_LITERAL(5, 66, 26), // "handleViewMemoryVisualizer"
QT_MOC_LITERAL(6, 93, 25), // "handleViewArrayVisualizer"
QT_MOC_LITERAL(7, 119, 23), // "handleViewConsoleNormal"
QT_MOC_LITERAL(8, 143, 23), // "handleViewConsoleHidden"
QT_MOC_LITERAL(9, 167, 26), // "handleViewConsoleMinimized"
QT_MOC_LITERAL(10, 194, 27), // "handleSettingsConfiguration"
QT_MOC_LITERAL(11, 222, 31), // "handleSettingsSaveConfiguration"
QT_MOC_LITERAL(12, 254, 15), // "handleHelpAbout"
QT_MOC_LITERAL(13, 270, 10), // "handleText"
QT_MOC_LITERAL(14, 281, 4), // "text"
QT_MOC_LITERAL(15, 286, 22), // "handleRunStatusChanged"
QT_MOC_LITERAL(16, 309, 33), // "SeerRunStatusIndicator::RunSt..."
QT_MOC_LITERAL(17, 343, 6), // "status"
QT_MOC_LITERAL(18, 350, 23), // "handleChangeWindowTitle"
QT_MOC_LITERAL(19, 374, 5) // "title"

    },
    "sdsMainWindow\0handleFileDebug\0\0"
    "handleFileArguments\0handleFileQuit\0"
    "handleViewMemoryVisualizer\0"
    "handleViewArrayVisualizer\0"
    "handleViewConsoleNormal\0handleViewConsoleHidden\0"
    "handleViewConsoleMinimized\0"
    "handleSettingsConfiguration\0"
    "handleSettingsSaveConfiguration\0"
    "handleHelpAbout\0handleText\0text\0"
    "handleRunStatusChanged\0"
    "SeerRunStatusIndicator::RunStatus\0"
    "status\0handleChangeWindowTitle\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sdsMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      15,    1,   98,    2, 0x08 /* Private */,
      18,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void sdsMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sdsMainWindow *_t = static_cast<sdsMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleFileDebug(); break;
        case 1: _t->handleFileArguments(); break;
        case 2: _t->handleFileQuit(); break;
        case 3: _t->handleViewMemoryVisualizer(); break;
        case 4: _t->handleViewArrayVisualizer(); break;
        case 5: _t->handleViewConsoleNormal(); break;
        case 6: _t->handleViewConsoleHidden(); break;
        case 7: _t->handleViewConsoleMinimized(); break;
        case 8: _t->handleSettingsConfiguration(); break;
        case 9: _t->handleSettingsSaveConfiguration(); break;
        case 10: _t->handleHelpAbout(); break;
        case 11: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->handleRunStatusChanged((*reinterpret_cast< SeerRunStatusIndicator::RunStatus(*)>(_a[1]))); break;
        case 13: _t->handleChangeWindowTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sdsMainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_sdsMainWindow.data,
    qt_meta_data_sdsMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sdsMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sdsMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sdsMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int sdsMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
