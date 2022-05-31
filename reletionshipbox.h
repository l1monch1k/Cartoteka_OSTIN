#ifndef RELETIONSHIPBOX_H
#define RELETIONSHIPBOX_H

#include <QWidget>

namespace Ui {
class reletionshipBox;
}

class reletionshipBox : public QWidget
{
    Q_OBJECT

public:
    explicit reletionshipBox(QWidget *parent = nullptr);
    ~reletionshipBox();

private:
    Ui::reletionshipBox *ui;
};

#endif // RELETIONSHIPBOX_H
