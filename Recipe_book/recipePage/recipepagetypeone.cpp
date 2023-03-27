#include "recipepagetypeone.h"
#include "ui_recipepagetypeone.h"

RecipePageTypeOne::RecipePageTypeOne(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecipePageTypeOne)
{
    ui->setupUi(this);
}

RecipePageTypeOne::~RecipePageTypeOne()
{
    delete ui;
}
