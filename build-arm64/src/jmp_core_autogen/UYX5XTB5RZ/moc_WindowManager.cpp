/****************************************************************************
** Meta object code from reading C++ file 'WindowManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ui/WindowManager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN13WindowManagerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13WindowManagerE = QtMocHelpers::stringData(
    "WindowManager",
    "fullScreenSwitched",
    "",
    "toggleFullscreen",
    "onVisibilityChanged",
    "QWindow::Visibility",
    "visibility",
    "onScreenAdded",
    "QScreen*",
    "screen",
    "onScreenRemoved",
    "onScreenGeometryChanged",
    "geometry",
    "onScreenDpiChanged",
    "dpi",
    "updateMainSectionSettings",
    "QVariantMap",
    "values",
    "updateWindowState",
    "saveGeo",
    "saveGeometrySlot",
    "onZoomFactorChanged",
    "setAlwaysOnTop",
    "enable",
    "isAlwaysOnTop",
    "toggleAlwaysOnTop",
    "isWayland",
    "setFullScreen",
    "isFullScreen",
    "setCursorVisibility",
    "visible",
    "raiseWindow"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13WindowManagerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  134,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  135,    2, 0x0a,    2 /* Public */,
       4,    1,  136,    2, 0x08,    3 /* Private */,
       7,    1,  139,    2, 0x08,    5 /* Private */,
      10,    1,  142,    2, 0x08,    7 /* Private */,
      11,    1,  145,    2, 0x08,    9 /* Private */,
      13,    1,  148,    2, 0x08,   11 /* Private */,
      15,    1,  151,    2, 0x08,   13 /* Private */,
      18,    1,  154,    2, 0x08,   15 /* Private */,
      18,    0,  157,    2, 0x28,   17 /* Private | MethodCloned */,
      20,    0,  158,    2, 0x08,   18 /* Private */,
      21,    0,  159,    2, 0x08,   19 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      22,    1,  160,    2, 0x02,   20 /* Public */,
      24,    0,  163,    2, 0x102,   22 /* Public | MethodIsConst  */,
      25,    0,  164,    2, 0x02,   23 /* Public */,
      26,    0,  165,    2, 0x102,   24 /* Public | MethodIsConst  */,
      27,    1,  166,    2, 0x02,   25 /* Public */,
      28,    0,  169,    2, 0x102,   27 /* Public | MethodIsConst  */,
      29,    1,  170,    2, 0x02,   28 /* Public */,
      31,    0,  173,    2, 0x02,   30 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QRect,   12,
    QMetaType::Void, QMetaType::QReal,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WindowManager::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_meta_stringdata_ZN13WindowManagerE.offsetsAndSizes,
    qt_meta_data_ZN13WindowManagerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13WindowManagerE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WindowManager, std::true_type>,
        // method 'fullScreenSwitched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleFullscreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWindow::Visibility, std::false_type>,
        // method 'onScreenAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScreen *, std::false_type>,
        // method 'onScreenRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScreen *, std::false_type>,
        // method 'onScreenGeometryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        // method 'onScreenDpiChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'updateMainSectionSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'updateWindowState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateWindowState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveGeometrySlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onZoomFactorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAlwaysOnTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isAlwaysOnTop'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toggleAlwaysOnTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isWayland'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFullScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isFullScreen'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCursorVisibility'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'raiseWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fullScreenSwitched(); break;
        case 1: _t->toggleFullscreen(); break;
        case 2: _t->onVisibilityChanged((*reinterpret_cast< std::add_pointer_t<QWindow::Visibility>>(_a[1]))); break;
        case 3: _t->onScreenAdded((*reinterpret_cast< std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 4: _t->onScreenRemoved((*reinterpret_cast< std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 5: _t->onScreenGeometryChanged((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 6: _t->onScreenDpiChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 7: _t->updateMainSectionSettings((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 8: _t->updateWindowState((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->updateWindowState(); break;
        case 10: _t->saveGeometrySlot(); break;
        case 11: _t->onZoomFactorChanged(); break;
        case 12: _t->setAlwaysOnTop((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: { bool _r = _t->isAlwaysOnTop();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->toggleAlwaysOnTop(); break;
        case 15: { bool _r = _t->isWayland();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->setFullScreen((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: { bool _r = _t->isFullScreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setCursorVisibility((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->raiseWindow(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (WindowManager::*)();
            if (_q_method_type _q_method = &WindowManager::fullScreenSwitched; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *WindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13WindowManagerE.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int WindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void WindowManager::fullScreenSwitched()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
