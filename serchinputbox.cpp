#include "serchinputbox.h"
#include "ui_serchinputbox.h"

SerchInputBox::SerchInputBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SerchInputBox)
{
    ui->setupUi(this);
    QObject::installEventFilter(this);
}

SerchInputBox::~SerchInputBox()
{
    delete ui;
}

void SerchInputBox::focusInEvent(QFocusEvent *event)
{
    ui->search_box->setText("");
}

void SerchInputBox::setText(QString st)
{
    ui->search_box->setText(st);
}



bool SerchInputBox::eventFilter(QObject *target, QEvent *event)
{
    ui->search_box->setText(QString::number(event->type()));
    if(target == this )
    {

        if(event->type() == QEvent::FocusIn)
        //if(event->type() == QEvent::MouseButtonPress)
        {
            ui->search_box->setText("");
            return false;
        }
        return false;
    }
    return false;
}
