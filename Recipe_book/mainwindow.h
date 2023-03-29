#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "recipe.h"
#include "json/JsonHandler.h"
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
    static std::map<int, Recipe> recipes;

signals:
    void sendRecipeTypeOne(Recipe);
    void sendRecipeTypeTwo(Recipe);

private slots:
    void on_recipeListWidget_itemClicked(QListWidgetItem *item);
    void on_addNewRecipeButton_clicked();
    void on_quiteOption_triggered();

private:
    Ui::MainWindow *ui;
    void addRecipe(int, Recipe);

    JsonHandler readJson;
};

#endif // MAINWINDOW_H
