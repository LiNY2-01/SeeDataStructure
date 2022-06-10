/****************************************************************************
** Meta object code from reading C++ file 'SeerEditorConfigPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cfgpage/SeerEditorConfigPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeerEditorConfigPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeerEditorConfigPage_t {
    QByteArrayData data[9];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeerEditorConfigPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeerEditorConfigPage_t qt_meta_stringdata_SeerEditorConfigPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SeerEditorConfigPage"
QT_MOC_LITERAL(1, 21, 21), // "handleFontSizeChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "text"
QT_MOC_LITERAL(4, 49, 17), // "handleFontChanged"
QT_MOC_LITERAL(5, 67, 4), // "font"
QT_MOC_LITERAL(6, 72, 16), // "handleFontDialog"
QT_MOC_LITERAL(7, 89, 24), // "handleHighlighterChanged"
QT_MOC_LITERAL(8, 114, 20) // "handleEnabledChanged"

    },
    "SeerEditorConfigPage\0handleFontSizeChanged\0"
    "\0text\0handleFontChanged\0font\0"
    "handleFontDialog\0handleHighlighterChanged\0"
    "handleEnabledChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeerEditorConfigPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x09 /* Protected */,
       4,    1,   42,    2, 0x09 /* Protected */,
       6,    0,   45,    2, 0x09 /* Protected */,
       7,    0,   46,    2, 0x09 /* Protected */,
       8,    0,   47,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QFont,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SeerEditorConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeerEditorConfigPage *_t = static_cast<SeerEditorConfigPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleFontSizeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->handleFontDialog(); break;
        case 3: _t->handleHighlighterChanged(); break;
        case 4: _t->handleEnabledChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeerEditorConfigPage::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SeerEditorConfigPage.data,
    qt_meta_data_SeerEditorConfigPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeerEditorConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeerEditorConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeerEditorConfigPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SeerEditorConfigPage"))
        return static_cast< Ui::SeerEditorConfigPage*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeerEditorConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
