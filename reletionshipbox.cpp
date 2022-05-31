#include "reletionshipbox.h"
#include "ui_reletionshipbox.h"

reletionshipBox::reletionshipBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reletionshipBox)
{
    ui->setupUi(this);
}

reletionshipBox::~reletionshipBox()
{
    delete ui;
}
