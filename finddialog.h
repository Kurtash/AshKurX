#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

namespace Ui {
class FindDialog;
}

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindDialog(QWidget *parent = 0);
    ~FindDialog();

private:
    Ui::FindDialog *ui;

signals:
    void find_next(QString& str,Qt::CaseSensitivity cs);

private slots:
    void ok_next();

};

#endif // FINDDIALOG_H
