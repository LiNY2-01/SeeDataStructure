/****************************************************************************
** Meta object code from reading C++ file 'SeerTypeBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Editor/SeerTypeBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerTypeBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerTypeBrowserWidget_t {
    QByteArrayData data[18];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerTypeBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerTypeBrowserWidget_t qt_meta_stringdata_SeerTypeBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SeerTypeBrowserWidget"
QT_MOC_LITERAL(1, 22, 15), // "refreshTypeList"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 2), // "id"
QT_MOC_LITERAL(4, 42, 9), // "typeRegex"
QT_MOC_LITERAL(5, 52, 12), // "selectedFile"
QT_MOC_LITERAL(6, 65, 4), // "file"
QT_MOC_LITERAL(7, 70, 8), // "fullname"
QT_MOC_LITERAL(8, 79, 6), // "lineno"
QT_MOC_LITERAL(9, 86, 10), // "handleText"
QT_MOC_LITERAL(10, 97, 4), // "text"
QT_MOC_LITERAL(11, 102, 7), // "refresh"
QT_MOC_LITERAL(12, 110, 20), // "handleSearchLineEdit"
QT_MOC_LITERAL(13, 131, 23), // "handleItemDoubleClicked"
QT_MOC_LITERAL(14, 155, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 172, 4), // "item"
QT_MOC_LITERAL(16, 177, 6), // "column"
QT_MOC_LITERAL(17, 184, 17) // "handleItemEntered"

    },
    "SeerTypeBrowserWidget\0refreshTypeList\0"
    "\0id\0typeRegex\0selectedFile\0file\0"
    "fullname\0lineno\0handleText\0text\0refresh\0"
    "handleSearchLineEdit\0handleItemDoubleClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "handleItemEntered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerTypeBrowserWidget[] = {

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
       1,    2,   49,    2, 0x06 /* Public */,
       5,    3,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   61,    2, 0x0a /* Public */,
      11,    0,   64,    2, 0x0a /* Public */,
      12,    0,   65,    2, 0x09 /* Protected */,
      13,    2,   66,    2, 0x09 /* Protected */,
      17,    2,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,

       0        // eod
};

void SeerTypeBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerTypeBrowserWidget *_t = static_cast<SeerTypeBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshTypeList((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->selectedFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->refresh(); break;
        case 4: _t->handleSearchLineEdit(); break;
        case 5: _t->handleItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->handleItemEntered((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeerTypeBrowserWidget::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerTypeBrowserWidget::refreshTypeList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerTypeBrowserWidget::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerTypeBrowserWidget::selectedFile)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerTypeBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerTypeBrowserWidget.data,
    qt_meta_data_SeerTypeBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerTypeBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerTypeBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerTypeBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerTypeBrowserWidgetForm"))
        return static_cast< Ui::SeerTypeBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerTypeBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SeerTypeBrowserWidget::refreshTypeList(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SeerTypeBrowserWidget::selectedFile(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
