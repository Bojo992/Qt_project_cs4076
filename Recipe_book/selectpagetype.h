#ifndef SELECTPAGETYPE_H
#define SELECTPAGETYPE_H

#include <QDialog>

namespace Ui {
class SelectPageType;
}

class SelectPageType : public QDialog
{
    Q_OBJECT

public:
    explicit SelectPageType(QWidget *parent = nullptr);
    ~SelectPageType();

public slots:
    void on_nextButton_clicked();

private:
    Ui::SelectPageType *ui;


};

#endif // SELECTPAGETYPE_H
