#include "profilebox.h"
#include "ui_profilebox.h"

ProfileBox::ProfileBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProfileBox)
{
    ui->setupUi(this);

}

void ProfileBox::SetParams(int i , QIcon icon, QString f, QString s, QString t)
{
    index = i;
    ui->miniPhoto->setIcon(icon);
    ui->Name->setText(f);
    ui->Name_2->setText(s);
    ui->Name_3->setText(t);
}

ProfileBox::~ProfileBox()
{
    delete ui;
}

void ProfileBox::on_pushButton_clicked()
{
    ui->Name->setText("хуй");
}

