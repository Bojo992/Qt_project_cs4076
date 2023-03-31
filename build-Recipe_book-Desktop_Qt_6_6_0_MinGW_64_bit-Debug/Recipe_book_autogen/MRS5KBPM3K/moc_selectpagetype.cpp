/****************************************************************************
** Meta object code from reading C++ file 'selectpagetype.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Recipe_book/settingsPage/selectpagetype.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectpagetype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSSelectPageTypeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSelectPageTypeENDCLASS = QtMocHelpers::stringData(
    "SelectPageType",
    "sendRecipe",
    "",
    "Recipe",
    "on_nextButton_clicked",
    "getIngredients",
    "vector<Recipe::ingredient>*",
    "string*",
    "addStep",
    "string",
    "finish"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSelectPageTypeENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[15];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[22];
    char stringdata5[15];
    char stringdata6[28];
    char stringdata7[8];
    char stringdata8[8];
    char stringdata9[7];
    char stringdata10[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSelectPageTypeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSelectPageTypeENDCLASS_t qt_meta_stringdata_CLASSSelectPageTypeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "SelectPageType"
        QT_MOC_LITERAL(15, 10),  // "sendRecipe"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 6),  // "Recipe"
        QT_MOC_LITERAL(34, 21),  // "on_nextButton_clicked"
        QT_MOC_LITERAL(56, 14),  // "getIngredients"
        QT_MOC_LITERAL(71, 27),  // "vector<Recipe::ingredient>*"
        QT_MOC_LITERAL(99, 7),  // "string*"
        QT_MOC_LITERAL(107, 7),  // "addStep"
        QT_MOC_LITERAL(115, 6),  // "string"
        QT_MOC_LITERAL(122, 6)   // "finish"
    },
    "SelectPageType",
    "sendRecipe",
    "",
    "Recipe",
    "on_nextButton_clicked",
    "getIngredients",
    "vector<Recipe::ingredient>*",
    "string*",
    "addStep",
    "string",
    "finish"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSelectPageTypeENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   47,    2, 0x0a,    3 /* Public */,
       5,    3,   48,    2, 0x0a,    4 /* Public */,
       8,    2,   55,    2, 0x0a,    8 /* Public */,
      10,    0,   60,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    2,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SelectPageType::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSelectPageTypeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSelectPageTypeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSelectPageTypeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SelectPageType, std::true_type>,
        // method 'sendRecipe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Recipe, std::false_type>,
        // method 'on_nextButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getIngredients'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<Recipe::ingredient> *, std::false_type>,
        QtPrivate::TypeAndForceComplete<string *, std::false_type>,
        // method 'addStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<string, std::false_type>,
        // method 'finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SelectPageType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectPageType *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendRecipe((*reinterpret_cast< std::add_pointer_t<Recipe>>(_a[1]))); break;
        case 1: _t->on_nextButton_clicked(); break;
        case 2: _t->getIngredients((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<vector<Recipe::ingredient>*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<string*>>(_a[3]))); break;
        case 3: _t->addStep((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<string>>(_a[2]))); break;
        case 4: _t->finish(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelectPageType::*)(Recipe );
            if (_t _q_method = &SelectPageType::sendRecipe; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SelectPageType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectPageType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSelectPageTypeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SelectPageType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SelectPageType::sendRecipe(Recipe _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
