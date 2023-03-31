#ifndef SELECTINGREDIENTS_H
#define SELECTINGREDIENTS_H

#include "../recipe.h"
#include <QMainWindow>
#include <vector>
#include <QListWidgetItem>



namespace Ui {
class selectIngredients;
}

class selectIngredients : public QMainWindow
{
    Q_OBJECT

public:
    explicit selectIngredients(QWidget *parent = nullptr);
    ~selectIngredients();

public slots:
    void on_addIngredientButton_clicked();
    void on_finishButton_clicked();
//    void on_ingredientList_itemClicked(QListWidgetItem *item);

signals:
    void sendRecipe(Recipe);
    void sentIngredients(int, vector<Recipe::ingredient>*, string*);
private:
    Ui::selectIngredients *ui;

    vector<Recipe::ingredient*> *listOfIngredients;

    int numberOfIngredients = 0;

    string *name;
};

#endif // SELECTINGREDIENTS_H
