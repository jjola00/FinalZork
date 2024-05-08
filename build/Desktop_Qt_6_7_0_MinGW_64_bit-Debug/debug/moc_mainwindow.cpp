/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "currentRoomChanged",
    "",
    "on_mapButton_clicked",
    "on_upButton_clicked",
    "on_rightButton_clicked",
    "on_downButton_clicked",
    "on_leftButton_clicked",
    "on_closeMapButton_clicked",
    "updateRoomDescription",
    "updateBackground",
    "itemNotify",
    "takeItem",
    "on_itemTakeButton_clicked",
    "setUI",
    "hideUI",
    "showUI",
    "on_addToInventoryButton_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    0,  117,    2, 0x08,    8 /* Private */,
      10,    0,  118,    2, 0x08,    9 /* Private */,
      11,    0,  119,    2, 0x08,   10 /* Private */,
      12,    0,  120,    2, 0x08,   11 /* Private */,
      13,    0,  121,    2, 0x08,   12 /* Private */,
      14,    0,  122,    2, 0x08,   13 /* Private */,
      15,    0,  123,    2, 0x08,   14 /* Private */,
      16,    0,  124,    2, 0x08,   15 /* Private */,
      17,    0,  125,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'currentRoomChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mapButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_upButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rightButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_downButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_leftButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closeMapButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRoomDescription'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBackground'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemNotify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'takeItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_itemTakeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hideUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addToInventoryButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentRoomChanged(); break;
        case 1: _t->on_mapButton_clicked(); break;
        case 2: _t->on_upButton_clicked(); break;
        case 3: _t->on_rightButton_clicked(); break;
        case 4: _t->on_downButton_clicked(); break;
        case 5: _t->on_leftButton_clicked(); break;
        case 6: _t->on_closeMapButton_clicked(); break;
        case 7: _t->updateRoomDescription(); break;
        case 8: _t->updateBackground(); break;
        case 9: _t->itemNotify(); break;
        case 10: _t->takeItem(); break;
        case 11: _t->on_itemTakeButton_clicked(); break;
        case 12: _t->setUI(); break;
        case 13: _t->hideUI(); break;
        case 14: _t->showUI(); break;
        case 15: _t->on_addToInventoryButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::currentRoomChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::currentRoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
