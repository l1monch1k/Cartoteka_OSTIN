#include "imgbutton.h"
#include "ui_imgbutton.h"
#include "dialog_photo.h"


imgButton::imgButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::imgButton)
{
    ui->setupUi(this);
    ui->toolButton_5->setIcon(QIcon(":/img/img/photocartochka.jpg"));
    ui->toolButton_5->setIconSize(QSize(150,181));
}

imgButton::~imgButton()
{
    delete ui;
}

void imgButton::on_toolButton_5_clicked()
{
    dp_slot->close();
    dialog_photo *dp = new dialog_photo();
    dp->SetParams(mw,this, id,ui->picture_button->icon(), desc);
    dp->show();
    dp_slot = dp;
}

void imgButton::SetParams(MainWindow *w, int i)
{
    mw = w;
    id = i;

}

void imgButton::SetParams(QIcon icon)
{
    ui->picture_button->setIcon(icon);
    ui->picture_button->setIconSize(ui->picture_button->size());
}

void imgButton::on_picture_button_clicked()
{
    dp_slot->close();
    dialog_photo *dp = new dialog_photo();
    dp->SetParams(mw,this, id,ui->picture_button->icon(), desc);
    dp->show();
    dp_slot = dp;
}

