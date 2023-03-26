#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "selectpagetype.h"
#include "recipepagetypeone.h"
#include "recipepagetypetwo.h"
#include "recipe.h"
#include <map>

std::map<std::string, Recipe> MainWindow::recipes;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->recipeListWidget->addItem("recipes");

    JsonHandler readJson;
    readJson.readJson();
    Json::Value &recipesJson = *readJson.getRecipesJson();
    for (auto const i : (*readJson.getRecipesJson()).getMemberNames()) {
        QString j = QString::fromStdString(i);
        ui->recipeListWidget->addItem(j);
        JsonHandler *temp = new JsonHandler(recipesJson[i]);
        Recipe *tempRecipe = new Recipe(temp);
        addRecipe(i, tempRecipe);
    }

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

void MainWindow::addRecipe(std::string i, Recipe *recipe) {
    recipes.insert(std::make_pair(i, *recipe));
}


