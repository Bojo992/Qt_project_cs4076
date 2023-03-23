/********************************************************************************
** Form generated from reading UI file 'recipepagetypetwo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEPAGETYPETWO_H
#define UI_RECIPEPAGETYPETWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecipePageTypeTwo
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *buttonsLayout;
    QPushButton *backButton;
    QPushButton *nextButton;
    QPlainTextEdit *recipeTextField;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecipePageTypeTwo)
    {
        if (RecipePageTypeTwo->objectName().isEmpty())
            RecipePageTypeTwo->setObjectName("RecipePageTypeTwo");
        RecipePageTypeTwo->resize(800, 600);
        centralwidget = new QWidget(RecipePageTypeTwo);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName("buttonsLayout");
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");

        buttonsLayout->addWidget(backButton, 0, Qt::AlignLeft);

        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName("nextButton");

        buttonsLayout->addWidget(nextButton, 0, Qt::AlignRight);


        gridLayout->addLayout(buttonsLayout, 1, 0, 2, 2);

        recipeTextField = new QPlainTextEdit(centralwidget);
        recipeTextField->setObjectName("recipeTextField");

        gridLayout->addWidget(recipeTextField, 0, 0, 1, 1);

        RecipePageTypeTwo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RecipePageTypeTwo);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        RecipePageTypeTwo->setMenuBar(menubar);
        statusbar = new QStatusBar(RecipePageTypeTwo);
        statusbar->setObjectName("statusbar");
        RecipePageTypeTwo->setStatusBar(statusbar);

        retranslateUi(RecipePageTypeTwo);

        QMetaObject::connectSlotsByName(RecipePageTypeTwo);
    } // setupUi

    void retranslateUi(QMainWindow *RecipePageTypeTwo)
    {
        RecipePageTypeTwo->setWindowTitle(QCoreApplication::translate("RecipePageTypeTwo", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("RecipePageTypeTwo", "Back", nullptr));
        nextButton->setText(QCoreApplication::translate("RecipePageTypeTwo", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipePageTypeTwo: public Ui_RecipePageTypeTwo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEPAGETYPETWO_H
