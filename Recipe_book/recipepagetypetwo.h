#ifndef RECIPEPAGETYPETWO_H
#define RECIPEPAGETYPETWO_H

#include <QMainWindow>

namespace Ui {
class RecipePageTypeTwo;
}

class RecipePageTypeTwo : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecipePageTypeTwo(QWidget *parent = nullptr);
    ~RecipePageTypeTwo();

private:
    Ui::RecipePageTypeTwo *ui;
};

#endif // RECIPEPAGETYPETWO_H
