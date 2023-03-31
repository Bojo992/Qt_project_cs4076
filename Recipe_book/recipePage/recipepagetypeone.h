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
    void addRecipe(Recipe);
    void changeStep(int, Recipe);

signals:
    void sendNextStep(int, Recipe);

private slots:
    void on_nextButton_clicked();
    void on_backButton_clicked();

private:
    Ui::RecipePageTypeOne *ui;
    Recipe recipe;
    int step = 0;
};

#endif // RECIPEPAGETYPEONE_H
