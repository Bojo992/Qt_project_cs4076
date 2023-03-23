#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "selectpagetype.h"
#include "recipepagetypeone.h"
#include "recipepagetypetwo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->recipeListWidget->addItem("test");

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
    this->deleteLater();
}

