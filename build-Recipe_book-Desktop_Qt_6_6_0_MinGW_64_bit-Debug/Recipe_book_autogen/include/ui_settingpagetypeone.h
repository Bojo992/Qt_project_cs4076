/********************************************************************************
** Form generated from reading UI file 'settingpagetypeone.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGPAGETYPEONE_H
#define UI_SETTINGPAGETYPEONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingPageTypeOne
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *recipeTextField;
    QGridLayout *gridLayout_2;
    QPushButton *resetButton;
    QPushButton *addPageButton;

    void setupUi(QDialog *SettingPageTypeOne)
    {
        if (SettingPageTypeOne->objectName().isEmpty())
            SettingPageTypeOne->setObjectName("SettingPageTypeOne");
        SettingPageTypeOne->resize(800, 600);
        gridLayout = new QGridLayout(SettingPageTypeOne);
        gridLayout->setObjectName("gridLayout");
        recipeTextField = new QPlainTextEdit(SettingPageTypeOne);
        recipeTextField->setObjectName("recipeTextField");

        gridLayout->addWidget(recipeTextField, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        resetButton = new QPushButton(SettingPageTypeOne);
        resetButton->setObjectName("resetButton");

        gridLayout_2->addWidget(resetButton, 0, 0, 1, 1, Qt::AlignLeft);

        addPageButton = new QPushButton(SettingPageTypeOne);
        addPageButton->setObjectName("addPageButton");

        gridLayout_2->addWidget(addPageButton, 0, 1, 1, 1, Qt::AlignRight);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);


        retranslateUi(SettingPageTypeOne);

        QMetaObject::connectSlotsByName(SettingPageTypeOne);
    } // setupUi

    void retranslateUi(QDialog *SettingPageTypeOne)
    {
        SettingPageTypeOne->setWindowTitle(QCoreApplication::translate("SettingPageTypeOne", "Dialog", nullptr));
        resetButton->setText(QCoreApplication::translate("SettingPageTypeOne", "Reset", nullptr));
        addPageButton->setText(QCoreApplication::translate("SettingPageTypeOne", "Add page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingPageTypeOne: public Ui_SettingPageTypeOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPAGETYPEONE_H
