/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialerApp/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[397];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 36), // "on_actionOpen_Address_Book_tr..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(4, 70, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 82, 5), // "index"
QT_MOC_LITERAL(6, 88, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(7, 112, 18), // "on_Button1_clicked"
QT_MOC_LITERAL(8, 131, 26), // "on_backspaceButton_clicked"
QT_MOC_LITERAL(9, 158, 18), // "on_Button2_clicked"
QT_MOC_LITERAL(10, 177, 18), // "on_Button3_clicked"
QT_MOC_LITERAL(11, 196, 18), // "on_Button5_clicked"
QT_MOC_LITERAL(12, 215, 18), // "on_Button4_clicked"
QT_MOC_LITERAL(13, 234, 18), // "on_Button6_clicked"
QT_MOC_LITERAL(14, 253, 18), // "on_Button7_clicked"
QT_MOC_LITERAL(15, 272, 18), // "on_Button8_clicked"
QT_MOC_LITERAL(16, 291, 18), // "on_Button9_clicked"
QT_MOC_LITERAL(17, 310, 21), // "on_ButtonStar_clicked"
QT_MOC_LITERAL(18, 332, 18), // "on_Button0_clicked"
QT_MOC_LITERAL(19, 351, 22), // "on_ButtonPound_clicked"
QT_MOC_LITERAL(20, 374, 22) // "on_ButtonPhone_clicked"

    },
    "MainWindow\0on_actionOpen_Address_Book_triggered\0"
    "\0on_tableView_clicked\0QModelIndex\0"
    "index\0on_actionExit_triggered\0"
    "on_Button1_clicked\0on_backspaceButton_clicked\0"
    "on_Button2_clicked\0on_Button3_clicked\0"
    "on_Button5_clicked\0on_Button4_clicked\0"
    "on_Button6_clicked\0on_Button7_clicked\0"
    "on_Button8_clicked\0on_Button9_clicked\0"
    "on_ButtonStar_clicked\0on_Button0_clicked\0"
    "on_ButtonPound_clicked\0on_ButtonPhone_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    1,  100,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionOpen_Address_Book_triggered(); break;
        case 1: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_actionExit_triggered(); break;
        case 3: _t->on_Button1_clicked(); break;
        case 4: _t->on_backspaceButton_clicked(); break;
        case 5: _t->on_Button2_clicked(); break;
        case 6: _t->on_Button3_clicked(); break;
        case 7: _t->on_Button5_clicked(); break;
        case 8: _t->on_Button4_clicked(); break;
        case 9: _t->on_Button6_clicked(); break;
        case 10: _t->on_Button7_clicked(); break;
        case 11: _t->on_Button8_clicked(); break;
        case 12: _t->on_Button9_clicked(); break;
        case 13: _t->on_ButtonStar_clicked(); break;
        case 14: _t->on_Button0_clicked(); break;
        case 15: _t->on_ButtonPound_clicked(); break;
        case 16: _t->on_ButtonPhone_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
