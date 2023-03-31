/********************************************************************************
** Form generated from reading UI file 'selectpagetype.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPAGETYPE_H
#define UI_SELECTPAGETYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SelectPageType
{
public:
    QGridLayout *gridLayout;
    QPushButton *nextButton;
    QRadioButton *type1Radio;
    QGraphicsView *type2GraphicsView;
    QGraphicsView *type1GraphicsView;
    QRadioButton *type2Radio;
    QPushButton *pushButton;

    void setupUi(QDialog *SelectPageType)
    {
        if (SelectPageType->objectName().isEmpty())
            SelectPageType->setObjectName("SelectPageType");
        SelectPageType->resize(800, 600);
        gridLayout = new QGridLayout(SelectPageType);
        gridLayout->setObjectName("gridLayout");
        nextButton = new QPushButton(SelectPageType);
        nextButton->setObjectName("nextButton");

        gridLayout->addWidget(nextButton, 3, 1, 1, 1, Qt::AlignRight);

        type1Radio = new QRadioButton(SelectPageType);
        type1Radio->setObjectName("type1Radio");

        gridLayout->addWidget(type1Radio, 2, 0, 1, 1, Qt::AlignHCenter);

        type2GraphicsView = new QGraphicsView(SelectPageType);
        type2GraphicsView->setObjectName("type2GraphicsView");

        gridLayout->addWidget(type2GraphicsView, 0, 1, 1, 1);

        type1GraphicsView = new QGraphicsView(SelectPageType);
        type1GraphicsView->setObjectName("type1GraphicsView");

        gridLayout->addWidget(type1GraphicsView, 0, 0, 1, 1);

        type2Radio = new QRadioButton(SelectPageType);
        type2Radio->setObjectName("type2Radio");

        gridLayout->addWidget(type2Radio, 2, 1, 1, 2, Qt::AlignHCenter);

        pushButton = new QPushButton(SelectPageType);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 3, 0, 1, 1, Qt::AlignLeft);


        retranslateUi(SelectPageType);

        QMetaObject::connectSlotsByName(SelectPageType);
    } // setupUi

    void retranslateUi(QDialog *SelectPageType)
    {
        SelectPageType->setWindowTitle(QCoreApplication::translate("SelectPageType", "Dialog", nullptr));
        nextButton->setText(QCoreApplication::translate("SelectPageType", "Next", nullptr));
        type1Radio->setText(QCoreApplication::translate("SelectPageType", "Page Type 1", nullptr));
        type2Radio->setText(QCoreApplication::translate("SelectPageType", "Page Type 2", nullptr));
        pushButton->setText(QCoreApplication::translate("SelectPageType", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectPageType: public Ui_SelectPageType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPAGETYPE_H
