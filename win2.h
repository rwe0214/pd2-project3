#ifndef WIN2_H
#define WIN2_H

#include <QDialog>

namespace Ui {
class Win2;
}

class Win2 : public QDialog
{
    Q_OBJECT

public:
    explicit Win2(QWidget *parent = 0);
    ~Win2();

private:
    Ui::Win2 *ui;
};

#endif // WIN2_H
