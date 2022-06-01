#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "profilebox.h"
#include "reletionshipbox.h"
#include "ssbox.h"
#include <QFileDialog>
#include "dialog_photo.h"
#include "imgbutton.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this); //default setup//

    //set default main picture//

    /*QIcon pix(":/img/img/photo_2022-04-10_19-32-38.jpg");
    int w = ui->photo->width();
    int h = ui->photo->height();
    ui->photo->setIcon(pix);
    ui->photo->setIconSize(QSize(w,h)); */

    list_sp = ui->ls_sp; //set def list-spacer to var

    //create default relationships box//
    reletionshipBox *rbox = new reletionshipBox();
    ui->scrollAreaWidgetContents_5->layout()->addWidget(rbox);
    ui->scrollAreaWidgetContents_5->layout()->addItem(new QSpacerItem(20,40,QSizePolicy::Expanding,QSizePolicy::Expanding));

    //create default social service box //
    ssBox *sbox = new ssBox();
    ui->scrollAreaWidgetContents_2->layout()->addWidget(sbox);
    ui->scrollAreaWidgetContents_2->layout()->addItem(new QSpacerItem(20,40,QSizePolicy::Expanding,QSizePolicy::Expanding));

    //create default imgbutton for album//
    db_sp = new QSpacerItem(20,40,QSizePolicy::Expanding,QSizePolicy::Preferred);
    imgButton *db = new imgButton();
    db->SetParams(this,0);
    ui->horizontalLayout_10->layout()->addWidget(db);
    ui->horizontalLayout_10->layout()->addItem(db_sp);
    imglist.append(db);
    ui->list_widget->installEventFilter(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_Button_clicked()
{
    //create new person in base//
    if(ui->snameBox->text()!="")
    {
    ui->scrollAreaWidgetContents->layout()->removeItem(list_sp);
    ProfileBox *element = new ProfileBox();
    element->SetParams(1,ui->photo->icon(),ui->fnameBox->text(),ui->snameBox->text(),ui->tnameBox->text());
    element->setStyleSheet("background-color: rgb(185, 148, 107);");
    element->setMinimumHeight(100);
    element->setMaximumHeight(100);
    ui->scrollAreaWidgetContents->layout()->addWidget(element);
    list_sp = new QSpacerItem(20,40,QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->scrollAreaWidgetContents->layout()->addItem(list_sp);
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    //clear all boxes//
    ui->photo->setIcon(QIcon(":/img/img/photo.png"));
    ui->photo->setIconSize(QSize(50,50));
    ui->fnameBox->setText("");
    ui->snameBox->setText("");
    ui->tnameBox->setText("");
    ui->dateBox->setText("");
    ui->numberBox->setText("");
    ui->cityBox->setText("");
    ui->addressBox->setText("");
}


void MainWindow::on_photo_clicked()
{
    //click on main photo to set new//
    QString path = QFileDialog::getOpenFileName();
    if (path!="")
    {
    QFile::copy(path, "C:\\Users\\DI\\Documents\\Cartoteka_OSTIN\\img\\"+(path.right(path.size()-path.lastIndexOf("/")-1)));
    path = "C:\\Users\\DI\\Documents\\Cartoteka_OSTIN\\img\\"+(path.right(path.size()-path.lastIndexOf("/")-1));
    QIcon pix(path);
    int w = ui->photo->width();
    int h = ui->photo->height();
    ui->photo->setIcon(pix);
    ui->photo->setIconSize(QSize(w,h));
    }
}


void MainWindow::on_edit_button_clicked()
{
    //edit active person//
}

void MainWindow::AddNewAlbumBut(int id)
{
    //func to add new imgbutton //
    if(imglist.size()==id)
    {
    ui->horizontalLayout_10->layout()->removeItem(db_sp);
    db_sp = new QSpacerItem(20,40,QSizePolicy::Expanding,QSizePolicy::Preferred);
    imgButton *db = new imgButton();
    db->SetParams(this, id);
    ui->horizontalLayout_10->layout()->addWidget(db);
    ui->horizontalLayout_10->layout()->addItem(db_sp);
    imglist.append(db);
    ui->tabWidget->setTabText(1,"Альбом[" + QString::number( imglist.size()-1) + "]");
    }
}



