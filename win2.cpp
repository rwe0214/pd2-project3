#include "win2.h"
#include "ui_win2.h"

Win2::Win2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Win2)
{
    ui->setupUi(this);
}

Win2::~Win2()
{
    delete ui;
}
