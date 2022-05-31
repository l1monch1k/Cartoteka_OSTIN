#include "ssbox.h"
#include "ui_ssbox.h"

ssBox::ssBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ssBox)
{
    ui->setupUi(this);
}

ssBox::~ssBox()
{
    delete ui;
}
