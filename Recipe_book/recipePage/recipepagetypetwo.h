#ifndef RECIPEPAGETYPETWO_H
#define RECIPEPAGETYPETWO_H

#include <QMainWindow>
#include "../recipe.h"

namespace Ui {
class RecipePageTypeTwo;
}

class RecipePageTypeTwo : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecipePageTypeTwo(QWidget *parent = nullptr);
    ~RecipePageTypeTwo();

public slots:
    void addRecipe(Recipe);
    void changeStep(int, Recipe);
signals:

    void sendNextStep(int, Recipe);
    void sendIngredients(vector<Recipe::ingredient>);

private slots:
    void on_nextButton_clicked();
    void on_backButton_clicked();

private:

    Ui::RecipePageTypeTwo *ui;

    int step = 0;

    Recipe recipe;
};

#endif // RECIPEPAGETYPETWO_H
