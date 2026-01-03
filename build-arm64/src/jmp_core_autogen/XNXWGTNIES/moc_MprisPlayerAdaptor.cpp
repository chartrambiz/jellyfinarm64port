/****************************************************************************
** Meta object code from reading C++ file 'MprisPlayerAdaptor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/mpris/MprisPlayerAdaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MprisPlayerAdaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18MprisPlayerAdaptorE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN18MprisPlayerAdaptorE = QtMocHelpers::stringData(
    "MprisPlayerAdaptor",
    "D-Bus Interface",
    "org.mpris.MediaPlayer2.Player",
    "Seeked",
    "",
    "position",
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
    "OpenUri",
    "uri",
    "PlaybackStatus",
    "LoopStatus",
    "Rate",
    "Shuffle",
    "Metadata",
    "QVariantMap",
    "Volume",
    "Position",
    "MinimumRate",
    "MaximumRate",
    "CanGoNext",
    "CanGoPrevious",
    "CanPlay",
    "CanPause",
    "CanSeek",
    "CanControl"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN18MprisPlayerAdaptorE[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
      15,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   76,    4, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   79,    4, 0x0a,   18 /* Public */,
       7,    0,   80,    4, 0x0a,   19 /* Public */,
       8,    0,   81,    4, 0x0a,   20 /* Public */,
       9,    0,   82,    4, 0x0a,   21 /* Public */,
      10,    0,   83,    4, 0x0a,   22 /* Public */,
      11,    0,   84,    4, 0x0a,   23 /* Public */,
      12,    1,   85,    4, 0x0a,   24 /* Public */,
      14,    2,   88,    4, 0x0a,   26 /* Public */,
      17,    1,   93,    4, 0x0a,   29 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::LongLong,   16,    5,
    QMetaType::Void, QMetaType::QString,   18,

 // properties: name, type, flags, notifyId, revision
      19, QMetaType::QString, 0x00015001, uint(-1), 0,
      20, QMetaType::QString, 0x00015103, uint(-1), 0,
      21, QMetaType::Double, 0x00015103, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,
      23, 0x80000000 | 24, 0x00015009, uint(-1), 0,
      25, QMetaType::Double, 0x00015103, uint(-1), 0,
      26, QMetaType::LongLong, 0x00015001, uint(-1), 0,
      27, QMetaType::Double, 0x00015001, uint(-1), 0,
      28, QMetaType::Double, 0x00015001, uint(-1), 0,
      29, QMetaType::Bool, 0x00015001, uint(-1), 0,
      30, QMetaType::Bool, 0x00015001, uint(-1), 0,
      31, QMetaType::Bool, 0x00015001, uint(-1), 0,
      32, QMetaType::Bool, 0x00015001, uint(-1), 0,
      33, QMetaType::Bool, 0x00015001, uint(-1), 0,
      34, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MprisPlayerAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_ZN18MprisPlayerAdaptorE.offsetsAndSizes,
    qt_meta_data_ZN18MprisPlayerAdaptorE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN18MprisPlayerAdaptorE_t,
        // property 'PlaybackStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'LoopStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'Rate'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'Shuffle'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'Metadata'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'Volume'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'Position'
        QtPrivate::TypeAndForceComplete<qint64, std::true_type>,
        // property 'MinimumRate'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'MaximumRate'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'CanGoNext'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanGoPrevious'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanPlay'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanPause'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanSeek'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanControl'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MprisPlayerAdaptor, std::true_type>,
        // method 'Seeked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MprisPlayerAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MprisPlayerAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Seeked((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->Next(); break;
        case 2: _t->Previous(); break;
        case 3: _t->Pause(); break;
        case 4: _t->PlayPause(); break;
        case 5: _t->Stop(); break;
        case 6: _t->Play(); break;
        case 7: _t->Seek((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 8: _t->SetPosition((*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 9: _t->OpenUri((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
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
            using _q_method_type = void (MprisPlayerAdaptor::*)(qint64 );
            if (_q_method_type _q_method = &MprisPlayerAdaptor::Seeked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->playbackStatus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->loopStatus(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->rate(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->shuffle(); break;
        case 4: *reinterpret_cast< QVariantMap*>(_v) = _t->metadata(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        case 6: *reinterpret_cast< qint64*>(_v) = _t->position(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->minimumRate(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->maximumRate(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->canGoNext(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->canGoPrevious(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->canPlay(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->canPause(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->canSeek(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->canControl(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setLoopStatus(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setRate(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setShuffle(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MprisPlayerAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisPlayerAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN18MprisPlayerAdaptorE.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int MprisPlayerAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MprisPlayerAdaptor::Seeked(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
