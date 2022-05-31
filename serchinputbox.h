#ifndef SERCHINPUTBOX_H
#define SERCHINPUTBOX_H

#include <QWidget>

namespace Ui {
class SerchInputBox;
}

class SerchInputBox : public QWidget
{
    Q_OBJECT

public:
    explicit SerchInputBox(QWidget *parent = nullptr);
    ~SerchInputBox();
    void focusInEvent(QFocusEvent *event);
    bool eventFilter(QObject *target, QEvent *event);
    void setText(QString st);


private:
    Ui::SerchInputBox *ui;

};

#endif // SERCHINPUTBOX_H
