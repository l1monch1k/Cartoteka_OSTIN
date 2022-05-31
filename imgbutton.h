#ifndef IMGBUTTON_H
#define IMGBUTTON_H
#include <QDialog>
#include <QWidget>
#include "mainwindow.h"


namespace Ui {
class imgButton;
}

class imgButton : public QWidget
{
    Q_OBJECT

public:
    explicit imgButton(QWidget *parent = nullptr);
    void SetParams(MainWindow *w, int i);
    void SetParams(QIcon icon);
    ~imgButton();

private slots:
    void on_toolButton_5_clicked();

    void on_picture_button_clicked();

private:
    Ui::imgButton *ui;
    int id=0;
    QString desc;
    MainWindow *mw;
    QWidget *dp_slot = new QWidget();
};

#endif // IMGBUTTON_H
