#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "recipe.h"
#include "json/JsonHandler.h"
#include "style.h"
#include "recipePage/recipepagetypeone.h"
#include <map>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::map<int, Recipe> *recipes;

signals:
    void sendRecipeTypeOne(Recipe);
    void sendRecipeTypeTwo(Recipe);

private slots:
    void on_recipeListWidget_itemClicked(QListWidgetItem *item);
    void on_addNewRecipeButton_clicked();
    void on_quiteOption_triggered();
    void addRecipeOutside(Recipe recipe);
    void setBG();

private:
    Ui::MainWindow *ui;
    RecipePageTypeOne *page1;
    class style set;

    JsonHandler *readJson;

    void addRecipe(Recipe);
};

#endif // MAINWINDOW_H
