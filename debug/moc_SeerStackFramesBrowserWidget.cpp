/****************************************************************************
** Meta object code from reading C++ file 'SeerStackFramesBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Stack/SeerStackFramesBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerStackFramesBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerStackFramesBrowserWidget_t {
    QByteArrayData data[18];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerStackFramesBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerStackFramesBrowserWidget_t qt_meta_stringdata_SeerStackFramesBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SeerStackFramesBrowserWidget"
QT_MOC_LITERAL(1, 29, 18), // "refreshStackFrames"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 12), // "selectedFile"
QT_MOC_LITERAL(4, 62, 4), // "file"
QT_MOC_LITERAL(5, 67, 8), // "fullname"
QT_MOC_LITERAL(6, 76, 6), // "lineno"
QT_MOC_LITERAL(7, 83, 13), // "selectedFrame"
QT_MOC_LITERAL(8, 97, 7), // "frameno"
QT_MOC_LITERAL(9, 105, 10), // "handleText"
QT_MOC_LITERAL(10, 116, 4), // "text"
QT_MOC_LITERAL(11, 121, 26), // "handleStoppingPointReached"
QT_MOC_LITERAL(12, 148, 7), // "refresh"
QT_MOC_LITERAL(13, 156, 23), // "handleItemDoubleClicked"
QT_MOC_LITERAL(14, 180, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 197, 4), // "item"
QT_MOC_LITERAL(16, 202, 6), // "column"
QT_MOC_LITERAL(17, 209, 17) // "handleItemEntered"

    },
    "SeerStackFramesBrowserWidget\0"
    "refreshStackFrames\0\0selectedFile\0file\0"
    "fullname\0lineno\0selectedFrame\0frameno\0"
    "handleText\0text\0handleStoppingPointReached\0"
    "refresh\0handleItemDoubleClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "handleItemEntered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerStackFramesBrowserWidget[] = {

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

void SeerStackFramesBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerStackFramesBrowserWidget *_t = static_cast<SeerStackFramesBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshStackFrames(); break;
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
            using _t = void (SeerStackFramesBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerStackFramesBrowserWidget::refreshStackFrames)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerStackFramesBrowserWidget::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerStackFramesBrowserWidget::selectedFile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SeerStackFramesBrowserWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerStackFramesBrowserWidget::selectedFrame)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerStackFramesBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerStackFramesBrowserWidget.data,
    qt_meta_data_SeerStackFramesBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerStackFramesBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerStackFramesBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerStackFramesBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerStackFramesBrowserWidgetForm"))
        return static_cast< Ui::SeerStackFramesBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerStackFramesBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SeerStackFramesBrowserWidget::refreshStackFrames()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SeerStackFramesBrowserWidget::selectedFile(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SeerStackFramesBrowserWidget::selectedFrame(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
