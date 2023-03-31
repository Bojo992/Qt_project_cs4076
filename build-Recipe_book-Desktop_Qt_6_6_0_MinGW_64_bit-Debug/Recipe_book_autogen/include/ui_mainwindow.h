/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *settingsOption;
    QAction *quitOption;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListWidget *recipeListWidget;
    QPushButton *addNewRecipeButton;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        settingsOption = new QAction(MainWindow);
        settingsOption->setObjectName("settingsOption");
        quitOption = new QAction(MainWindow);
        quitOption->setObjectName("quitOption");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        recipeListWidget = new QListWidget(centralwidget);
        recipeListWidget->setObjectName("recipeListWidget");

        gridLayout->addWidget(recipeListWidget, 1, 0, 1, 1);

        addNewRecipeButton = new QPushButton(centralwidget);
        addNewRecipeButton->setObjectName("addNewRecipeButton");

        gridLayout->addWidget(addNewRecipeButton, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(settingsOption);
        menuOptions->addAction(quitOption);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        settingsOption->setText(QCoreApplication::translate("MainWindow", "&Settings", nullptr));
#if QT_CONFIG(tooltip)
        settingsOption->setToolTip(QCoreApplication::translate("MainWindow", "Application Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        quitOption->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(tooltip)
        quitOption->setToolTip(QCoreApplication::translate("MainWindow", "Quit Application", nullptr));
#endif // QT_CONFIG(tooltip)
        addNewRecipeButton->setText(QCoreApplication::translate("MainWindow", "Add recipe", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "&Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
