#define DEBUG 2

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
    test.addName(name);
    test.addIngredient(20, 2, "test add ingredient");
    test.addStep(*step1, 1, *img1);
    test.addStep(*step2, 2, *img2);

    cout << "test" << endl;

    cout << *test.asJson() << endl;
}

#elif DEBUG == 2

#include "recipe.h"
#include "json/JsonHandler.h"
#include "iostream"
#include "dist/json/json.h"
#include <fstream>

using namespace std;

int main() {
    Recipe test;
    string *name = new string("test new recipe");
    string *step1 = new string("test add step to the recipe");
    string *step2 = new string("test add extra step to the recipe");
    string *img1 = new string("test add step to the recipe");
    string *img2 = new string("test add extra step to the recipe");
    test.addName(name);
    test.addIngredient(20, 2, "test add ingredient");
    test.addStep(*step1, 1, *img1);
    test.addStep(*step2, 2, *img2);

    JsonHandler sut;
    test.asJson();
    sut.addRecipe(test.asJson());
//    for (auto i : (*sut.getRecipesJson()).getMemberNames()) {
//        cout << i << endl;
//    }


//    fstream1.close();
//    sut.writeJson();
}

#endif
