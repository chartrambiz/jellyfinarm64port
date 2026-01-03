/****************************************************************************
** Meta object code from reading C++ file 'SystemComponent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/system/SystemComponent.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15SystemComponentE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15SystemComponentE = QtMocHelpers::stringData(
    "SystemComponent",
    "serverConnectivityResult",
    "",
    "url",
    "success",
    "resolvedUrl",
    "pageContentReady",
    "html",
    "finalUrl",
    "hadCSP",
    "capabilitiesChanged",
    "capabilities",
    "userInfoChanged",
    "updateInfoEmitted",
    "hostMessage",
    "message",
    "settingsMessage",
    "setting",
    "value",
    "scaleChanged",
    "scale",
    "updateInfoHandler",
    "QNetworkReply*",
    "reply",
    "systemInformation",
    "QVariantMap",
    "exit",
    "restart",
    "jsLog",
    "level",
    "text",
    "checkServerConnectivity",
    "cancelServerConnectivity",
    "getUserAgent",
    "debugInformation",
    "networkAddresses",
    "openExternalUrl",
    "runUserScript",
    "script",
    "getNativeShellScript",
    "fetchPageForCSPWorkaround",
    "checkForUpdates",
    "hello",
    "version",
    "getCapabilitiesString",
    "crashApp",
    "isMacos",
    "isWindows",
    "isLinux",
    "isFreeBSD"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15SystemComponentE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       5,  236, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,  170,    2, 0x06,    6 /* Public */,
       6,    3,  177,    2, 0x06,   10 /* Public */,
      10,    1,  184,    2, 0x06,   14 /* Public */,
      12,    0,  187,    2, 0x06,   16 /* Public */,
      13,    1,  188,    2, 0x06,   17 /* Public */,
      14,    1,  191,    2, 0x06,   19 /* Public */,
      16,    2,  194,    2, 0x06,   21 /* Public */,
      19,    1,  199,    2, 0x06,   24 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    1,  202,    2, 0x08,   26 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      24,    0,  205,    2, 0x102,   28 /* Public | MethodIsConst  */,
      26,    0,  206,    2, 0x02,   29 /* Public */,
      27,    0,  207,    2, 0x02,   30 /* Public */,
      28,    2,  208,    2, 0x02,   31 /* Public */,
      31,    1,  213,    2, 0x02,   34 /* Public */,
      32,    0,  216,    2, 0x02,   36 /* Public */,
      33,    0,  217,    2, 0x02,   37 /* Public */,
      34,    0,  218,    2, 0x02,   38 /* Public */,
      35,    0,  219,    2, 0x102,   39 /* Public | MethodIsConst  */,
      36,    1,  220,    2, 0x02,   40 /* Public */,
      37,    1,  223,    2, 0x02,   42 /* Public */,
      39,    0,  226,    2, 0x02,   44 /* Public */,
      40,    1,  227,    2, 0x02,   45 /* Public */,
      41,    0,  230,    2, 0x02,   47 /* Public */,
      42,    1,  231,    2, 0x02,   48 /* Public */,
      44,    0,  234,    2, 0x02,   50 /* Public */,
      45,    0,  235,    2, 0x02,   51 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,
    QMetaType::Void, QMetaType::QReal,   20,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 22,   23,

 // methods: parameters
    0x80000000 | 25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   29,   30,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::QString,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      46, QMetaType::Bool, 0x00015401, uint(-1), 0,
      47, QMetaType::Bool, 0x00015401, uint(-1), 0,
      48, QMetaType::Bool, 0x00015401, uint(-1), 0,
      49, QMetaType::Bool, 0x00015401, uint(-1), 0,
      20, QMetaType::QReal, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SystemComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_meta_stringdata_ZN15SystemComponentE.offsetsAndSizes,
    qt_meta_data_ZN15SystemComponentE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15SystemComponentE_t,
        // property 'isMacos'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isWindows'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isLinux'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isFreeBSD'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'scale'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SystemComponent, std::true_type>,
        // method 'serverConnectivityResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'pageContentReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'capabilitiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'userInfoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateInfoEmitted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'hostMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'settingsMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'scaleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'updateInfoHandler'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'systemInformation'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'restart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'jsLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'checkServerConnectivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'cancelServerConnectivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getUserAgent'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'debugInformation'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'networkAddresses'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'openExternalUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'runUserScript'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getNativeShellScript'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'fetchPageForCSPWorkaround'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'checkForUpdates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hello'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getCapabilitiesString'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'crashApp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SystemComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SystemComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->serverConnectivityResult((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->pageContentReady((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 2: _t->capabilitiesChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->userInfoChanged(); break;
        case 4: _t->updateInfoEmitted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->hostMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->settingsMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->scaleChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->updateInfoHandler((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 9: { QVariantMap _r = _t->systemInformation();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->exit(); break;
        case 11: _t->restart(); break;
        case 12: _t->jsLog((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->checkServerConnectivity((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->cancelServerConnectivity(); break;
        case 15: { QString _r = _t->getUserAgent();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->debugInformation();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QStringList _r = _t->networkAddresses();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->openExternalUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->runUserScript((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: { QString _r = _t->getNativeShellScript();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->fetchPageForCSPWorkaround((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->checkForUpdates(); break;
        case 23: _t->hello((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: { QString _r = _t->getCapabilitiesString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->crashApp(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (SystemComponent::*)(QString , bool , QString );
            if (_q_method_type _q_method = &SystemComponent::serverConnectivityResult; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (SystemComponent::*)(QString , QString , bool );
            if (_q_method_type _q_method = &SystemComponent::pageContentReady; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (SystemComponent::*)(const QString & );
            if (_q_method_type _q_method = &SystemComponent::capabilitiesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (SystemComponent::*)();
            if (_q_method_type _q_method = &SystemComponent::userInfoChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (SystemComponent::*)(QString );
            if (_q_method_type _q_method = &SystemComponent::updateInfoEmitted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (SystemComponent::*)(const QString & );
            if (_q_method_type _q_method = &SystemComponent::hostMessage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (SystemComponent::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &SystemComponent::settingsMessage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (SystemComponent::*)(qreal );
            if (_q_method_type _q_method = &SystemComponent::scaleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->platformIsMac(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->platformIsWindows(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->platformIsLinux(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->platformIsFreeBSD(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->m_scale; break;
        default: break;
        }
    }
}

const QMetaObject *SystemComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15SystemComponentE.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int SystemComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SystemComponent::serverConnectivityResult(QString _t1, bool _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemComponent::pageContentReady(QString _t1, QString _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemComponent::capabilitiesChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemComponent::userInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SystemComponent::updateInfoEmitted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SystemComponent::hostMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SystemComponent::settingsMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SystemComponent::scaleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
