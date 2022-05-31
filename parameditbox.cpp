#include "parameditbox.h"
#include "ui_parameditbox.h"

ParamEditBox::ParamEditBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParamEditBox)
{
    ui->setupUi(this);
}

ParamEditBox::~ParamEditBox()
{
    delete ui;
}
