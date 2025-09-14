/****************************************************************************
** Meta object code from reading C++ file 'wargame.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/wargame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wargame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WarGame_t {
    const uint offsetsAndSize[52];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_WarGame_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_WarGame_t qt_meta_stringdata_WarGame = {
    {
QT_MOC_LITERAL(0, 7), // "WarGame"
QT_MOC_LITERAL(8, 14), // "helpWarClicked"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 14), // "newPlayerIsSet"
QT_MOC_LITERAL(39, 11), // "PlayerNode*"
QT_MOC_LITERAL(51, 10), // "playerNode"
QT_MOC_LITERAL(62, 16), // "newObstacleIsSet"
QT_MOC_LITERAL(79, 13), // "ObstacleNode*"
QT_MOC_LITERAL(93, 12), // "obstacleNode"
QT_MOC_LITERAL(106, 16), // "newFunctionIsSet"
QT_MOC_LITERAL(123, 13), // "FunctionNode*"
QT_MOC_LITERAL(137, 12), // "functionNode"
QT_MOC_LITERAL(150, 19), // "setCoordinateSystem"
QT_MOC_LITERAL(170, 13), // "cleanUpCanvas"
QT_MOC_LITERAL(184, 9), // "setUpGame"
QT_MOC_LITERAL(194, 15), // "setUpDataString"
QT_MOC_LITERAL(210, 9), // "gameEnded"
QT_MOC_LITERAL(220, 10), // "winnerName"
QT_MOC_LITERAL(231, 26), // "on_help_war_button_clicked"
QT_MOC_LITERAL(258, 26), // "on_quit_war_button_clicked"
QT_MOC_LITERAL(285, 10), // "inputTaken"
QT_MOC_LITERAL(296, 12), // "fireFunction"
QT_MOC_LITERAL(309, 11), // "std::string"
QT_MOC_LITERAL(321, 7), // "fString"
QT_MOC_LITERAL(329, 21), // "clientReceivedMessage"
QT_MOC_LITERAL(351, 3) // "msg"

    },
    "WarGame\0helpWarClicked\0\0newPlayerIsSet\0"
    "PlayerNode*\0playerNode\0newObstacleIsSet\0"
    "ObstacleNode*\0obstacleNode\0newFunctionIsSet\0"
    "FunctionNode*\0functionNode\0"
    "setCoordinateSystem\0cleanUpCanvas\0"
    "setUpGame\0setUpDataString\0gameEnded\0"
    "winnerName\0on_help_war_button_clicked\0"
    "on_quit_war_button_clicked\0inputTaken\0"
    "fireFunction\0std::string\0fString\0"
    "clientReceivedMessage\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WarGame[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,
       3,    1,   93,    2, 0x06,    2 /* Public */,
       6,    1,   96,    2, 0x06,    4 /* Public */,
       9,    1,   99,    2, 0x06,    6 /* Public */,
      12,    0,  102,    2, 0x06,    8 /* Public */,
      13,    0,  103,    2, 0x06,    9 /* Public */,
      14,    1,  104,    2, 0x06,   10 /* Public */,
      16,    1,  107,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      18,    0,  110,    2, 0x08,   14 /* Private */,
      19,    0,  111,    2, 0x08,   15 /* Private */,
      20,    0,  112,    2, 0x08,   16 /* Private */,
      21,    1,  113,    2, 0x08,   17 /* Private */,
      24,    1,  116,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

void WarGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WarGame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->helpWarClicked(); break;
        case 1: _t->newPlayerIsSet((*reinterpret_cast< std::add_pointer_t<PlayerNode*>>(_a[1]))); break;
        case 2: _t->newObstacleIsSet((*reinterpret_cast< std::add_pointer_t<ObstacleNode*>>(_a[1]))); break;
        case 3: _t->newFunctionIsSet((*reinterpret_cast< std::add_pointer_t<FunctionNode*>>(_a[1]))); break;
        case 4: _t->setCoordinateSystem(); break;
        case 5: _t->cleanUpCanvas(); break;
        case 6: _t->setUpGame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->gameEnded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_help_war_button_clicked(); break;
        case 9: _t->on_quit_war_button_clicked(); break;
        case 10: _t->inputTaken(); break;
        case 11: _t->fireFunction((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 12: _t->clientReceivedMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WarGame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarGame::helpWarClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WarGame::*)(PlayerNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarGame::newPlayerIsSet)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WarGame::*)(ObstacleNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarGame::newObstacleIsSet)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WarGame::*)(FunctionNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarGame::newFunctionIsSet)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WarGame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarGame::setCoordinateSystem)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WarGame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarGame::cleanUpCanvas)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WarGame::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarGame::setUpGame)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WarGame::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarGame::gameEnded)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject WarGame::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_WarGame.offsetsAndSize,
    qt_meta_data_WarGame,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WarGame_t
, QtPrivate::TypeAndForceComplete<WarGame, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<PlayerNode *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ObstacleNode *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<FunctionNode *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *WarGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WarGame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WarGame.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WarGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void WarGame::helpWarClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WarGame::newPlayerIsSet(PlayerNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WarGame::newObstacleIsSet(ObstacleNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WarGame::newFunctionIsSet(FunctionNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WarGame::setCoordinateSystem()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WarGame::cleanUpCanvas()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WarGame::setUpGame(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WarGame::gameEnded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
