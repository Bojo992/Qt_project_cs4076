#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingsPage/selectpagetype.h"
#include "recipePage/recipepagetypeone.h"
#include "recipePage/recipepagetypetwo.h"
#include "recipe.h"
#include "json/JsonHandler.h"
#include <map>

using namespace std;

std::map<int, Recipe> MainWindow::recipes;

template <class T> void showWindow(T window) {
    window->show();
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (auto i : readJson.getRecipes()) {
        QString j = QString::fromStdString(i.getName());
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(j);
        item->setData(1,  i.getId());
        ui->recipeListWidget->addItem(item);
        Recipe tempRecipe = i;
        addRecipe(i.getId(), tempRecipe);
    }
}

MainWindow::~MainWindow()
{
    readJson.writeJson();
    delete ui;
}

void MainWindow::on_quiteOption_triggered()
{
    this->deleteLater();
}


void MainWindow::on_recipeListWidget_itemClicked(QListWidgetItem *item)
{
    int id = item->data(1).toInt();

    if (recipes.at(id).getStep(0).type == 0) {
        RecipePageTypeOne *page = new RecipePageTypeOne(this);
        connect(this, SIGNAL(sendRecipeTypeOne), page, SLOT(addRecipe));
        showWindow(page);
    }
}

void MainWindow::addRecipe(int i, Recipe recipe) {
    recipes.insert(std::make_pair(i, recipe));
    readJson.addRecipe(recipe);
}



void MainWindow::on_addNewRecipeButton_clicked()
{
    SelectPageType *selectPageType = new SelectPageType(this);
    this->hide();
    showWindow(selectPageType);
}

