#include "dialog02.h"
#include "ui_dialog02.h"

#include"QWidget"
#include"QFile"
#include"QComboBox"
#include"QUiLoader"

Dialog02::Dialog02(QWidget *parent) :
    QDialog(parent),
  ui(new Ui::Dialog02)
{
    ui->setupUi(this);

//    QIcon icon;
//    icon.addFile(QStringLiteral(":/img/img/11.jpg"), QSize(), QIcon::Normal, QIcon::Off);
//    setWindowIcon(icon);

//    setWindowIcon(QIcon(":/img/img/11.jpg"));

//    QUiLoader qUiLoader;
//    QFile file("dialog02.ui");

////    const QDir &workdir("");
////    qUiLoader.setWorkingDirectory(workdir);

//    QWidget* qWidget = qUiLoader.load(&file,this);

//        QUiLoader loader;
//        QFile file(":/img/dialog02.ui");
//        file.open(QFile::ReadOnly);
//        QWidget *myWidget = loader.load(&file, this);
//        myWidget->show();
//        file.close();

}

Dialog02::~Dialog02()
{
    delete ui;
}
