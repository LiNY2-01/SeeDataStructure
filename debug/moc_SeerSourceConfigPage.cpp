/****************************************************************************
** Meta object code from reading C++ file 'SeerSourceConfigPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cfgpage/SeerSourceConfigPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerSourceConfigPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerSourceConfigPage_t {
    QByteArrayData data[6];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerSourceConfigPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerSourceConfigPage_t qt_meta_stringdata_SeerSourceConfigPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SeerSourceConfigPage"
QT_MOC_LITERAL(1, 21, 22), // "handleAddButtonClicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 21), // "handleUpButtonClicked"
QT_MOC_LITERAL(4, 67, 23), // "handleDownButtonClicked"
QT_MOC_LITERAL(5, 91, 25) // "handleDeleteButtonClicked"

    },
    "SeerSourceConfigPage\0handleAddButtonClicked\0"
    "\0handleUpButtonClicked\0handleDownButtonClicked\0"
    "handleDeleteButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerSourceConfigPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SeerSourceConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerSourceConfigPage *_t = static_cast<SeerSourceConfigPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleAddButtonClicked(); break;
        case 1: _t->handleUpButtonClicked(); break;
        case 2: _t->handleDownButtonClicked(); break;
        case 3: _t->handleDeleteButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SeerSourceConfigPage::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerSourceConfigPage.data,
    qt_meta_data_SeerSourceConfigPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerSourceConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerSourceConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerSourceConfigPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerSourceConfigPage"))
        return static_cast< Ui::SeerSourceConfigPage*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerSourceConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
