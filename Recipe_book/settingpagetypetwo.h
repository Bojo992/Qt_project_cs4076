#ifndef SETTINGPAGETYPETWO_H
#define SETTINGPAGETYPETWO_H

#include <QDialog>

namespace Ui {
class SettingPageTypeTwo;
}

class SettingPageTypeTwo : public QDialog
{
    Q_OBJECT

public:
    explicit SettingPageTypeTwo(QWidget *parent = nullptr);
    ~SettingPageTypeTwo();

private:
    Ui::SettingPageTypeTwo *ui;
};

#endif // SETTINGPAGETYPETWO_H
