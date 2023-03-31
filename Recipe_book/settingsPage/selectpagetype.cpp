#include "selectpagetype.h"
#include "selectingredients.h"
#include "ui_selectpagetype.h"
#include "settingpagetypeone.h"
#include "settingpagetypetwo.h"
#include "../Step.h"
#include <string>
#include <vector>
#include <iostream>

SelectPageType::SelectPageType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectPageType)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked,
            this, &SelectPageType::finish);

    selectIngredients *selectIngredientsPage = new selectIngredients(this);
    selectIngredientsPage->show();
    connect(selectIngredientsPage, SIGNAL(sentIngredients(int, vector<Recipe::ingredient> *, string*)),
              this, SLOT(getIngredients(int, vector<Recipe::ingredient> *, string*)));

    recipe = new Recipe();
}

SelectPageType::~SelectPageType()
{
    delete ui;
}


void SelectPageType::on_nextButton_clicked()
{
    SelectPageType *s = this;
    if (ui->type1Radio->isChecked() == true) {
        SettingPageTypeOne *page = new SettingPageTypeOne(this);

        connect(page, SIGNAL(sendStep(int, string)),
                this, SLOT(addStep(int, string)));
        page->show();
        hide();

    } else if (ui->type2Radio->isChecked() == true) {
        SettingPageTypeTwo *page = new SettingPageTypeTwo(this);

        connect(page, SIGNAL(sendStep(int, string)),
                this, SLOT(addStep(int, string)));
        page->show();
        hide();
    }

}

void SelectPageType::getIngredients(int num, vector<Recipe::ingredient> *list, string *name) {
    show();
    numberOfIngredients = num;
    listOfIngredients = list;
    recipeName = *name;
}

void SelectPageType::addStep(int i, string step) {
    show();
    recipe->addStep(step, i);
}

void SelectPageType::finish() {

    recipe->setIngredients(*listOfIngredients);
    recipe->setName(recipeName);
    recipe->setNumberOfIngredients(numberOfIngredients);

    recipe->out();

    emit(sendRecipe(*recipe));
    deleteLater();
}


void SelectPageType::on_pushButton_clicked()
{
    finish();
    deleteLater();
}

