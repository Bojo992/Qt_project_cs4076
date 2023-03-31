/********************************************************************************
** Form generated from reading UI file 'recipepagetypeone.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEPAGETYPEONE_H
#define UI_RECIPEPAGETYPEONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecipePageTypeOne
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *backButton;
    QPushButton *nextButton;
    QTextBrowser *recipeTextField;
    QListWidget *ingredientsList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecipePageTypeOne)
    {
        if (RecipePageTypeOne->objectName().isEmpty())
            RecipePageTypeOne->setObjectName("RecipePageTypeOne");
        RecipePageTypeOne->resize(800, 600);
        centralwidget = new QWidget(RecipePageTypeOne);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");

        gridLayout->addWidget(backButton, 1, 0, 1, 1, Qt::AlignLeft);

        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName("nextButton");

        gridLayout->addWidget(nextButton, 1, 1, 1, 1, Qt::AlignRight);

        recipeTextField = new QTextBrowser(centralwidget);
        recipeTextField->setObjectName("recipeTextField");

        gridLayout->addWidget(recipeTextField, 0, 1, 1, 1);

        ingredientsList = new QListWidget(centralwidget);
        ingredientsList->setObjectName("ingredientsList");
        ingredientsList->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(ingredientsList, 0, 0, 1, 1);

        RecipePageTypeOne->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RecipePageTypeOne);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        RecipePageTypeOne->setMenuBar(menubar);
        statusbar = new QStatusBar(RecipePageTypeOne);
        statusbar->setObjectName("statusbar");
        RecipePageTypeOne->setStatusBar(statusbar);

        retranslateUi(RecipePageTypeOne);

        QMetaObject::connectSlotsByName(RecipePageTypeOne);
    } // setupUi

    void retranslateUi(QMainWindow *RecipePageTypeOne)
    {
        RecipePageTypeOne->setWindowTitle(QCoreApplication::translate("RecipePageTypeOne", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("RecipePageTypeOne", "Back", nullptr));
        nextButton->setText(QCoreApplication::translate("RecipePageTypeOne", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipePageTypeOne: public Ui_RecipePageTypeOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEPAGETYPEONE_H
