#include "selectpagetype.h"
#include "ui_selectpagetype.h"
#include "settingpagetypeone.h"
#include "settingpagetypetwo.h"

SelectPageType::SelectPageType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectPageType)
{
    ui->setupUi(this);
}

SelectPageType::~SelectPageType()
{
    delete ui;
}


void SelectPageType::on_nextButton_clicked()
{
    SelectPageType *s = this;
    if (ui->type1Radio->isChecked() == true) {
        SettingPageTypeOne *page = new SettingPageTypeOne(this);
        page->show();
        hide();

    } else if (ui->type2Radio->isChecked() == true) {
        SettingPageTypeTwo *page = new SettingPageTypeTwo;
        page->show();
        close();
    }

}

