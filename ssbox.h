#ifndef SSBOX_H
#define SSBOX_H

#include <QWidget>

namespace Ui {
class ssBox;
}

class ssBox : public QWidget
{
    Q_OBJECT

public:
    explicit ssBox(QWidget *parent = nullptr);
    ~ssBox();

private:
    Ui::ssBox *ui;
};

#endif // SSBOX_H
