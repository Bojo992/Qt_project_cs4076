/********************************************************************************
** Form generated from reading UI file 'selectingredients.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTINGREDIENTS_H
#define UI_SELECTINGREDIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectIngredients
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *recipeName;
    QListWidget *ingredientList;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *amountLine;
    QLabel *label;
    QLineEdit *nameLine;
    QLabel *label_3;
    QComboBox *typeBox;
    QPushButton *addIngredientButton;
    QPushButton *finishButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *selectIngredients)
    {
        if (selectIngredients->objectName().isEmpty())
            selectIngredients->setObjectName("selectIngredients");
        selectIngredients->resize(800, 600);
        centralwidget = new QWidget(selectIngredients);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        recipeName = new QLineEdit(centralwidget);
        recipeName->setObjectName("recipeName");

        horizontalLayout_2->addWidget(recipeName);


        verticalLayout->addLayout(horizontalLayout_2);

        ingredientList = new QListWidget(centralwidget);
        ingredientList->setObjectName("ingredientList");

        verticalLayout->addWidget(ingredientList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        amountLine = new QLineEdit(centralwidget);
        amountLine->setObjectName("amountLine");

        horizontalLayout->addWidget(amountLine);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nameLine = new QLineEdit(centralwidget);
        nameLine->setObjectName("nameLine");

        horizontalLayout->addWidget(nameLine);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        typeBox = new QComboBox(centralwidget);
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->addItem(QString());
        typeBox->setObjectName("typeBox");

        horizontalLayout->addWidget(typeBox);

        addIngredientButton = new QPushButton(centralwidget);
        addIngredientButton->setObjectName("addIngredientButton");

        horizontalLayout->addWidget(addIngredientButton);

        finishButton = new QPushButton(centralwidget);
        finishButton->setObjectName("finishButton");

        horizontalLayout->addWidget(finishButton);


        verticalLayout->addLayout(horizontalLayout);

        selectIngredients->setCentralWidget(centralwidget);
        menubar = new QMenuBar(selectIngredients);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        selectIngredients->setMenuBar(menubar);
        statusbar = new QStatusBar(selectIngredients);
        statusbar->setObjectName("statusbar");
        selectIngredients->setStatusBar(statusbar);

        retranslateUi(selectIngredients);

        QMetaObject::connectSlotsByName(selectIngredients);
    } // setupUi

    void retranslateUi(QMainWindow *selectIngredients)
    {
        selectIngredients->setWindowTitle(QCoreApplication::translate("selectIngredients", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("selectIngredients", "Recipe name", nullptr));
        label_2->setText(QCoreApplication::translate("selectIngredients", "Amount", nullptr));
        label->setText(QCoreApplication::translate("selectIngredients", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("selectIngredients", "Type", nullptr));
        typeBox->setItemText(0, QCoreApplication::translate("selectIngredients", "Mg", nullptr));
        typeBox->setItemText(1, QCoreApplication::translate("selectIngredients", "G", nullptr));
        typeBox->setItemText(2, QCoreApplication::translate("selectIngredients", "Kg", nullptr));
        typeBox->setItemText(3, QCoreApplication::translate("selectIngredients", "ml", nullptr));
        typeBox->setItemText(4, QCoreApplication::translate("selectIngredients", "Liters", nullptr));
        typeBox->setItemText(5, QCoreApplication::translate("selectIngredients", "Spoons", nullptr));
        typeBox->setItemText(6, QCoreApplication::translate("selectIngredients", "Tea spoons", nullptr));
        typeBox->setItemText(7, QCoreApplication::translate("selectIngredients", "Caps", nullptr));

        addIngredientButton->setText(QCoreApplication::translate("selectIngredients", "Add ingredient", nullptr));
        finishButton->setText(QCoreApplication::translate("selectIngredients", "Srat adding steps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectIngredients: public Ui_selectIngredients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTINGREDIENTS_H
