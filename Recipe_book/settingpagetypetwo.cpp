#include "settingpagetypetwo.h"
#include "ui_settingpagetypetwo.h"
#include "selectpagetype.h"

SettingPageTypeTwo::SettingPageTypeTwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingPageTypeTwo)
{
    ui->setupUi(this);

    connect(ui->addPageButton, &QPushButton::clicked,
            parent, &SelectPageType::show);
    connect(ui->addPageButton, &QPushButton::clicked,
            this, &SettingPageTypeTwo::deleteLater);
    connect(ui->finishButton, &QPushButton::clicked,
            this, &SettingPageTypeTwo::deleteLater);
}

SettingPageTypeTwo::~SettingPageTypeTwo()
{
    delete ui;
}
