#include "selectingredients.h"
#include "ui_selectingredients.h"
#include "../recipe.h"
#include "selectpagetype.h"
#include <vector>
#include <string>
#include <sstream>
#include <QMessageBox>
#include <QListWidgetItem>

using namespace std;

selectIngredients::selectIngredients(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::selectIngredients)
{
    ui->setupUi(this);

    listOfIngredients = new vector<Recipe::ingredient*>;
}

selectIngredients::~selectIngredients()
{
    delete ui;
}

void selectIngredients::on_addIngredientButton_clicked()
{
    string name = ui->nameLine->text().toStdString();
    int type = ui->typeBox->currentIndex();
    float amountTxt;

    try {
        amountTxt = stof(ui->amountLine->text().toStdString());
    } catch (std::invalid_argument e) {
        QMessageBox box;
        box.about(this, "Wrong input", "Please enter a number.");
        box.show();
        ui->amountLine->setText("");
        return;
    } catch (std::out_of_range e) {
        QMessageBox box;
        box.about(this, "Wrong input", "Please enter a smaller number.");
        box.show();
        ui->amountLine->setText("");
        return;
    }

    Recipe::ingredient *ingredient = new Recipe::ingredient(amountTxt, type, name);
    listOfIngredients->push_back(ingredient);

    ui->amountLine->setText("");
    ui->nameLine->setText("");
    ui->typeBox->setCurrentIndex(0);

    QListWidgetItem *item = new QListWidgetItem;
    (*item).setData(1, numberOfIngredients);
    ostringstream text;
    text << ingredient->getAmount() << " " << ingredient->getType() << " of " << ingredient->name;
    (*item).setText(QString::fromStdString(text.str()));
    numberOfIngredients++;

    ui->ingredientList->addItem(item);
}


void selectIngredients::on_finishButton_clicked()
{
    if (ui->ingredientList->count() != 0) {
        vector<Recipe::ingredient> *tempList = new vector<Recipe::ingredient>;
        string test = ui->recipeName->text().toStdString();
        name = new string(ui->recipeName->text().toStdString());

        for (int i = 0; i < numberOfIngredients; i++) {
            tempList->push_back(*listOfIngredients->at(i));
        }

        emit(sentIngredients(numberOfIngredients, tempList, name));
        deleteLater();
    } else {
        QMessageBox box;
        box.about(this, "Wrong input", "Please enter at least one ingredient.");
        box.show();
        return;
    }
}

