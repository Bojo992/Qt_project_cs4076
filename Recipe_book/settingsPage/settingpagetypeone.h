#ifndef SETTINGPAGETYPEONE_H
#define SETTINGPAGETYPEONE_H

#include <QDialog>
#include "selectpagetype.h"

namespace Ui {
class SettingPageTypeOne;
}

class SettingPageTypeOne : public QDialog
{
    Q_OBJECT

public:
    explicit SettingPageTypeOne(QWidget *parent = nullptr);
    ~SettingPageTypeOne();
public slots:
    void on_addPageButton_clicked();

    void on_resetButton_clicked();
signals:

    void sendStep(int, string);

private:

    Ui::SettingPageTypeOne *ui;
};

#endif // SETTINGPAGETYPEONE_H
