#include "settingpagetypeone.h"
#include "ui_settingpagetypeone.h"
#include "selectpagetype.h"

SettingPageTypeOne::SettingPageTypeOne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingPageTypeOne)
{
    ui->setupUi(this);



    connect(ui->addPageButton, &QPushButton::clicked, parent, &SettingPageTypeOne::show);
    connect(ui->addPageButton, &QPushButton::clicked, this, &SettingPageTypeOne::close);
    connect(ui->finishButton, &QPushButton::clicked, this, &SettingPageTypeOne::deleteLater);
}

SettingPageTypeOne::~SettingPageTypeOne()
{
    delete ui;
}
