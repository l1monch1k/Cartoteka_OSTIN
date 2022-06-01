#include "dialog_photo.h"
#include "ui_dialog_photo.h"
#include <QPixmap>
#include "QFileDialog"
#include "mainwindow.h"

dialog_photo::dialog_photo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_photo)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

dialog_photo::~dialog_photo()
{
    delete ui;
}

void dialog_photo::on_toolButton_2_clicked()
{
    //just close//
    this->close();
}


void dialog_photo::on_toolButton_3_clicked()
{
    //save and close//
    this->close();
    if(!ui->photoCard->icon().isNull())
        mw->AddNewAlbumBut(id+1);
    buttonId->SetParams(ui->photoCard->icon());
}

void dialog_photo::on_photoCard_clicked()
{
    QString path = QFileDialog::getOpenFileName();
    if (path!="")
    {
    QFile::copy(path, "C:\\Users\\DI\\Documents\\Cartoteka_OSTIN\\img\\"+(path.right(path.size()-path.lastIndexOf("/")-1)));
    path = "C:\\Users\\DI\\Documents\\Cartoteka_OSTIN\\img\\"+(path.right(path.size()-path.lastIndexOf("/")-1));
    QIcon pix(path);
    int w = ui->photoCard->width();
    int h = ui->photoCard->height();
    ui->photoCard->setIcon(pix);
    ui->photoCard->setIconSize(QSize(w,h));
    }
}

void dialog_photo::SetParams(MainWindow *w,imgButton *but, int i, QIcon icon, QString desc)
{
    id=i; // id button
    int wid = ui->photoCard->width();
    int h = ui->photoCard->height();
    ui->photoCard->setIcon(icon);
    ui->photoCard->setIconSize(QSize(wid,h));
    ui->DescBox->setText(desc);
    mw = w; // link to mainwindow
    buttonId = but; //link to button
}

void dialog_photo::mousePressEvent(QMouseEvent *event)
{
    //capture start mouse pos //
    startPt = event->globalPos()-this->pos();
}

void dialog_photo::mouseMoveEvent(QMouseEvent *event)
{
    //func of move window //
    QPoint  winPt = this->pos();
    QPoint  mousePt = event->globalPos();
    this->move(mousePt-startPt);
}

