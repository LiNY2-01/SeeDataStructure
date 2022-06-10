/****************************************************************************
** Meta object code from reading C++ file 'SeerVariableBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Variable/SeerVariableBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerVariableBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerVariableBrowserWidget_t {
    QByteArrayData data[19];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerVariableBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerVariableBrowserWidget_t qt_meta_stringdata_SeerVariableBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "SeerVariableBrowserWidget"
QT_MOC_LITERAL(1, 26, 19), // "refreshVariableList"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 2), // "id"
QT_MOC_LITERAL(4, 50, 17), // "variableNameRegex"
QT_MOC_LITERAL(5, 68, 17), // "variableTypeRegex"
QT_MOC_LITERAL(6, 86, 12), // "selectedFile"
QT_MOC_LITERAL(7, 99, 4), // "file"
QT_MOC_LITERAL(8, 104, 8), // "fullname"
QT_MOC_LITERAL(9, 113, 6), // "lineno"
QT_MOC_LITERAL(10, 120, 10), // "handleText"
QT_MOC_LITERAL(11, 131, 4), // "text"
QT_MOC_LITERAL(12, 136, 7), // "refresh"
QT_MOC_LITERAL(13, 144, 20), // "handleSearchLineEdit"
QT_MOC_LITERAL(14, 165, 23), // "handleItemDoubleClicked"
QT_MOC_LITERAL(15, 189, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(16, 206, 4), // "item"
QT_MOC_LITERAL(17, 211, 6), // "column"
QT_MOC_LITERAL(18, 218, 17) // "handleItemEntered"

    },
    "SeerVariableBrowserWidget\0refreshVariableList\0"
    "\0id\0variableNameRegex\0variableTypeRegex\0"
    "selectedFile\0file\0fullname\0lineno\0"
    "handleText\0text\0refresh\0handleSearchLineEdit\0"
    "handleItemDoubleClicked\0QTreeWidgetItem*\0"
    "item\0column\0handleItemEntered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerVariableBrowserWidget[] = {

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
       1,    3,   49,    2, 0x06 /* Public */,
       6,    3,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   63,    2, 0x0a /* Public */,
      12,    0,   66,    2, 0x0a /* Public */,
      13,    0,   67,    2, 0x09 /* Protected */,
      14,    2,   68,    2, 0x09 /* Protected */,
      18,    2,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,   16,   17,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,   16,   17,

       0        // eod
};

void SeerVariableBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerVariableBrowserWidget *_t = static_cast<SeerVariableBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshVariableList((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
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
            using _t = void (SeerVariableBrowserWidget::*)(int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerVariableBrowserWidget::refreshVariableList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeerVariableBrowserWidget::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeerVariableBrowserWidget::selectedFile)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerVariableBrowserWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerVariableBrowserWidget.data,
    qt_meta_data_SeerVariableBrowserWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerVariableBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerVariableBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerVariableBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerVariableBrowserWidgetForm"))
        return static_cast< Ui::SeerVariableBrowserWidgetForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerVariableBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SeerVariableBrowserWidget::refreshVariableList(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SeerVariableBrowserWidget::selectedFile(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
