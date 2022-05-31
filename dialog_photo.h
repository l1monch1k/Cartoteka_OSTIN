#ifndef DIALOG_PHOTO_H
#define DIALOG_PHOTO_H

#include <QDialog>
#include "mainwindow.h"
#include "imgbutton.h"

namespace Ui {
class dialog_photo;
}

class dialog_photo : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_photo(QWidget *parent = nullptr);
    ~dialog_photo();
    void SetParams(MainWindow *w,imgButton *but, int i, QIcon icon, QString desc);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

private slots:
    void on_toolButton_2_clicked();

    void on_toolButton_3_clicked();

    void on_photoCard_clicked();

private:
    Ui::dialog_photo *ui;
    int id;
    MainWindow  *mw;
    imgButton *buttonId;
    QPoint startPt;

};

#endif // DIALOG_PHOTO_H
