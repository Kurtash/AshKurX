#include "mainwindow.h"
#include "dialog01.h"

#include "ui_mainwindow.h"

//#include"QWidget"
//#include"QFile"
//#include"QComboBox"
//#include"QtUiTools/QUiLoader"

//#include<QContextMenuEvent>
#include<QLabel>
#include<QMessageBox>
#include<QPushButton>
#include<QTextCursor>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fd = new FindDialog;

//ui->action_N->setStatusTip(tr("Create a new spreadsheet file"));
    connect(ui->action_N,SIGNAL(triggered(bool)),this,SLOT(new_file()));
    connect(ui->action_F,SIGNAL(triggered(bool)),this,SLOT(to_find()));
    connect(fd,SIGNAL(find_next(QString&,Qt::CaseSensitivity)),this,SLOT(manageText(QString&,Qt::CaseSensitivity)));

//    QLabel* locationLabel = new QLabel(" W999 ");
//    locationLabel->setAlignment(Qt::AlignHCenter);
//    locationLabel->setMinimumSize(locationLabel->sizeHint());

//    QLabel* formulaLabel = new QLabel;
//    formulaLabel->setIndent(3);

//    statusBar()->addWidget(locationLabel);
//    statusBar()->addWidget(formulaLabel, 1);

}

void MainWindow::new_file(){

    if(!ui->textEdit->toPlainText().compare("")){
        ui->textEdit->clear();
    }else{
        QPushButton* qpush1 = new QPushButton(tr("是(&Y)"),this);
        QPushButton* qpush2 = new QPushButton(tr("否(&N)"),this);
        QMessageBox *mymsgbox = new QMessageBox;
        mymsgbox->addButton(qpush1,QMessageBox::AcceptRole);
        mymsgbox->addButton(qpush2,QMessageBox::RejectRole);
//        mymsgbox->setStandardButtons(qpush1,qpush2);
        mymsgbox->setDefaultButton(qpush2);
        mymsgbox->setWindowIcon(QIcon(":/img/img/11.jpg"));
        mymsgbox->setIcon(QMessageBox::Warning);
        mymsgbox->setWindowTitle(tr("提示"));
        mymsgbox->setText(tr("是否放弃而去新建"));
        mymsgbox->show();
        int i = mymsgbox->exec();
        if(!i){
            ui->textEdit->clear();
        }
//        QMessageBox::warning(this,tr("提示"),tr("是否放弃而去新建"),qpush1,qpush2);
    }

}

void MainWindow::to_find(){
    fd->show();
//    fd->raise();
//fd->setWindowFlags(Qt::WindowStaysOnTopHint);
//    fd->activateWindow();

}

void MainWindow::manageText(QString& str,Qt::CaseSensitivity cs){


//    QTextCursor tmpCursor = ui->textEdit->textCursor();
//    QTextBlock block = ui->textEdit->document()->findBlockByNumber(nLineNum);

//    tmpCursor.setPosition(20);
//    ui->textEdit->setTextCursor(tmpCursor);
    QRegExp qr;
    qr.setPattern(str);
    qr.setCaseSensitivity(cs);
    if(ui->textEdit->find(qr,QTextDocument::FindFlags()))//查找后一个
        {

//        if(ui->textEdit->toPlainText().contains(str,cs)){

//            // 查找到后高亮显示
//            QPalette palette = ui->textEdit->palette();
//            palette.setColor(QPalette::Highlight,palette.color(QPalette::Active,QPalette::Highlight));
//            ui->textEdit->setPalette(palette);
//        }
        }
        else
        {
            QMessageBox::information(this,tr("注意"),tr("没有找到内容"),QMessageBox::Ok);
        }

}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu Context;
    Context.addAction(ui->action_C);
    Context.addAction(ui->action_P);
    Context.addAction(ui->action_F);
    Context.exec(QCursor::pos());
}

MainWindow::~MainWindow()
{
    delete ui;
}
