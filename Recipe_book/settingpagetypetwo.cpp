#include "settingpagetypetwo.h"
#include "ui_settingpagetypetwo.h"

SettingPageTypeTwo::SettingPageTypeTwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingPageTypeTwo)
{
    ui->setupUi(this);
}

SettingPageTypeTwo::~SettingPageTypeTwo()
{
    delete ui;
}
