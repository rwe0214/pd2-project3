#ifndef WIN1_H
#define WIN1_H

#include <QDialog>

namespace Ui {
class Win1;
}

class Win1 : public QDialog
{
    Q_OBJECT

public:
    explicit Win1(QWidget *parent = 0);
    ~Win1();

private:
    Ui::Win1 *ui;
};

#endif // WIN1_H
