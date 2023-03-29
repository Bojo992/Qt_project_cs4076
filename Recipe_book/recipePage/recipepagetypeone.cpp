#include "recipepagetypeone.h"
#include "ui_recipepagetypeone.h"

RecipePageTypeOne::RecipePageTypeOne(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecipePageTypeOne),
    parent(parent)
{
    ui->setupUi(this);
}


RecipePageTypeOne::~RecipePageTypeOne()
{
    parent.show();
    delete ui;
}

void RecipePageTypeOne::addRecipe(Recipe &input) {
    recipe = input;
    input.out();
}
