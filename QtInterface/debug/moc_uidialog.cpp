/****************************************************************************
** Meta object code from reading C++ file 'uidialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../uidialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uidialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_uiDialog_t {
    QByteArrayData data[13];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_uiDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_uiDialog_t qt_meta_stringdata_uiDialog = {
    {
QT_MOC_LITERAL(0, 0, 8), // "uiDialog"
QT_MOC_LITERAL(1, 9, 22), // "on_tableView_activated"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 45, 5), // "index"
QT_MOC_LITERAL(5, 51, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(6, 72, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(7, 99, 20), // "on_tableView_entered"
QT_MOC_LITERAL(8, 120, 28), // "on_tableView_iconSizeChanged"
QT_MOC_LITERAL(9, 149, 4), // "size"
QT_MOC_LITERAL(10, 154, 20), // "on_tableView_pressed"
QT_MOC_LITERAL(11, 175, 28), // "on_tableView_viewportEntered"
QT_MOC_LITERAL(12, 204, 9) // "loadTable"

    },
    "uiDialog\0on_tableView_activated\0\0"
    "QModelIndex\0index\0on_tableView_clicked\0"
    "on_tableView_doubleClicked\0"
    "on_tableView_entered\0on_tableView_iconSizeChanged\0"
    "size\0on_tableView_pressed\0"
    "on_tableView_viewportEntered\0loadTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_uiDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       6,    1,   60,    2, 0x08 /* Private */,
       7,    1,   63,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QSize,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void uiDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        uiDialog *_t = static_cast<uiDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_tableView_entered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_tableView_iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 5: _t->on_tableView_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_tableView_viewportEntered(); break;
        case 7: _t->loadTable(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject uiDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_uiDialog.data,
    qt_meta_data_uiDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *uiDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *uiDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_uiDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int uiDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
