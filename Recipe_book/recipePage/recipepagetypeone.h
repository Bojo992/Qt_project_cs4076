#ifndef RECIPEPAGETYPEONE_H
#define RECIPEPAGETYPEONE_H

#include <QMainWindow>
#include "../recipe.h"
namespace Ui {
class RecipePageTypeOne;
}

class RecipePageTypeOne : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecipePageTypeOne(QWidget *parent = nullptr);
    ~RecipePageTypeOne();

public slots:
    void addRecipe(Recipe&);

private:
    Ui::RecipePageTypeOne *ui;
    Recipe recipe;
    QWidget parent;
};

#endif // RECIPEPAGETYPEONE_H
