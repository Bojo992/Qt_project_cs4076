/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSlider *horizontalSlider;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QCheckBox *red;
    QCheckBox *green;
    QCheckBox *blue;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName("settings");
        settings->resize(350, 221);
        gridLayout = new QGridLayout(settings);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        horizontalSlider = new QSlider(settings);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMaximumSize(QSize(16777215, 16777215));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(5, 60, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        red = new QCheckBox(settings);
        red->setObjectName("red");

        horizontalLayout->addWidget(red);

        green = new QCheckBox(settings);
        green->setObjectName("green");

        horizontalLayout->addWidget(green);

        blue = new QCheckBox(settings);
        blue->setObjectName("blue");

        horizontalLayout->addWidget(blue);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Dialog", nullptr));
        red->setText(QCoreApplication::translate("settings", "Red", nullptr));
        green->setText(QCoreApplication::translate("settings", "Green", nullptr));
        blue->setText(QCoreApplication::translate("settings", "Blue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
