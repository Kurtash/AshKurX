#include "finddialog.h"
#include "ui_finddialog.h"

FindDialog::FindDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindDialog)
{
    ui->setupUi(this);

    connect(ui->okButton,SIGNAL(clicked(bool)),this,SLOT(ok_next()));
//    setWindowFlags(Qt::WindowStaysOnTopHint);
}

void FindDialog::ok_next(){

    QString s = ui->lineEdit->text().trimmed();
    emit find_next(s,ui->caseCheckbox->isChecked()?Qt::CaseSensitive:Qt::CaseInsensitive);
}

FindDialog::~FindDialog()
{
    delete ui;
}
