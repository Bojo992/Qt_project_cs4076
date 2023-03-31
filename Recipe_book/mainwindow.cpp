#include <iostream>
#include "mainwindow.h"
#include "settings.h"
#include "ui_mainwindow.h"
#include "settingsPage/selectpagetype.h"
#include "recipePage/recipepagetypeone.h"
#include "recipePage/recipepagetypetwo.h"
#include "recipe.h"
#include "settingsPage/selectingredients.h"
#include "json/JsonHandler.h"
#include <map>

using namespace std;

template <class T> void showWindow(T window) {
    window->show();
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    readJson = new JsonHandler();
    ui->setupUi(this);

    settings *setting = new settings();

    connect(ui->settingsOption, SIGNAL(triggered()),
            setting, SLOT(show()));
    connect(setting, SIGNAL(update()), this, SLOT(setBG()));


    recipes = new map<int, Recipe>;
    for (auto i : readJson->getRecipes()) {
        QString j = QString::fromStdString(i.getName());
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(j);
        item->setData(1,  i.getId());
        ui->recipeListWidget->addItem(item);
        Recipe tempRecipe = i;
        addRecipe(tempRecipe);
    }
}

MainWindow::~MainWindow()
{
    readJson->writeJson();
    delete ui;
}

void MainWindow::on_quiteOption_triggered()
{
    this->deleteLater();
}


void MainWindow::on_recipeListWidget_itemClicked(QListWidgetItem *item)
{
    int id = item->data(1).toInt();

    cout << "item id " << id << "size of map" << recipes->size();


    RecipePageTypeOne *page1 = new RecipePageTypeOne(this);
    connect(this, SIGNAL(sendRecipeTypeOne(Recipe)),
            page1, SLOT(addRecipe(Recipe)));

    RecipePageTypeTwo *page2 = new RecipePageTypeTwo(this);
    connect(this, SIGNAL(sendRecipeTypeTwo(Recipe)),
            page2, SLOT(addRecipe(Recipe)));

    Recipe temp = recipes->find(id)->second;

    if (temp.getStep(0).type == 1) {
        page1->show();
        emit(sendRecipeTypeOne(temp));
        page1->disconnect();

    } else {
        page2->show();
        emit(sendRecipeTypeTwo(temp));
        page2->disconnect();
    }
}

void MainWindow::addRecipe(Recipe recipe) {
    recipes->insert(std::make_pair(recipe.getId(), recipe));
    readJson->addRecipe(recipe);
}

void MainWindow::addRecipeOutside(Recipe recipe) {
    show();
    int id = recipe.getId();
    QString name = QString::fromStdString(recipe.getName());

    QListWidgetItem *item = new QListWidgetItem;
    item->setData(1, id);
    item->setText(name);

    ui->recipeListWidget->addItem(item);

    recipes->insert(std::make_pair(recipe.getId(), recipe));
    readJson->addRecipe(recipe);
}



void MainWindow::on_addNewRecipeButton_clicked()
{
    SelectPageType *pageType = new SelectPageType(this);
    connect(pageType, &SelectPageType::sendRecipe,
            this, &MainWindow::addRecipeOutside);

}

void MainWindow::setBG() {
    QPalette Pal2;
    Pal2.setColor(QPalette::Window, set.getColor());
    setStyleSheet(set.getStyle());
    this->setPalette(Pal2);
}

