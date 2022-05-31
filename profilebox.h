#ifndef PROFILEBOX_H
#define PROFILEBOX_H

#include <QWidget>
#include <QIcon>

namespace Ui {
class ProfileBox;
}

class ProfileBox : public QWidget
{
    Q_OBJECT

public:
     explicit ProfileBox(QWidget *parent = nullptr);
    ~ProfileBox();
     void SetParams(int i ,QIcon icon, QString f, QString s, QString t);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ProfileBox *ui;
    int index;
};

#endif // PROFILEBOX_H
