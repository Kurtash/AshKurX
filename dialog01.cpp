#include "dialog01.h"
#include "ui_dialog01.h"
#include <QDialogButtonBox>
#include <QPushButton>
#include <QDebug>

Dialog01::Dialog01(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog01)
{
    ui->setupUi(this);

    QDialogButtonBox* qDB = new QDialogButtonBox(this);
    qDB->setStandardButtons(QDialogButtonBox::Ok);
    qDB->button(QDialogButtonBox::Ok)->setText(tr("确认"));
    ui->horizontalLayout_2->addWidget(qDB);
    connect(qDB, &QDialogButtonBox::accepted, this, &QDialog::accept);

}

void QDialog::accept(){
    qDebug() << "aaa";
}

Dialog01::~Dialog01()
{
    delete ui;
}
