/****************************************************************************
** Meta object code from reading C++ file 'recipepagetypetwo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Recipe_book/recipePage/recipepagetypetwo.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recipepagetypetwo.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS = QtMocHelpers::stringData(
    "RecipePageTypeTwo",
    "sendNextStep",
    "",
    "Recipe",
    "sendIngredients",
    "vector<Recipe::ingredient>",
    "addRecipe",
    "changeStep",
    "on_nextButton_clicked",
    "on_backButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[16];
    char stringdata5[27];
    char stringdata6[10];
    char stringdata7[11];
    char stringdata8[22];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS_t qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "RecipePageTypeTwo"
        QT_MOC_LITERAL(18, 12),  // "sendNextStep"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 6),  // "Recipe"
        QT_MOC_LITERAL(39, 15),  // "sendIngredients"
        QT_MOC_LITERAL(55, 26),  // "vector<Recipe::ingredient>"
        QT_MOC_LITERAL(82, 9),  // "addRecipe"
        QT_MOC_LITERAL(92, 10),  // "changeStep"
        QT_MOC_LITERAL(103, 21),  // "on_nextButton_clicked"
        QT_MOC_LITERAL(125, 21)   // "on_backButton_clicked"
    },
    "RecipePageTypeTwo",
    "sendNextStep",
    "",
    "Recipe",
    "sendIngredients",
    "vector<Recipe::ingredient>",
    "addRecipe",
    "changeStep",
    "on_nextButton_clicked",
    "on_backButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRecipePageTypeTwoENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       4,    1,   55,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   58,    2, 0x0a,    6 /* Public */,
       7,    2,   61,    2, 0x0a,    8 /* Public */,
       8,    0,   66,    2, 0x08,   11 /* Private */,
       9,    0,   67,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RecipePageTypeTwo::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRecipePageTypeTwoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RecipePageTypeTwo, std::true_type>,
        // method 'sendNextStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Recipe, std::false_type>,
        // method 'sendIngredients'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<Recipe::ingredient>, std::false_type>,
        // method 'addRecipe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Recipe, std::false_type>,
        // method 'changeStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Recipe, std::false_type>,
        // method 'on_nextButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RecipePageTypeTwo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RecipePageTypeTwo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNextStep((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Recipe>>(_a[2]))); break;
        case 1: _t->sendIngredients((*reinterpret_cast< std::add_pointer_t<vector<Recipe::ingredient>>>(_a[1]))); break;
        case 2: _t->addRecipe((*reinterpret_cast< std::add_pointer_t<Recipe>>(_a[1]))); break;
        case 3: _t->changeStep((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Recipe>>(_a[2]))); break;
        case 4: _t->on_nextButton_clicked(); break;
        case 5: _t->on_backButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RecipePageTypeTwo::*)(int , Recipe );
            if (_t _q_method = &RecipePageTypeTwo::sendNextStep; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RecipePageTypeTwo::*)(vector<Recipe::ingredient> );
            if (_t _q_method = &RecipePageTypeTwo::sendIngredients; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *RecipePageTypeTwo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecipePageTypeTwo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRecipePageTypeTwoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int RecipePageTypeTwo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RecipePageTypeTwo::sendNextStep(int _t1, Recipe _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RecipePageTypeTwo::sendIngredients(vector<Recipe::ingredient> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
