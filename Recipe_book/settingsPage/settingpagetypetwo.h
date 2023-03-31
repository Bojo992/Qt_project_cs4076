#ifndef SETTINGPAGETYPETWO_H
#define SETTINGPAGETYPETWO_H

#include <QDialog>
#include "selectpagetype.h"

namespace Ui {
class SettingPageTypeTwo;
}

class SettingPageTypeTwo : public QDialog
{
    Q_OBJECT

public:
    explicit SettingPageTypeTwo(QWidget *parent = nullptr);
    ~SettingPageTypeTwo();
public slots:
    void on_addPageButton_clicked();

    void on_resetButton_clicked();
signals:

    void sendStep(int, string);
private:

    Ui::SettingPageTypeTwo *ui;
};

#endif // SETTINGPAGETYPETWO_H
