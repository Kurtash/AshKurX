#include "mainwindow.h"
#include "dialog01.h"
#include "dialog02.h"
#include <QApplication>

#include"QWidget"
#include"QFile"
#include"QComboBox"
#include"QtUiTools/QUiLoader"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    Dialog02 dia;
//    dia.show();

//    QUiLoader loader;

//             QFile file(":/dialog02.ui"); //调入UI文件
//             file.open(QFile::ReadOnly);
//             QWidget *tab_Modbus_wdg = loader.load(&file);
//             file.close();

    return a.exec();
}
