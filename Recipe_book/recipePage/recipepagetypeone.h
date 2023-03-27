#ifndef RECIPEPAGETYPEONE_H
#define RECIPEPAGETYPEONE_H

#include <QMainWindow>

namespace Ui {
class RecipePageTypeOne;
}

class RecipePageTypeOne : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecipePageTypeOne(QWidget *parent = nullptr);
    ~RecipePageTypeOne();

private:
    Ui::RecipePageTypeOne *ui;
};

#endif // RECIPEPAGETYPEONE_H
