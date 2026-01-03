/****************************************************************************
** Meta object code from reading C++ file 'PlayerComponent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/player/PlayerComponent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayerComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15PlayerComponentE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15PlayerComponentE = QtMocHelpers::stringData(
    "PlayerComponent",
    "playing",
    "",
    "buffering",
    "percent",
    "paused",
    "finished",
    "canceled",
    "error",
    "msg",
    "stopped",
    "stateChanged",
    "State",
    "newState",
    "oldState",
    "videoPlaybackActive",
    "active",
    "windowVisible",
    "visible",
    "updateDuration",
    "milliseconds",
    "playbackRateChanged",
    "rate",
    "positionUpdate",
    "onVideoRecangleChanged",
    "onMpvEvents",
    "onMetaData",
    "QVariantMap",
    "meta",
    "baseUrl",
    "webPlaylistChanged",
    "QVariantList",
    "playlist",
    "currentItemId",
    "shuffleChanged",
    "enabled",
    "repeatChanged",
    "mode",
    "fullscreenChanged",
    "isFullscreen",
    "rateChanged",
    "queueChanged",
    "canNext",
    "canPrevious",
    "playbackStopped",
    "isNavigating",
    "durationChanged",
    "durationMs",
    "playbackStateChanged",
    "state",
    "positionChanged",
    "positionMs",
    "seekPerformed",
    "metadataChanged",
    "metadata",
    "volumeChanged",
    "volume",
    "updateAudioDeviceList",
    "setAudioConfiguration",
    "setSubtitleConfiguration",
    "setVideoConfiguration",
    "setOtherConfiguration",
    "updateAudioConfiguration",
    "updateSubtitleConfiguration",
    "updateVideoConfiguration",
    "updateConfiguration",
    "handleMpvEvents",
    "onRestoreDisplay",
    "onRefreshRateChange",
    "updateAudioDevice",
    "load",
    "url",
    "options",
    "QVariant",
    "audioStream",
    "subtitleStream",
    "queueMedia",
    "clearQueue",
    "seekTo",
    "ms",
    "stop",
    "streamSwitch",
    "pause",
    "play",
    "notifyShuffleChange",
    "notifyRepeatChange",
    "notifyFullscreenChange",
    "notifyRateChange",
    "notifyQueueChange",
    "notifyPlaybackStop",
    "notifyDurationChange",
    "notifyPlaybackState",
    "notifyPosition",
    "notifySeek",
    "notifyMetadata",
    "notifyVolumeChange",
    "setVolume",
    "setMuted",
    "muted",
    "getAudioDeviceList",
    "setAudioDevice",
    "name",
    "setAudioStream",
    "setSubtitleStream",
    "setAudioDelay",
    "setSubtitleDelay",
    "setVideoOnlyMode",
    "enable",
    "userCommand",
    "command",
    "setVideoRectangle",
    "x",
    "y",
    "w",
    "h",
    "setPlaybackRate",
    "getPosition",
    "getDuration",
    "getWebPlaylist",
    "getCurrentWebPlaylistItemId",
    "setWebPlaylist"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15PlayerComponentE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      29,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  512,    2, 0x06,    1 /* Public */,
       3,    1,  513,    2, 0x06,    2 /* Public */,
       5,    0,  516,    2, 0x06,    4 /* Public */,
       6,    0,  517,    2, 0x06,    5 /* Public */,
       7,    0,  518,    2, 0x06,    6 /* Public */,
       8,    1,  519,    2, 0x06,    7 /* Public */,
      10,    0,  522,    2, 0x06,    9 /* Public */,
      11,    2,  523,    2, 0x06,   10 /* Public */,
      15,    1,  528,    2, 0x06,   13 /* Public */,
      17,    1,  531,    2, 0x06,   15 /* Public */,
      19,    1,  534,    2, 0x06,   17 /* Public */,
      21,    1,  537,    2, 0x06,   19 /* Public */,
      23,    1,  540,    2, 0x06,   21 /* Public */,
      24,    0,  543,    2, 0x06,   23 /* Public */,
      25,    0,  544,    2, 0x06,   24 /* Public */,
      26,    2,  545,    2, 0x06,   25 /* Public */,
      30,    2,  550,    2, 0x06,   28 /* Public */,
      34,    1,  555,    2, 0x06,   31 /* Public */,
      36,    1,  558,    2, 0x06,   33 /* Public */,
      38,    1,  561,    2, 0x06,   35 /* Public */,
      40,    1,  564,    2, 0x06,   37 /* Public */,
      41,    2,  567,    2, 0x06,   39 /* Public */,
      44,    1,  572,    2, 0x06,   42 /* Public */,
      46,    1,  575,    2, 0x06,   44 /* Public */,
      48,    1,  578,    2, 0x06,   46 /* Public */,
      50,    1,  581,    2, 0x06,   48 /* Public */,
      52,    1,  584,    2, 0x06,   50 /* Public */,
      53,    1,  587,    2, 0x06,   52 /* Public */,
      55,    1,  590,    2, 0x06,   54 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      57,    0,  593,    2, 0x0a,   56 /* Public */,
      58,    0,  594,    2, 0x0a,   57 /* Public */,
      59,    0,  595,    2, 0x0a,   58 /* Public */,
      60,    0,  596,    2, 0x0a,   59 /* Public */,
      61,    0,  597,    2, 0x0a,   60 /* Public */,
      62,    0,  598,    2, 0x0a,   61 /* Public */,
      63,    0,  599,    2, 0x0a,   62 /* Public */,
      64,    0,  600,    2, 0x0a,   63 /* Public */,
      65,    0,  601,    2, 0x0a,   64 /* Public */,
      66,    0,  602,    2, 0x08,   65 /* Private */,
      67,    0,  603,    2, 0x08,   66 /* Private */,
      68,    0,  604,    2, 0x08,   67 /* Private */,
      69,    0,  605,    2, 0x08,   68 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      70,    5,  606,    2, 0x02,   69 /* Public */,
      70,    4,  617,    2, 0x22,   75 /* Public | MethodCloned */,
      70,    3,  626,    2, 0x22,   80 /* Public | MethodCloned */,
      76,    5,  633,    2, 0x02,   84 /* Public */,
      77,    0,  644,    2, 0x02,   90 /* Public */,
      78,    1,  645,    2, 0x02,   91 /* Public */,
      80,    0,  648,    2, 0x02,   93 /* Public */,
      81,    0,  649,    2, 0x02,   94 /* Public */,
      82,    0,  650,    2, 0x02,   95 /* Public */,
      83,    0,  651,    2, 0x02,   96 /* Public */,
      84,    1,  652,    2, 0x02,   97 /* Public */,
      85,    1,  655,    2, 0x02,   99 /* Public */,
      86,    1,  658,    2, 0x02,  101 /* Public */,
      87,    1,  661,    2, 0x02,  103 /* Public */,
      88,    2,  664,    2, 0x02,  105 /* Public */,
      89,    1,  669,    2, 0x02,  108 /* Public */,
      90,    1,  672,    2, 0x02,  110 /* Public */,
      91,    1,  675,    2, 0x02,  112 /* Public */,
      92,    1,  678,    2, 0x02,  114 /* Public */,
      93,    1,  681,    2, 0x02,  116 /* Public */,
      94,    1,  684,    2, 0x02,  118 /* Public */,
      95,    1,  687,    2, 0x02,  120 /* Public */,
      96,    1,  690,    2, 0x02,  122 /* Public */,
      56,    0,  693,    2, 0x02,  124 /* Public */,
      97,    1,  694,    2, 0x02,  125 /* Public */,
      98,    0,  697,    2, 0x02,  127 /* Public */,
      99,    0,  698,    2, 0x02,  128 /* Public */,
     100,    1,  699,    2, 0x02,  129 /* Public */,
     102,    1,  702,    2, 0x02,  131 /* Public */,
     103,    1,  705,    2, 0x02,  133 /* Public */,
     104,    1,  708,    2, 0x02,  135 /* Public */,
     105,    1,  711,    2, 0x02,  137 /* Public */,
     106,    1,  714,    2, 0x02,  139 /* Public */,
     108,    1,  717,    2, 0x02,  141 /* Public */,
     110,    4,  720,    2, 0x02,  143 /* Public */,
     115,    1,  729,    2, 0x02,  148 /* Public */,
     116,    0,  732,    2, 0x02,  150 /* Public */,
     117,    0,  733,    2, 0x02,  151 /* Public */,
     118,    0,  734,    2, 0x102,  152 /* Public | MethodIsConst  */,
     119,    0,  735,    2, 0x102,  153 /* Public | MethodIsConst  */,
     120,    2,  736,    2, 0x02,  154 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::ULongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QUrl,   28,   29,
    QMetaType::Void, 0x80000000 | 31, QMetaType::QString,   32,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   42,   43,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::LongLong,   47,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::LongLong,   51,
    QMetaType::Void, QMetaType::LongLong,   51,
    QMetaType::Void, 0x80000000 | 27,   54,
    QMetaType::Void, QMetaType::Double,   56,

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

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 73, 0x80000000 | 73,   71,   72,   54,   74,   75,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 73,   71,   72,   54,   74,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 27, 0x80000000 | 27,   71,   72,   54,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 73, 0x80000000 | 73,   71,   72,   54,   74,   75,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   79,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   42,   43,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::LongLong,   47,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::LongLong,   51,
    QMetaType::Void, QMetaType::LongLong,   51,
    QMetaType::Void, 0x80000000 | 27,   54,
    QMetaType::Void, QMetaType::Double,   56,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,   98,
    QMetaType::Bool,
    0x80000000 | 73,
    QMetaType::Void, QMetaType::QString,  101,
    QMetaType::Void, 0x80000000 | 73,   74,
    QMetaType::Void, 0x80000000 | 73,   75,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::Void, QMetaType::Bool,  107,
    QMetaType::Void, QMetaType::QString,  109,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  111,  112,  113,  114,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::LongLong,
    QMetaType::LongLong,
    0x80000000 | 31,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 31, QMetaType::QString,   32,   33,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlayerComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_meta_stringdata_ZN15PlayerComponentE.offsetsAndSizes,
    qt_meta_data_ZN15PlayerComponentE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15PlayerComponentE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlayerComponent, std::true_type>,
        // method 'playing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buffering'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'paused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'canceled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'stopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<State, std::false_type>,
        QtPrivate::TypeAndForceComplete<State, std::false_type>,
        // method 'videoPlaybackActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'windowVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateDuration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'playbackRateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'positionUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'onVideoRecangleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMpvEvents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMetaData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'webPlaylistChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'shuffleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'repeatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fullscreenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'queueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'playbackStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'playbackStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'seekPerformed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'metadataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'volumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updateAudioDeviceList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAudioConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSubtitleConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setVideoConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setOtherConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateAudioConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateSubtitleConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateVideoConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleMpvEvents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRestoreDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRefreshRateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateAudioDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'queueMedia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'clearQueue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'seekTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'streamSwitch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'notifyShuffleChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'notifyRepeatChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'notifyFullscreenChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'notifyRateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'notifyQueueChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'notifyPlaybackStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'notifyDurationChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'notifyPlaybackState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'notifyPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'notifySeek'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'notifyMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'notifyVolumeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'volume'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'muted'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getAudioDeviceList'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'setAudioDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setAudioStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'setSubtitleStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'setAudioDelay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'setSubtitleDelay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'setVideoOnlyMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'userCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setVideoRectangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setPlaybackRate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getPosition'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'getDuration'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'getWebPlaylist'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'getCurrentWebPlaylistItemId'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setWebPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void PlayerComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlayerComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playing(); break;
        case 1: _t->buffering((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->paused(); break;
        case 3: _t->finished(); break;
        case 4: _t->canceled(); break;
        case 5: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->stopped(); break;
        case 7: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<State>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<State>>(_a[2]))); break;
        case 8: _t->videoPlaybackActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->windowVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->updateDuration((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 11: _t->playbackRateChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->positionUpdate((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 13: _t->onVideoRecangleChanged(); break;
        case 14: _t->onMpvEvents(); break;
        case 15: _t->onMetaData((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 16: _t->webPlaylistChanged((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->shuffleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->repeatChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->fullscreenChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->rateChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 21: _t->queueChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 22: _t->playbackStopped((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 24: _t->playbackStateChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 26: _t->seekPerformed((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 27: _t->metadataChanged((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 28: _t->volumeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 29: _t->updateAudioDeviceList(); break;
        case 30: _t->setAudioConfiguration(); break;
        case 31: _t->setSubtitleConfiguration(); break;
        case 32: _t->setVideoConfiguration(); break;
        case 33: _t->setOtherConfiguration(); break;
        case 34: _t->updateAudioConfiguration(); break;
        case 35: _t->updateSubtitleConfiguration(); break;
        case 36: _t->updateVideoConfiguration(); break;
        case 37: _t->updateConfiguration(); break;
        case 38: _t->handleMpvEvents(); break;
        case 39: _t->onRestoreDisplay(); break;
        case 40: _t->onRefreshRateChange(); break;
        case 41: _t->updateAudioDevice(); break;
        case 42: { bool _r = _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->queueMedia((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[5]))); break;
        case 46: _t->clearQueue(); break;
        case 47: _t->seekTo((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 48: _t->stop(); break;
        case 49: _t->streamSwitch(); break;
        case 50: _t->pause(); break;
        case 51: _t->play(); break;
        case 52: _t->notifyShuffleChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->notifyRepeatChange((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 54: _t->notifyFullscreenChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->notifyRateChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 56: _t->notifyQueueChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 57: _t->notifyPlaybackStop((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 58: _t->notifyDurationChange((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 59: _t->notifyPlaybackState((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 60: _t->notifyPosition((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 61: _t->notifySeek((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 62: _t->notifyMetadata((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 63: _t->notifyVolumeChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 64: _t->setVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 65: { int _r = _t->volume();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 66: _t->setMuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 67: { bool _r = _t->muted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: { QVariant _r = _t->getAudioDeviceList();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setAudioDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 70: _t->setAudioStream((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 71: _t->setSubtitleStream((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 72: _t->setAudioDelay((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 73: _t->setSubtitleDelay((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 74: _t->setVideoOnlyMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 75: _t->userCommand((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 76: _t->setVideoRectangle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 77: _t->setPlaybackRate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 78: { qint64 _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 79: { qint64 _r = _t->getDuration();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 80: { QVariantList _r = _t->getWebPlaylist();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 81: { QString _r = _t->getCurrentWebPlaylistItemId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 82: _t->setWebPlaylist((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (PlayerComponent::*)();
            if (_q_method_type _q_method = &PlayerComponent::playing; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(float );
            if (_q_method_type _q_method = &PlayerComponent::buffering; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)();
            if (_q_method_type _q_method = &PlayerComponent::paused; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)();
            if (_q_method_type _q_method = &PlayerComponent::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)();
            if (_q_method_type _q_method = &PlayerComponent::canceled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(const QString & );
            if (_q_method_type _q_method = &PlayerComponent::error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)();
            if (_q_method_type _q_method = &PlayerComponent::stopped; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(State , State );
            if (_q_method_type _q_method = &PlayerComponent::stateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(bool );
            if (_q_method_type _q_method = &PlayerComponent::videoPlaybackActive; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(bool );
            if (_q_method_type _q_method = &PlayerComponent::windowVisible; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(qint64 );
            if (_q_method_type _q_method = &PlayerComponent::updateDuration; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(double );
            if (_q_method_type _q_method = &PlayerComponent::playbackRateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(quint64 );
            if (_q_method_type _q_method = &PlayerComponent::positionUpdate; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)();
            if (_q_method_type _q_method = &PlayerComponent::onVideoRecangleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)();
            if (_q_method_type _q_method = &PlayerComponent::onMpvEvents; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(const QVariantMap & , QUrl );
            if (_q_method_type _q_method = &PlayerComponent::onMetaData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(const QVariantList & , const QString & );
            if (_q_method_type _q_method = &PlayerComponent::webPlaylistChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(bool );
            if (_q_method_type _q_method = &PlayerComponent::shuffleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(const QString & );
            if (_q_method_type _q_method = &PlayerComponent::repeatChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(bool );
            if (_q_method_type _q_method = &PlayerComponent::fullscreenChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(double );
            if (_q_method_type _q_method = &PlayerComponent::rateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(bool , bool );
            if (_q_method_type _q_method = &PlayerComponent::queueChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(bool );
            if (_q_method_type _q_method = &PlayerComponent::playbackStopped; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(qint64 );
            if (_q_method_type _q_method = &PlayerComponent::durationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(const QString & );
            if (_q_method_type _q_method = &PlayerComponent::playbackStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(qint64 );
            if (_q_method_type _q_method = &PlayerComponent::positionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(qint64 );
            if (_q_method_type _q_method = &PlayerComponent::seekPerformed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(const QVariantMap & );
            if (_q_method_type _q_method = &PlayerComponent::metadataChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerComponent::*)(double );
            if (_q_method_type _q_method = &PlayerComponent::volumeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
    }
}

const QMetaObject *PlayerComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15PlayerComponentE.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int PlayerComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 83)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 83;
    }
    return _id;
}

// SIGNAL 0
void PlayerComponent::playing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerComponent::buffering(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlayerComponent::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlayerComponent::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlayerComponent::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlayerComponent::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlayerComponent::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlayerComponent::stateChanged(State _t1, State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlayerComponent::videoPlaybackActive(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlayerComponent::windowVisible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PlayerComponent::updateDuration(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PlayerComponent::playbackRateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PlayerComponent::positionUpdate(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PlayerComponent::onVideoRecangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PlayerComponent::onMpvEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void PlayerComponent::onMetaData(const QVariantMap & _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PlayerComponent::webPlaylistChanged(const QVariantList & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PlayerComponent::shuffleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PlayerComponent::repeatChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void PlayerComponent::fullscreenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void PlayerComponent::rateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void PlayerComponent::queueChanged(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void PlayerComponent::playbackStopped(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void PlayerComponent::durationChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void PlayerComponent::playbackStateChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void PlayerComponent::positionChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void PlayerComponent::seekPerformed(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void PlayerComponent::metadataChanged(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void PlayerComponent::volumeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}
QT_WARNING_POP
