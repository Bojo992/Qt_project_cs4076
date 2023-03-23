/********************************************************************************
** Form generated from reading UI file 'settingpagetypeone.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
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
    QPushButton *addPhotoButton;
    QPushButton *resetButton;
    QPushButton *addPageButton;
    QPushButton *previewButton;
    QPushButton *finishButton;

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

        addPhotoButton = new QPushButton(SettingPageTypeOne);
        addPhotoButton->setObjectName("addPhotoButton");

        gridLayout->addWidget(addPhotoButton, 0, 1, 1, 1, Qt::AlignTop);

        resetButton = new QPushButton(SettingPageTypeOne);
        resetButton->setObjectName("resetButton");

        gridLayout->addWidget(resetButton, 1, 0, 1, 1, Qt::AlignLeft);

        addPageButton = new QPushButton(SettingPageTypeOne);
        addPageButton->setObjectName("addPageButton");

        gridLayout->addWidget(addPageButton, 1, 1, 1, 1);

        previewButton = new QPushButton(SettingPageTypeOne);
        previewButton->setObjectName("previewButton");

        gridLayout->addWidget(previewButton, 2, 0, 1, 1, Qt::AlignLeft);

        finishButton = new QPushButton(SettingPageTypeOne);
        finishButton->setObjectName("finishButton");

        gridLayout->addWidget(finishButton, 2, 1, 1, 1);


        retranslateUi(SettingPageTypeOne);

        QMetaObject::connectSlotsByName(SettingPageTypeOne);
    } // setupUi

    void retranslateUi(QDialog *SettingPageTypeOne)
    {
        SettingPageTypeOne->setWindowTitle(QCoreApplication::translate("SettingPageTypeOne", "Dialog", nullptr));
        addPhotoButton->setText(QCoreApplication::translate("SettingPageTypeOne", "Add photo", nullptr));
        resetButton->setText(QCoreApplication::translate("SettingPageTypeOne", "Reset", nullptr));
        addPageButton->setText(QCoreApplication::translate("SettingPageTypeOne", "Add page", nullptr));
        previewButton->setText(QCoreApplication::translate("SettingPageTypeOne", "Preview", nullptr));
        finishButton->setText(QCoreApplication::translate("SettingPageTypeOne", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingPageTypeOne: public Ui_SettingPageTypeOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPAGETYPEONE_H
