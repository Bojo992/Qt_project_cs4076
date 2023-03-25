#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "recipe.h"
#include <map>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr, std::map<std::string, Recipe>);
    ~MainWindow();
    std::map<std::string, Recipe> recipes;


private slots:
    void on_recipeListWidget_itemClicked(QListWidgetItem *item);
    void on_quiteOption_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
