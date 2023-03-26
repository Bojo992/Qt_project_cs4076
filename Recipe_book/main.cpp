//#include "mainwindow.h"
//
//#include <QApplication>
//
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();
//}
#include "recipe.h"
#include "JsonHandler.h"
#include "iostream"
#include "dist/json/json.h"
using namespace std;

int main() {
    Recipe test;
    string *name = new string("test new recipe");
    string *step1 = new string("test add step to the recipe");
    string *step2 = new string("test add extra step to the recipe");
    test.addName(name);
    test.addIngredient(20, 2, "test add ingredient");
    test.addStep(step1, 1, nullptr);
    test.addStep(step2, 2, nullptr);

    cout << "test" << endl;

    cout << test.asJson()->asString() << endl;

    delete &test;
}