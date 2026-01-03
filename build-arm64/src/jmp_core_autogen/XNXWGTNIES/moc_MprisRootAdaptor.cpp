/****************************************************************************
** Meta object code from reading C++ file 'MprisRootAdaptor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/mpris/MprisRootAdaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MprisRootAdaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16MprisRootAdaptorE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN16MprisRootAdaptorE = QtMocHelpers::stringData(
    "MprisRootAdaptor",
    "D-Bus Interface",
    "org.mpris.MediaPlayer2",
    "Raise",
    "",
    "Quit",
    "CanQuit",
    "CanRaise",
    "CanSetFullscreen",
    "Fullscreen",
    "HasTrackList",
    "Identity",
    "DesktopEntry",
    "SupportedUriSchemes",
    "SupportedMimeTypes"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN16MprisRootAdaptorE[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       9,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   28,    4, 0x0a,   10 /* Public */,
       5,    0,   29,    4, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       6, QMetaType::Bool, 0x00015001, uint(-1), 0,
       7, QMetaType::Bool, 0x00015001, uint(-1), 0,
       8, QMetaType::Bool, 0x00015001, uint(-1), 0,
       9, QMetaType::Bool, 0x00015103, uint(-1), 0,
      10, QMetaType::Bool, 0x00015001, uint(-1), 0,
      11, QMetaType::QString, 0x00015001, uint(-1), 0,
      12, QMetaType::QString, 0x00015001, uint(-1), 0,
      13, QMetaType::QStringList, 0x00015001, uint(-1), 0,
      14, QMetaType::QStringList, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MprisRootAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_ZN16MprisRootAdaptorE.offsetsAndSizes,
    qt_meta_data_ZN16MprisRootAdaptorE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN16MprisRootAdaptorE_t,
        // property 'CanQuit'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanRaise'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanSetFullscreen'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'Fullscreen'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'HasTrackList'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'Identity'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'DesktopEntry'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'SupportedUriSchemes'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'SupportedMimeTypes'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MprisRootAdaptor, std::true_type>,
        // method 'Raise'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Quit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MprisRootAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MprisRootAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Raise(); break;
        case 1: _t->Quit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canQuit(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canRaise(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canSetFullscreen(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->fullscreen(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasTrackList(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->identity(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->desktopEntry(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->supportedUriSchemes(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->supportedMimeTypes(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setFullscreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MprisRootAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisRootAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN16MprisRootAdaptorE.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int MprisRootAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
