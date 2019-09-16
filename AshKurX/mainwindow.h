#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "finddialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    FindDialog* fd;
    void contextMenuEvent(QContextMenuEvent *event);

private slots:
    void new_file();
    void to_find();
    void manageText(QString& str,Qt::CaseSensitivity cs);
};

#endif // MAINWINDOW_H
