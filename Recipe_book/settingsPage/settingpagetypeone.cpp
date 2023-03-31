#include "settingpagetypeone.h"
#include "ui_settingpagetypeone.h"
#include "selectpagetype.h"

SettingPageTypeOne::SettingPageTypeOne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingPageTypeOne)
{
    ui->setupUi(this);
}

SettingPageTypeOne::~SettingPageTypeOne()
{
    delete ui;
}

void SettingPageTypeOne::on_addPageButton_clicked()
{
    string *text = new string(ui->recipeTextField->toPlainText().toStdString());
    emit(sendStep(1, *text));
    deleteLater();
}

void SettingPageTypeOne::on_resetButton_clicked()
{
    ui->recipeTextField->clear();
}
