/********************************************************************************
** Form generated from reading UI file 'setingredients.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETINGREDIENTS_H
#define UI_SETINGREDIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setIngredients
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListView *ingredientList;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *amountLine;
    QLabel *label;
    QLineEdit *nameLine;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *addIngredienButton;
    QPushButton *finishButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *setIngredients)
    {
        if (setIngredients->objectName().isEmpty())
            setIngredients->setObjectName("setIngredients");
        setIngredients->resize(800, 600);
        centralwidget = new QWidget(setIngredients);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        ingredientList = new QListView(centralwidget);
        ingredientList->setObjectName("ingredientList");

        gridLayout->addWidget(ingredientList, 0, 0, 1, 1);

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

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        addIngredienButton = new QPushButton(centralwidget);
        addIngredienButton->setObjectName("addIngredienButton");

        horizontalLayout->addWidget(addIngredienButton);

        finishButton = new QPushButton(centralwidget);
        finishButton->setObjectName("finishButton");

        horizontalLayout->addWidget(finishButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        setIngredients->setCentralWidget(centralwidget);
        menubar = new QMenuBar(setIngredients);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        setIngredients->setMenuBar(menubar);
        statusbar = new QStatusBar(setIngredients);
        statusbar->setObjectName("statusbar");
        setIngredients->setStatusBar(statusbar);

        retranslateUi(setIngredients);

        QMetaObject::connectSlotsByName(setIngredients);
    } // setupUi

    void retranslateUi(QMainWindow *setIngredients)
    {
        setIngredients->setWindowTitle(QCoreApplication::translate("setIngredients", "setIngredients", nullptr));
        label_2->setText(QCoreApplication::translate("setIngredients", "Amount", nullptr));
        label->setText(QCoreApplication::translate("setIngredients", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("setIngredients", "Type", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("setIngredients", "Mg", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("setIngredients", "G", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("setIngredients", "Kg", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("setIngredients", "ml", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("setIngredients", "Liters", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("setIngredients", "Spoons", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("setIngredients", "Tea spoons", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("setIngredients", "Caps", nullptr));

        addIngredienButton->setText(QCoreApplication::translate("setIngredients", "Add ingredient", nullptr));
        finishButton->setText(QCoreApplication::translate("setIngredients", "Srat adding steps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setIngredients: public Ui_setIngredients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETINGREDIENTS_H
