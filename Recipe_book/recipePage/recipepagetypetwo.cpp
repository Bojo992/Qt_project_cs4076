#include "recipepagetypetwo.h"
#include "recipepagetypeone.h"
#include "ui_recipepagetypetwo.h"
#include "../indexOutOfBoundaries.h"
#include <QMessageBox>
#include <sstream>

RecipePageTypeTwo::RecipePageTypeTwo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecipePageTypeTwo)
{
    ui->setupUi(this);
    this->setWindowTitle("Recipe");
}

RecipePageTypeTwo::~RecipePageTypeTwo()
{
    delete ui;
}

void RecipePageTypeTwo::addRecipe(Recipe input) {
    recipe = input;
    step = 0;
    string text = recipe.getStep(step).step;
    ui->recipeTextField->setText(QString::fromStdString(text));
    ui->label->setText(QString::fromStdString("step " + to_string(step + 1)));
}

void RecipePageTypeTwo::changeStep(int newStep, Recipe input) {
    recipe = input;
    step = newStep;
    ui->recipeTextField->setText(QString::fromStdString(recipe.getStep(step).step));
    ui->label->setText(QString::fromStdString("step " + to_string(step + 1)));
}

void RecipePageTypeTwo::on_nextButton_clicked() {
    RecipePageTypeOne *page1 = new RecipePageTypeOne();
    connect(this, SIGNAL(sendNextStep(int, Recipe)),
            page1, SLOT(changeStep(int, Recipe)));

    RecipePageTypeTwo *page2 = new RecipePageTypeTwo();
    connect(this, SIGNAL(sendNextStep(int, Recipe)),
            page2, SLOT(changeStep(int, Recipe)));

    int temp = recipe.getNumberOfSteps();

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

void RecipePageTypeTwo::on_backButton_clicked() {
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




