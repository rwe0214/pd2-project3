#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <time.h>
#include <stdlib.h>
#include <QPixmap>
#include <QPushButton>
#include <QSignalMapper>
#include <score.h>
#include <QString>
#include <win.h>
#include <win2.h>
#include <win1.h>
#include <lose.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void SetMap();
    void StartMap();
    void SetPic();
    void CheckMove();
    void Check();
    void CheckThree();
    void CheckFour();
    void CheckFive();
    void VerFour(int j);
    void HorFour(int i);
    void Color(int a,int b);
    void Drop();
    ~MainWindow();

private slots:
    void Clicked(int);


private:
    Ui::MainWindow *ui;
    Score s;
    Win q;
    Win2 w;
    Win1 e;
    Lose r;
    int a,b,i,j,k,m,n,o,p,x,y,z,times,move;
    QPushButton *map[10][10];
    QSignalMapper *SignalMapper;

    int color[10][10],clk[10][10];
    QPixmap pic[21];
};

#endif // MAINWINDOW_H
