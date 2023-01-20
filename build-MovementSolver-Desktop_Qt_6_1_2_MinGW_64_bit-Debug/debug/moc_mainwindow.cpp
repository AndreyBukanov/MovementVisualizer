/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MovementSolver/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RuningThread_t {
    const uint offsetsAndSize[10];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_RuningThread_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_RuningThread_t qt_meta_stringdata_RuningThread = {
    {
QT_MOC_LITERAL(0, 12), // "RuningThread"
QT_MOC_LITERAL(13, 4), // "step"
QT_MOC_LITERAL(18, 0), // ""
QT_MOC_LITERAL(19, 5), // "angle"
QT_MOC_LITERAL(25, 5) // "pause"

    },
    "RuningThread\0step\0\0angle\0pause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RuningThread[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   29,    2, 0x0a,    2 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RuningThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RuningThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->step((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->pause(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RuningThread::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RuningThread::step)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RuningThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_RuningThread.offsetsAndSize,
    qt_meta_data_RuningThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_RuningThread_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *RuningThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RuningThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RuningThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int RuningThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RuningThread::step(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[44];
    char stringdata0[550];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 16), // "stopRunnigThread"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 28), // "on_pushButtonCenter_released"
QT_MOC_LITERAL(58, 31), // "on_pushButtonSizeMinus_released"
QT_MOC_LITERAL(90, 30), // "on_pushButtonSizePlus_released"
QT_MOC_LITERAL(121, 38), // "on_doubleSpinBoxPhaseStep_val..."
QT_MOC_LITERAL(160, 4), // "arg1"
QT_MOC_LITERAL(165, 28), // "on_pushButtonRewind_released"
QT_MOC_LITERAL(194, 29), // "on_pushButtonForward_released"
QT_MOC_LITERAL(224, 37), // "on_pushButtonSettingsDefault_..."
QT_MOC_LITERAL(262, 36), // "on_pushButtonSettingsUpdate_r..."
QT_MOC_LITERAL(299, 20), // "on_updateAngleDouble"
QT_MOC_LITERAL(320, 5), // "angle"
QT_MOC_LITERAL(326, 17), // "on_updateAngleInt"
QT_MOC_LITERAL(344, 17), // "on_updatePhaseInt"
QT_MOC_LITERAL(362, 26), // "on_pushButtonPlay_released"
QT_MOC_LITERAL(389, 26), // "on_pushButtonStop_released"
QT_MOC_LITERAL(416, 33), // "on_spinBoxAngleSpeed_valueCha..."
QT_MOC_LITERAL(450, 34), // "on_checkBox_ComEnable_stateCh..."
QT_MOC_LITERAL(485, 30), // "on_pushButton_ComScan_released"
QT_MOC_LITERAL(516, 33) // "on_pushButton_ComConnect_rele..."

    },
    "MainWindow\0stopRunnigThread\0\0"
    "on_pushButtonCenter_released\0"
    "on_pushButtonSizeMinus_released\0"
    "on_pushButtonSizePlus_released\0"
    "on_doubleSpinBoxPhaseStep_valueChanged\0"
    "arg1\0on_pushButtonRewind_released\0"
    "on_pushButtonForward_released\0"
    "on_pushButtonSettingsDefault_released\0"
    "on_pushButtonSettingsUpdate_released\0"
    "on_updateAngleDouble\0angle\0on_updateAngleInt\0"
    "on_updatePhaseInt\0on_pushButtonPlay_released\0"
    "on_pushButtonStop_released\0"
    "on_spinBoxAngleSpeed_valueChanged\0"
    "on_checkBox_ComEnable_stateChanged\0"
    "on_pushButton_ComScan_released\0"
    "on_pushButton_ComConnect_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  123,    2, 0x08,    1 /* Private */,
       4,    0,  124,    2, 0x08,    2 /* Private */,
       5,    0,  125,    2, 0x08,    3 /* Private */,
       6,    1,  126,    2, 0x08,    4 /* Private */,
       8,    0,  129,    2, 0x08,    6 /* Private */,
       9,    0,  130,    2, 0x08,    7 /* Private */,
      10,    0,  131,    2, 0x08,    8 /* Private */,
      11,    0,  132,    2, 0x08,    9 /* Private */,
      12,    1,  133,    2, 0x08,   10 /* Private */,
      14,    1,  136,    2, 0x08,   12 /* Private */,
      15,    1,  139,    2, 0x08,   14 /* Private */,
      16,    0,  142,    2, 0x08,   16 /* Private */,
      17,    0,  143,    2, 0x08,   17 /* Private */,
      18,    1,  144,    2, 0x08,   18 /* Private */,
      19,    1,  147,    2, 0x08,   20 /* Private */,
      20,    0,  150,    2, 0x08,   22 /* Private */,
      21,    0,  151,    2, 0x08,   23 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stopRunnigThread(); break;
        case 1: _t->on_pushButtonCenter_released(); break;
        case 2: _t->on_pushButtonSizeMinus_released(); break;
        case 3: _t->on_pushButtonSizePlus_released(); break;
        case 4: _t->on_doubleSpinBoxPhaseStep_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_pushButtonRewind_released(); break;
        case 6: _t->on_pushButtonForward_released(); break;
        case 7: _t->on_pushButtonSettingsDefault_released(); break;
        case 8: _t->on_pushButtonSettingsUpdate_released(); break;
        case 9: _t->on_updateAngleDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_updateAngleInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_updatePhaseInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_pushButtonPlay_released(); break;
        case 13: _t->on_pushButtonStop_released(); break;
        case 14: _t->on_spinBoxAngleSpeed_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_checkBox_ComEnable_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_pushButton_ComScan_released(); break;
        case 17: _t->on_pushButton_ComConnect_released(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stopRunnigThread)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::stopRunnigThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
