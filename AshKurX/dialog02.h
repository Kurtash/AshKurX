#ifndef DIALOG02_H
#define DIALOG02_H

#include <QDialog>

namespace Ui {
class Dialog02;
}

class Dialog02 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog02(QWidget *parent = 0);
    ~Dialog02();

private:
    Ui::Dialog02 *ui;
};

#endif // DIALOG02_H
