/****************************************************************************
** Meta object code from reading C++ file 'SeerThreadFramesBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Thread/SeerThreadFramesBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerThreadFramesBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerThreadFramesBrowserWidget_t {
    QByteArrayData data[18];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerThreadFramesBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerThreadFramesBrowserWidget_t qt_meta_stringdata_SeerThreadFramesBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "SeerThreadFramesBrowserWidget"
QT_MOC_LITERAL(1, 30, 19), // "refreshThreadFrames"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "selectedFile"
QT_MOC_LITERAL(4, 64, 4), // "file"
QT_MOC_LITERAL(5, 69, 8), // "fullname"
QT_MOC_LITERAL(6, 78, 6), // "lineno"
QT_MOC_LITERAL(7, 85, 13), // "selectedFrame"
QT_MOC_LITERAL(8, 99, 7), // "frameno"
QT_MOC_LITERAL(9, 107, 10), // "handleText"
QT_MOC_LITERAL(10, 118, 4), // "text"
QT_MOC_LITERAL(11, 123, 26), // "handleStoppingPointReached"
QT_MOC_LITERAL(12, 150, 7), // "refresh"
QT_MOC_LITERAL(13, 158, 23), // "handleItemDoubleClicked"
QT_MOC_LITERAL(14, 182, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 199, 4), // "item"
QT_MOC_LITERAL(16, 204, 6), // "column"
QT_MOC_LITERAL(17, 211, 17) // "handleItemEntered"

    },
    "SeerThreadFramesBrowserWidget\0"
    "refreshThreadFrames\0\0selectedFile\0"
    "file\0fullname\0lineno\0selectedFrame\0"
    "frameno\0handleText\0text\0"
    "handleStoppingPointReached\0refresh\0"
    "handleItemDoubleClicked\0QTreeWidgetItem*\0"
    "item\0column\0handleItemEntered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerThreadFramesBrowserWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    3,   55,    2, 0x06 /* Public */,
       7,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   65,    2, 0x0a /* Public */,
      11,    0,   68,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x0a /* Public */,
      13,    2,   70,    2, 0x09 /* Protected */,
      17,    2,   75,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,

       0        // eod
};

void SeerThreadFramesBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerThreadFramesBrowserWidget *_t = static_cast<SeerThreadFramesBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshThreadFrames(); break;
        case 1: _t->selectedFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->selectedFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->handleStoppingPointReached(); break;
        case 5: _t->refresh(); break;
        case 6: _t->handleItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->handleItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerThreadFramesBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerThreadFramesBrowserWidget::refreshThreadFrames)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerThreadFramesBrowserWidget::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerThreadFramesBrowserWidget::selectedFile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SeerThreadFramesBrowserWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerThreadFramesBrowserWidget::selectedFrame)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerThreadFramesBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerThreadFramesBrowserWidget.data,
    qt_meta_data_SeerThreadFramesBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerThreadFramesBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerThreadFramesBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerThreadFramesBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerThreadFramesBrowserWidgetForm"))
        return static_cast< Ui::SeerThreadFramesBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerThreadFramesBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SeerThreadFramesBrowserWidget::refreshThreadFrames()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SeerThreadFramesBrowserWidget::selectedFile(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SeerThreadFramesBrowserWidget::selectedFrame(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
