/****************************************************************************
** Meta object code from reading C++ file 'SeerSourceBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaseDebug/SeerSourceBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerSourceBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerSourceBrowserWidget_t {
    QByteArrayData data[16];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerSourceBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerSourceBrowserWidget_t qt_meta_stringdata_SeerSourceBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SeerSourceBrowserWidget"
QT_MOC_LITERAL(1, 24, 17), // "refreshSourceList"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "selectedFile"
QT_MOC_LITERAL(4, 56, 4), // "file"
QT_MOC_LITERAL(5, 61, 8), // "fullname"
QT_MOC_LITERAL(6, 70, 6), // "lineno"
QT_MOC_LITERAL(7, 77, 10), // "handleText"
QT_MOC_LITERAL(8, 88, 4), // "text"
QT_MOC_LITERAL(9, 93, 7), // "refresh"
QT_MOC_LITERAL(10, 101, 20), // "handleSearchLineEdit"
QT_MOC_LITERAL(11, 122, 23), // "handleItemDoubleClicked"
QT_MOC_LITERAL(12, 146, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 163, 4), // "item"
QT_MOC_LITERAL(14, 168, 6), // "column"
QT_MOC_LITERAL(15, 175, 17) // "handleItemEntered"

    },
    "SeerSourceBrowserWidget\0refreshSourceList\0"
    "\0selectedFile\0file\0fullname\0lineno\0"
    "handleText\0text\0refresh\0handleSearchLineEdit\0"
    "handleItemDoubleClicked\0QTreeWidgetItem*\0"
    "item\0column\0handleItemEntered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerSourceBrowserWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    3,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   57,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x09 /* Protected */,
      11,    2,   64,    2, 0x09 /* Protected */,
      15,    2,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,

       0        // eod
};

void SeerSourceBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerSourceBrowserWidget *_t = static_cast<SeerSourceBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshSourceList(); break;
        case 1: _t->selectedFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->refresh(); break;
        case 4: _t->handleSearchLineEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handleItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->handleItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerSourceBrowserWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerSourceBrowserWidget::refreshSourceList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerSourceBrowserWidget::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerSourceBrowserWidget::selectedFile)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerSourceBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerSourceBrowserWidget.data,
    qt_meta_data_SeerSourceBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerSourceBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerSourceBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerSourceBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerSourceBrowserWidgetForm"))
        return static_cast< Ui::SeerSourceBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerSourceBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SeerSourceBrowserWidget::refreshSourceList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SeerSourceBrowserWidget::selectedFile(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
