/****************************************************************************
** Meta object code from reading C++ file 'SettingsComponent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/settings/SettingsComponent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17SettingsComponentE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17SettingsComponentE = QtMocHelpers::stringData(
    "SettingsComponent",
    "groupUpdate",
    "",
    "section",
    "QVariant",
    "description",
    "sectionValueUpdate",
    "QVariantMap",
    "values",
    "cycleSettingCommand",
    "args",
    "setSettingCommand",
    "setValue",
    "sectionID",
    "key",
    "value",
    "setValues",
    "options",
    "orderedSections",
    "allValues",
    "removeValue",
    "sectionOrKey",
    "resetToDefaultAll",
    "resetToDefault",
    "settingDescriptions",
    "QVariantList",
    "getWebClientUrl",
    "desktop",
    "getExtensionPath",
    "getClientName",
    "ignoreSSLErrors",
    "autodetectCertBundle",
    "detectCertBundlePath",
    "allowBrowserZoom"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17SettingsComponentE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  140,    2, 0x06,    1 /* Public */,
       6,    2,  145,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  150,    2, 0x0a,    7 /* Public */,
      11,    1,  153,    2, 0x0a,    9 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    3,  156,    2, 0x02,   11 /* Public */,
      16,    1,  163,    2, 0x02,   15 /* Public */,
      15,    2,  166,    2, 0x02,   17 /* Public */,
      18,    0,  171,    2, 0x02,   20 /* Public */,
      19,    1,  172,    2, 0x02,   21 /* Public */,
      19,    0,  175,    2, 0x22,   23 /* Public | MethodCloned */,
      20,    1,  176,    2, 0x02,   24 /* Public */,
      22,    0,  179,    2, 0x02,   26 /* Public */,
      23,    1,  180,    2, 0x02,   27 /* Public */,
      24,    0,  183,    2, 0x02,   29 /* Public */,
      26,    1,  184,    2, 0x02,   30 /* Public */,
      28,    0,  187,    2, 0x02,   32 /* Public */,
      29,    0,  188,    2, 0x02,   33 /* Public */,
      30,    0,  189,    2, 0x02,   34 /* Public */,
      31,    0,  190,    2, 0x02,   35 /* Public */,
      32,    0,  191,    2, 0x02,   36 /* Public */,
      33,    0,  192,    2, 0x02,   37 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    3,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 4,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 7,   17,
    0x80000000 | 4, QMetaType::QString, QMetaType::QString,   13,   14,
    0x80000000 | 4,
    0x80000000 | 4, QMetaType::QString,    3,
    0x80000000 | 4,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    0x80000000 | 25,
    QMetaType::QString, QMetaType::Bool,   27,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Bool,

       0        // eod
};

Q_CONSTINIT const QMetaObject SettingsComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_meta_stringdata_ZN17SettingsComponentE.offsetsAndSizes,
    qt_meta_data_ZN17SettingsComponentE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17SettingsComponentE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SettingsComponent, std::true_type>,
        // method 'groupUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'sectionValueUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'cycleSettingCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSettingCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'setValues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'value'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'orderedSections'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'allValues'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'allValues'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'removeValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'resetToDefaultAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetToDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'settingDescriptions'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'getWebClientUrl'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getExtensionPath'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getClientName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ignoreSSLErrors'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'autodetectCertBundle'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'detectCertBundlePath'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'allowBrowserZoom'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void SettingsComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SettingsComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->groupUpdate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->sectionValueUpdate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 2: _t->cycleSettingCommand((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->setSettingCommand((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 5: _t->setValues((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 6: { QVariant _r = _t->value((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariant _r = _t->orderedSections();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVariant _r = _t->allValues((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariant _r = _t->allValues();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->removeValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->resetToDefaultAll(); break;
        case 12: _t->resetToDefault((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: { QVariantList _r = _t->settingDescriptions();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->getWebClientUrl((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->getExtensionPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->getClientName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->ignoreSSLErrors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->autodetectCertBundle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { QString _r = _t->detectCertBundlePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->allowBrowserZoom();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (SettingsComponent::*)(const QString & , const QVariant & );
            if (_q_method_type _q_method = &SettingsComponent::groupUpdate; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (SettingsComponent::*)(const QString & , const QVariantMap & );
            if (_q_method_type _q_method = &SettingsComponent::sectionValueUpdate; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *SettingsComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17SettingsComponentE.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int SettingsComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void SettingsComponent::groupUpdate(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SettingsComponent::sectionValueUpdate(const QString & _t1, const QVariantMap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
