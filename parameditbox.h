#ifndef PARAMEDITBOX_H
#define PARAMEDITBOX_H

#include <QWidget>

namespace Ui {
class ParamEditBox;
}

class ParamEditBox : public QWidget
{
    Q_OBJECT

public:
    explicit ParamEditBox(QWidget *parent = nullptr);
    ~ParamEditBox();

private:
    Ui::ParamEditBox *ui;
};

#endif // PARAMEDITBOX_H
