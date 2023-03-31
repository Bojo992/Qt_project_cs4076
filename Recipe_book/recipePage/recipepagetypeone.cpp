#include <iostream>
#include "recipepagetypeone.h"
#include "recipepagetypetwo.h"
#include "../indexOutOfBoundaries.h"
#include "ui_recipepagetypeone.h"
#include <sstream>
#include <QString>
#include "QMessageBox"

using namespace std;

RecipePageTypeOne::RecipePageTypeOne(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecipePageTypeOne)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe");
}


RecipePageTypeOne::~RecipePageTypeOne()
{
    delete ui;
}

void RecipePageTypeOne::addRecipe(Recipe input) {
    ostringstream text;
    recipe = input;
    ui->recipeTextField->setText(QString::fromStdString(recipe.getStep(step).step));
    ui->label->setText(QString::fromStdString("step " + to_string(step + 1)));

    for (auto i : input.getIngredients()) {
        text << i.getAmount() << " " << i.getType() << " of " << i.name;
        ui->ingredientsList->addItem(QString::fromStdString(text.str()));
        text.str("");
        text.clear();
    }
}

void RecipePageTypeOne::changeStep(int newStep, Recipe input) {
    ostringstream text;
    recipe = input;
    step = newStep;
    ui->recipeTextField->setText(QString::fromStdString(recipe.getStep(step).step));

    for (auto i : input.getIngredients()) {
        text << i.getAmount() << " " << i.getType() << " of " << i.name;
        ui->ingredientsList->addItem(QString::fromStdString(text.str()));
        text.str("");
        text.clear();
    }

    ui->label->setText(QString::fromStdString("step " + to_string(step + 1)));
}

void RecipePageTypeOne::on_nextButton_clicked() {
    RecipePageTypeOne *page1 = new RecipePageTypeOne();
    connect(this, SIGNAL(sendNextStep(int, Recipe)),
            page1, SLOT(changeStep(int, Recipe)));

    RecipePageTypeTwo *page2 = new RecipePageTypeTwo();
    connect(this, SIGNAL(sendNextStep(int, Recipe)),
            page2, SLOT(changeStep(int, Recipe)));

    if (step + 1 < recipe.getNumberOfSteps()){
        int type = recipe.getStep(step + 1).type;

        if (type == 1) {
            page1->show();
        } else {
            page2->show();
        }

        emit(sendNextStep(step + 1, recipe));
        page1->disconnect();
        page2->disconnect();
        deleteLater();

    } else {
        QMessageBox box;
        box.about(this, "Error", "It is last page!");
        box.show();
        return;
    }
}

void RecipePageTypeOne::on_backButton_clicked() {
    RecipePageTypeOne *page1 = new RecipePageTypeOne();
    connect(this, SIGNAL(sendNextStep(int, Recipe)),
            page1, SLOT(changeStep(int, Recipe)));

    RecipePageTypeTwo *page2 = new RecipePageTypeTwo();
    connect(this, SIGNAL(sendNextStep(int, Recipe)),
            page2, SLOT(changeStep(int, Recipe)));

    if (step - 1 >= 0){
        int type = recipe.getStep(step - 1).type;

        if (type == 1) {
            page1->show();
        } else {
            page2->show();
        }

        emit(sendNextStep(step - 1, recipe));
        page1->disconnect();
        page2->disconnect();
        deleteLater();
    } else {
        QMessageBox box;
        box.about(this, "Error", "It is first page!");
        box.show();
        return;
    }
}