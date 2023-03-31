#define DEBUG 0

#if DEBUG == 0

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

#elif DEBUG == 1

#include "recipe.h"
#include "json/JsonHandler.h"
#include "iostream"
#include "dist/json/json.h"
using namespace std;

int main() {
    Recipe test;
    string *name = new string("test new recipe");
    string *step1 = new string("test add step to the recipe");
    string *step2 = new string("test add extra step to the recipe");
    string *img1 = new string("test add step to the recipe");
    string *img2 = new string("test add extra step to the recipe");
    test.addName(*name);
    test.addIngredient(20, 2, *new string("test add ingredient"));
    test.addStep(*img1, *step1, 1);
    test.addStep(*img1, *step2, 2);

    cout << "test" << endl;

    JsonHandler handler1;
    handler1.addRecipe(test);

    handler1.writeJson();
}

#elif DEBUG == 2

#include "recipe.h"
#include "json/JsonHandler.h"
#include "iostream"
#include "dist/json/json.h"
#include <fstream>
#include <QStandardPaths>
#include <QDir>
#include <QString>

using namespace std;

int main() {
    Recipe test;
    string *name = new string("test new recipe");
    string *step1 = new string("test add step to the recipe");
    string *step2 = new string("test add extra step to the recipe");
    string *img1 = new string("test add step to the recipe");
    string *img2 = new string("test add extra step to the recipe");
    test.addName(*name);
    test.addIngredient(20, 2, "test add ingredient");
    test.addIngredient(23, 4, "test add ingredient");
    test.addStep(*step1, 1);
    test.addStep(*step2, 1);

    Recipe test1;
    test1.addName(*name);
    test1.addIngredient(20, 2, "test add ingredient");
    test1.addStep(*step1, 2);

    JsonHandler sut;
    sut.addRecipe(test);
    sut.addRecipe(test1);
    sut.writeJson();
}

#elif DEBUG == 3

#include "recipe.h"
#include "json/JsonHandler.h"
#include "iostream"
#include "dist/json/json.h"
#include <fstream>
#include <QStandardPaths>
#include <QDir>
#include <QString>

using namespace std;

int main() {
    JsonHandler sut;
    sut.getRecipes();
    auto recipes = sut.getRecipes();

    for (auto i : recipes) {
        i.out();
    }
}

#endif
