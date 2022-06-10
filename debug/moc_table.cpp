/****************************************************************************
** Meta object code from reading C++ file 'table.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../viz/table.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'table.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Table_t {
    QByteArrayData data[18];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Table_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Table_t qt_meta_stringdata_Table = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Table"
QT_MOC_LITERAL(1, 6, 9), // "var_exist"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 1), // "s"
QT_MOC_LITERAL(4, 19, 8), // "add_tree"
QT_MOC_LITERAL(5, 28, 8), // "del_tree"
QT_MOC_LITERAL(6, 37, 26), // "evaluateVariableExpression"
QT_MOC_LITERAL(7, 64, 12), // "expressionid"
QT_MOC_LITERAL(8, 77, 10), // "expression"
QT_MOC_LITERAL(9, 88, 24), // "evaluateMemoryExpression"
QT_MOC_LITERAL(10, 113, 7), // "address"
QT_MOC_LITERAL(11, 121, 5), // "count"
QT_MOC_LITERAL(12, 127, 7), // "del_var"
QT_MOC_LITERAL(13, 135, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 147, 9), // "add_table"
QT_MOC_LITERAL(15, 157, 8), // "var_name"
QT_MOC_LITERAL(16, 166, 10), // "handleText"
QT_MOC_LITERAL(17, 177, 4) // "text"

    },
    "Table\0var_exist\0\0s\0add_tree\0del_tree\0"
    "evaluateVariableExpression\0expressionid\0"
    "expression\0evaluateMemoryExpression\0"
    "address\0count\0del_var\0QModelIndex\0"
    "add_table\0var_name\0handleText\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Table[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    2,   63,    2, 0x06 /* Public */,
       9,    3,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   75,    2, 0x08 /* Private */,
      14,    1,   78,    2, 0x0a /* Public */,
      16,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,    7,   10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void Table::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Table *_t = static_cast<Table *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->var_exist((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->add_tree((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->del_tree((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->evaluateVariableExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->evaluateMemoryExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->del_var((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 6: _t->add_table((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Table::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Table::var_exist)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Table::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Table::add_tree)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Table::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Table::del_tree)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Table::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Table::evaluateVariableExpression)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Table::*)(int , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Table::evaluateMemoryExpression)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Table::staticMetaObject = { {
    &QTableView::staticMetaObject,
    qt_meta_stringdata_Table.data,
    qt_meta_data_Table,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Table::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Table::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Table.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int Table::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
void Table::var_exist(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Table::add_tree(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Table::del_tree(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Table::evaluateVariableExpression(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Table::evaluateMemoryExpression(int _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
