/********************************************************************************
** Form generated from reading UI file 'settingpagetypetwo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGPAGETYPETWO_H
#define UI_SETTINGPAGETYPETWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingPageTypeTwo
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *resetButton;
    QPushButton *previewButton;
    QVBoxLayout *verticalLayout;
    QPushButton *addPageButton;
    QPushButton *finishButton;
    QPlainTextEdit *recipeTextEdit;

    void setupUi(QDialog *SettingPageTypeTwo)
    {
        if (SettingPageTypeTwo->objectName().isEmpty())
            SettingPageTypeTwo->setObjectName("SettingPageTypeTwo");
        SettingPageTypeTwo->resize(800, 600);
        gridLayout = new QGridLayout(SettingPageTypeTwo);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        resetButton = new QPushButton(SettingPageTypeTwo);
        resetButton->setObjectName("resetButton");

        verticalLayout_2->addWidget(resetButton, 0, Qt::AlignLeft);

        previewButton = new QPushButton(SettingPageTypeTwo);
        previewButton->setObjectName("previewButton");

        verticalLayout_2->addWidget(previewButton, 0, Qt::AlignLeft);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addPageButton = new QPushButton(SettingPageTypeTwo);
        addPageButton->setObjectName("addPageButton");

        verticalLayout->addWidget(addPageButton, 0, Qt::AlignRight);

        finishButton = new QPushButton(SettingPageTypeTwo);
        finishButton->setObjectName("finishButton");

        verticalLayout->addWidget(finishButton, 0, Qt::AlignRight);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 2, 2);

        recipeTextEdit = new QPlainTextEdit(SettingPageTypeTwo);
        recipeTextEdit->setObjectName("recipeTextEdit");

        gridLayout->addWidget(recipeTextEdit, 0, 0, 1, 1);


        retranslateUi(SettingPageTypeTwo);

        QMetaObject::connectSlotsByName(SettingPageTypeTwo);
    } // setupUi

    void retranslateUi(QDialog *SettingPageTypeTwo)
    {
        SettingPageTypeTwo->setWindowTitle(QCoreApplication::translate("SettingPageTypeTwo", "Dialog", nullptr));
        resetButton->setText(QCoreApplication::translate("SettingPageTypeTwo", "Reset", nullptr));
        previewButton->setText(QCoreApplication::translate("SettingPageTypeTwo", "Preview", nullptr));
        addPageButton->setText(QCoreApplication::translate("SettingPageTypeTwo", "Add page", nullptr));
        finishButton->setText(QCoreApplication::translate("SettingPageTypeTwo", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingPageTypeTwo: public Ui_SettingPageTypeTwo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPAGETYPETWO_H
