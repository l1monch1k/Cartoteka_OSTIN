#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include <QSpacerItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void AddNewAlbumBut(int id);
    ~MainWindow();

private slots:


    void on_add_Button_clicked();

    void on_pushButton_5_clicked();

    void on_photo_clicked();

    void on_edit_button_clicked();

private:
    Ui::MainWindow *ui;
    QSpacerItem *list_sp;
    QSpacerItem *db_sp;
    QObjectList imglist;
};
#endif // MAINWINDOW_H
