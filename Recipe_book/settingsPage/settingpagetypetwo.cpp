#include "settingpagetypetwo.h"
#include "ui_settingpagetypetwo.h"
#include "selectpagetype.h"

SettingPageTypeTwo::SettingPageTypeTwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingPageTypeTwo)
{
    ui->setupUi(this);
    this->setWindowTitle("Settings");

}

SettingPageTypeTwo::~SettingPageTypeTwo()
{
    delete ui;
}

void SettingPageTypeTwo::on_addPageButton_clicked()
{
    string *text = new string(ui->recipeTextEdit->toPlainText().toStdString());
    emit(sendStep(2, *text));
    deleteLater();
}
void SettingPageTypeTwo::on_resetButton_clicked()
{
    ui->recipeTextEdit->clear();
}

