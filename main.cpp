#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.SetMap();
    w.StartMap();
    w.SetPic();

    return a.exec();
}
