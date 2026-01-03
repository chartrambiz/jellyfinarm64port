/****************************************************************************
** Meta object code from reading C++ file 'MprisComponent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/mpris/MprisComponent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MprisComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14MprisComponentE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14MprisComponentE = QtMocHelpers::stringData(
    "MprisComponent",
    "propertiesChanged",
    "",
    "interface",
    "QVariantMap",
    "changedProperties",
    "invalidatedProperties",
    "Raise",
    "Quit",
    "Next",
    "Previous",
    "Pause",
    "PlayPause",
    "Stop",
    "Play",
    "Seek",
    "offset",
    "SetPosition",
    "QDBusObjectPath",
    "trackId",
    "position",
    "OpenUri",
    "uri",
    "setVolume",
    "volume",
    "setLoopStatus",
    "value",
    "setRate",
    "setShuffle",
    "onPlayerPlaying",
    "onPlayerPaused",
    "onPlayerStopped",
    "onPlayerFinished",
    "onPlayerStateChanged",
    "PlayerComponent::State",
    "newState",
    "oldState",
    "onPlayerPositionUpdate",
    "onPlayerDurationChanged",
    "duration",
    "onPlayerMetaData",
    "metadata",
    "onPlayerVolumeChanged",
    "onShuffleModeChanged",
    "shuffleEnabled",
    "onRepeatModeChanged",
    "repeatMode",
    "onAlbumArtReady",
    "imageData",
    "mimeType",
    "onAlbumArtUnavailable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14MprisComponentE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,  188,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  195,    2, 0x0a,    5 /* Public */,
       8,    0,  196,    2, 0x0a,    6 /* Public */,
       9,    0,  197,    2, 0x0a,    7 /* Public */,
      10,    0,  198,    2, 0x0a,    8 /* Public */,
      11,    0,  199,    2, 0x0a,    9 /* Public */,
      12,    0,  200,    2, 0x0a,   10 /* Public */,
      13,    0,  201,    2, 0x0a,   11 /* Public */,
      14,    0,  202,    2, 0x0a,   12 /* Public */,
      15,    1,  203,    2, 0x0a,   13 /* Public */,
      17,    2,  206,    2, 0x0a,   15 /* Public */,
      21,    1,  211,    2, 0x0a,   18 /* Public */,
      23,    1,  214,    2, 0x0a,   20 /* Public */,
      25,    1,  217,    2, 0x0a,   22 /* Public */,
      27,    1,  220,    2, 0x0a,   24 /* Public */,
      28,    1,  223,    2, 0x0a,   26 /* Public */,
      29,    0,  226,    2, 0x08,   28 /* Private */,
      30,    0,  227,    2, 0x08,   29 /* Private */,
      31,    0,  228,    2, 0x08,   30 /* Private */,
      32,    0,  229,    2, 0x08,   31 /* Private */,
      33,    2,  230,    2, 0x08,   32 /* Private */,
      37,    1,  235,    2, 0x08,   35 /* Private */,
      38,    1,  238,    2, 0x08,   37 /* Private */,
      40,    1,  241,    2, 0x08,   39 /* Private */,
      42,    0,  244,    2, 0x08,   41 /* Private */,
      43,    1,  245,    2, 0x08,   42 /* Private */,
      45,    1,  248,    2, 0x08,   44 /* Private */,
      47,    2,  251,    2, 0x08,   46 /* Private */,
      50,    0,  256,    2, 0x08,   49 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::QStringList,    3,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   16,
    QMetaType::Void, 0x80000000 | 18, QMetaType::LongLong,   19,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Double,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 34,   35,   36,
    QMetaType::Void, QMetaType::ULongLong,   20,
    QMetaType::Void, QMetaType::LongLong,   39,
    QMetaType::Void, 0x80000000 | 4,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,   48,   49,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MprisComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_meta_stringdata_ZN14MprisComponentE.offsetsAndSizes,
    qt_meta_data_ZN14MprisComponentE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14MprisComponentE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MprisComponent, std::true_type>,
        // method 'propertiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'Raise'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Quit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Previous'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Pause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Seek'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'SetPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'OpenUri'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setLoopStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setRate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setShuffle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onPlayerPlaying'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlayerPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlayerStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlayerFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlayerStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PlayerComponent::State, std::false_type>,
        QtPrivate::TypeAndForceComplete<PlayerComponent::State, std::false_type>,
        // method 'onPlayerPositionUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'onPlayerDurationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'onPlayerMetaData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'onPlayerVolumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShuffleModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onRepeatModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onAlbumArtReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onAlbumArtUnavailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MprisComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MprisComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3]))); break;
        case 1: _t->Raise(); break;
        case 2: _t->Quit(); break;
        case 3: _t->Next(); break;
        case 4: _t->Previous(); break;
        case 5: _t->Pause(); break;
        case 6: _t->PlayPause(); break;
        case 7: _t->Stop(); break;
        case 8: _t->Play(); break;
        case 9: _t->Seek((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 10: _t->SetPosition((*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 11: _t->OpenUri((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setVolume((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->setLoopStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->setRate((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->setShuffle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onPlayerPlaying(); break;
        case 17: _t->onPlayerPaused(); break;
        case 18: _t->onPlayerStopped(); break;
        case 19: _t->onPlayerFinished(); break;
        case 20: _t->onPlayerStateChanged((*reinterpret_cast< std::add_pointer_t<PlayerComponent::State>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<PlayerComponent::State>>(_a[2]))); break;
        case 21: _t->onPlayerPositionUpdate((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 22: _t->onPlayerDurationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 23: _t->onPlayerMetaData((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 24: _t->onPlayerVolumeChanged(); break;
        case 25: _t->onShuffleModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->onRepeatModeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->onAlbumArtReady((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 28: _t->onAlbumArtUnavailable(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MprisComponent::*)(const QString & , const QVariantMap & , const QStringList & );
            if (_q_method_type _q_method = &MprisComponent::propertiesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MprisComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14MprisComponentE.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int MprisComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void MprisComponent::propertiesChanged(const QString & _t1, const QVariantMap & _t2, const QStringList & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
