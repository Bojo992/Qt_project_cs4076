#include "recipepagetypetwo.h"
#include "ui_recipepagetypetwo.h"

RecipePageTypeTwo::RecipePageTypeTwo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecipePageTypeTwo)
{
    ui->setupUi(this);
}

RecipePageTypeTwo::~RecipePageTypeTwo()
{
    delete ui;
}
