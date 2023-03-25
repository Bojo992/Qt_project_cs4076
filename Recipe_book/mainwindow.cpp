#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "selectpagetype.h"
#include "recipepagetypeone.h"
#include "recipepagetypetwo.h"
#include "recipe.h"
#include <map>

MainWindow::MainWindow(QWidget *parent, std::map<std::string, Recipe> test) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    recipes(test)
{
    ui->setupUi(this);
    ui->recipeListWidget->addItem("recipes");

    SelectPageType *selectPageType = new SelectPageType();
    connect(ui->addNewRecipeButton, &QPushButton::clicked,
            selectPageType, &SelectPageType::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quiteOption_triggered()
{
    this->deleteLater();
}


void MainWindow::on_recipeListWidget_itemClicked(QListWidgetItem *item)
{
    RecipePageTypeOne *recipePage = new RecipePageTypeOne(this);
    recipePage->show();
}


