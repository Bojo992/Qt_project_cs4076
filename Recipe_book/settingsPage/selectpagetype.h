#ifndef SELECTPAGETYPE_H
#define SELECTPAGETYPE_H

#include "../recipe.h"
#include "../Step.h"
#include <QDialog>
#include <vector>
#include <string>

namespace Ui {
class SelectPageType;
}

class SelectPageType : public QDialog
{
    Q_OBJECT

public:
    explicit SelectPageType(QWidget *parent = nullptr);
    ~SelectPageType();

public slots:
    void on_nextButton_clicked();
    void getIngredients(int, vector<Recipe::ingredient> *, string*);
    void addStep(int, string);
    void finish();

signals:
    void sendRecipe(Recipe);

private:
    Ui::SelectPageType *ui;
    int numberOfIngredients = 0;
    vector<Recipe::ingredient> *listOfIngredients;
    int numberOfSteps = 0;
    vector<stepStruct> *listOfSteps;
    int size = 10;
    string recipeName;
    Recipe *recipe;

    void on_pushButton_clicked();
};

#endif // SELECTPAGETYPE_H
