/********************************************************************************
** Form generated from reading UI file 'listingredients.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTINGREDIENTS_H
#define UI_LISTINGREDIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_listIngredients
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *listIngredients)
    {
        if (listIngredients->objectName().isEmpty())
            listIngredients->setObjectName("listIngredients");
        listIngredients->resize(400, 300);
        gridLayout = new QGridLayout(listIngredients);
        gridLayout->setObjectName("gridLayout");
        listWidget = new QListWidget(listIngredients);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        retranslateUi(listIngredients);

        QMetaObject::connectSlotsByName(listIngredients);
    } // setupUi

    void retranslateUi(QDialog *listIngredients)
    {
        listIngredients->setWindowTitle(QCoreApplication::translate("listIngredients", "listIngredients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listIngredients: public Ui_listIngredients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTINGREDIENTS_H
