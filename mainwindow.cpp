#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QPixmap pic0(":/blue.jpg");
    QPixmap pic1(":/yellow.jpg");
    QPixmap pic2(":/red.jpg");
    QPixmap pic3(":/green.jpg");
    QPixmap pic4(":/bluever.jpg");
    QPixmap pic5(":/yellowver.jpg");
    QPixmap pic6(":/redver.jpg");
    QPixmap pic7(":/greenver.jpg");
    QPixmap pic8(":/bluehor.jpg");
    QPixmap pic9(":/yellowhor.jpg");
    QPixmap pic10(":/redhor.jpg");
    QPixmap pic11(":/greenhor.jpg");
    QPixmap pic12(":/bluebomb.jpg");
    QPixmap pic13(":/yellowbomb.jpg");
    QPixmap pic14(":/redbomb.jpg");
    QPixmap pic15(":/greenbomb.jpg");
    QPixmap pic16(":/color.jpg");

    pic[0]=pic0;pic[1]=pic1;pic[2]=pic2;pic[3]=pic3;pic[4]=pic4;
    pic[5]=pic5;pic[6]=pic6;pic[7]=pic7;pic[8]=pic8;pic[9]=pic9;
    pic[10]=pic10;pic[11]=pic11;pic[12]=pic12;pic[13]=pic13;pic[14]=pic14;
    pic[15]=pic15;pic[16]=pic16;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            clk[i][j]=0;
        }
    }
    times=0;
}

void MainWindow::SetMap()
{
    map[0][0]=ui->pushButton_00;
    map[0][1]=ui->pushButton_01;
    map[0][2]=ui->pushButton_02;
    map[0][3]=ui->pushButton_03;
    map[0][4]=ui->pushButton_04;
    map[0][5]=ui->pushButton_05;
    map[0][6]=ui->pushButton_06;
    map[0][7]=ui->pushButton_07;
    map[0][8]=ui->pushButton_08;
    map[0][9]=ui->pushButton_09;
    map[1][0]=ui->pushButton_10;
    map[1][1]=ui->pushButton_11;
    map[1][2]=ui->pushButton_12;
    map[1][3]=ui->pushButton_13;
    map[1][4]=ui->pushButton_14;
    map[1][5]=ui->pushButton_15;
    map[1][6]=ui->pushButton_16;
    map[1][7]=ui->pushButton_17;
    map[1][8]=ui->pushButton_18;
    map[1][9]=ui->pushButton_19;
    map[2][0]=ui->pushButton_20;
    map[2][1]=ui->pushButton_21;
    map[2][2]=ui->pushButton_22;
    map[2][3]=ui->pushButton_23;
    map[2][4]=ui->pushButton_24;
    map[2][5]=ui->pushButton_25;
    map[2][6]=ui->pushButton_26;
    map[2][7]=ui->pushButton_27;
    map[2][8]=ui->pushButton_28;
    map[2][9]=ui->pushButton_29;
    map[3][0]=ui->pushButton_30;
    map[3][1]=ui->pushButton_31;
    map[3][2]=ui->pushButton_32;
    map[3][3]=ui->pushButton_33;
    map[3][4]=ui->pushButton_34;
    map[3][5]=ui->pushButton_35;
    map[3][6]=ui->pushButton_36;
    map[3][7]=ui->pushButton_37;
    map[3][8]=ui->pushButton_38;
    map[3][9]=ui->pushButton_39;
    map[4][0]=ui->pushButton_40;
    map[4][1]=ui->pushButton_41;
    map[4][2]=ui->pushButton_42;
    map[4][3]=ui->pushButton_43;
    map[4][4]=ui->pushButton_44;
    map[4][5]=ui->pushButton_45;
    map[4][6]=ui->pushButton_46;
    map[4][7]=ui->pushButton_47;
    map[4][8]=ui->pushButton_48;
    map[4][9]=ui->pushButton_49;
    map[5][0]=ui->pushButton_50;
    map[5][1]=ui->pushButton_51;
    map[5][2]=ui->pushButton_52;
    map[5][3]=ui->pushButton_53;
    map[5][4]=ui->pushButton_54;
    map[5][5]=ui->pushButton_55;
    map[5][6]=ui->pushButton_56;
    map[5][7]=ui->pushButton_57;
    map[5][8]=ui->pushButton_58;
    map[5][9]=ui->pushButton_59;
    map[6][0]=ui->pushButton_60;
    map[6][1]=ui->pushButton_61;
    map[6][2]=ui->pushButton_62;
    map[6][3]=ui->pushButton_63;
    map[6][4]=ui->pushButton_64;
    map[6][5]=ui->pushButton_65;
    map[6][6]=ui->pushButton_66;
    map[6][7]=ui->pushButton_67;
    map[6][8]=ui->pushButton_68;
    map[6][9]=ui->pushButton_69;
    map[7][0]=ui->pushButton_70;
    map[7][1]=ui->pushButton_71;
    map[7][2]=ui->pushButton_72;
    map[7][3]=ui->pushButton_73;
    map[7][4]=ui->pushButton_74;
    map[7][5]=ui->pushButton_75;
    map[7][6]=ui->pushButton_76;
    map[7][7]=ui->pushButton_77;
    map[7][8]=ui->pushButton_78;
    map[7][9]=ui->pushButton_79;
    map[8][0]=ui->pushButton_80;
    map[8][1]=ui->pushButton_81;
    map[8][2]=ui->pushButton_82;
    map[8][3]=ui->pushButton_83;
    map[8][4]=ui->pushButton_84;
    map[8][5]=ui->pushButton_85;
    map[8][6]=ui->pushButton_86;
    map[8][7]=ui->pushButton_87;
    map[8][8]=ui->pushButton_88;
    map[8][9]=ui->pushButton_89;
    map[9][0]=ui->pushButton_90;
    map[9][1]=ui->pushButton_91;
    map[9][2]=ui->pushButton_92;
    map[9][3]=ui->pushButton_93;
    map[9][4]=ui->pushButton_94;
    map[9][5]=ui->pushButton_95;
    map[9][6]=ui->pushButton_96;
    map[9][7]=ui->pushButton_97;
    map[9][8]=ui->pushButton_98;
    map[9][9]=ui->pushButton_99;

    SignalMapper=new QSignalMapper(this);

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            connect(map[i][j],SIGNAL(clicked()),SignalMapper,SLOT(map()));
                    SignalMapper->setMapping(map[i][j],10*i+j);
        }
    }
    connect(SignalMapper,SIGNAL(mapped(int)),this,SLOT(Clicked(int)));
}

void MainWindow::StartMap()
{
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            k=rand()%4;
            color[i][j]=k;
        }
    }
    Check();

}

void MainWindow::SetPic()
{
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            k=color[i][j];
            if(k==-1)k=16;
            map[i][j]->setIcon(pic[k]);
            map[i][j]->setIconSize(map[i][j]->size());
        }
    }
}

void MainWindow::CheckMove()
{
    move=0;
    for(j=0;j<10;j++)
    {
        for(i=0;i<8;i++)
        {

            if(color[i][j]%4==color[i+1][j]%4)
            {
                if(color[i+1][j]%4==color[i+2][j]%4)
                {
                    move++;
                }
            }

        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<8;j++)
        {
            if(color[i][j]%4==color[i][j+1]%4)
            {
                if(color[i][j+1]%4==color[i][j+2]%4)
                {
                    move++;
                }

            }
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(color[i][j]==-1)
                move++;
        }
    }

}

void MainWindow::Check()
{
    int a;
    a=1;

    while(a==1)
    {
        a=0;
    for(j=0;j<10;j++)
    {
        for(i=0;i<8;i++)
        {
            while(color[i][j]%4==color[i+1][j]%4)
            {
                if(color[i+1][j]%4==color[i+2][j]%4)
                {
                    k=rand()%4;
                    color[i+1][j]=k;
                    a=1;
                }
                else
                    break;
            }

        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<8;j++)
        {
            while(color[i][j]%4==color[i][j+1]%4)
            {
                if(color[i][j+1]%4==color[i][j+2]%4)
                {
                    k=rand()%4;
                    color[i][j+1]=k;
                    a=1;
                }
                else
                    break;
            }
        }
    }
    }
}

void MainWindow::Clicked(int a)
{

    clk[a/10][a%10]=1;
    b=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(clk[i][j]==1)
            {
                if(b==0)
                {
                    m=i;n=j;
                }
                if(b==1)
                {
                    o=i;p=j;
                }

                b++;
            }

        }
    }
    if(b==1){return;}
    if(b==2)
    {
        if(abs(m-o)+abs(n-p)==1)
        {
            k=color[m][n];
            color[m][n]=color[o][p];
            color[o][p]=k;
            CheckMove();
            if(move==0)
            {
                k=color[m][n];
                color[m][n]=color[o][p];
                color[o][p]=k;
                b=0;
                for(i=0;i<10;i++)
                {
                    for(j=0;j<10;j++)
                    {
                        clk[i][j]=0;
                    }
                }
                return;
            }
            times++;

            Color(10*m+n,10*o+p);
            CheckFive();
            CheckFour();
            CheckThree();
            Check();
            QString u;
            u.sprintf("%d",s.point);
            ui->label_2->setText(u);
            SetPic();
            if(times>10){
                if(s.point>=20000){q.show();times=0;s.point=0;u.sprintf("%d",s.point);ui->label_2->setText(u);}
                if(s.point<=20000 && s.point>=10000){w.show();times=0;s.point=0;u.sprintf("%d",s.point);ui->label_2->setText(u);}
                if(s.point<=10000 && s.point>=5000){e.show();times=0;s.point=0;u.sprintf("%d",s.point);ui->label_2->setText(u);}
                if(s.point<5000){r.show();times=0;s.point=0;u.sprintf("%d",s.point);ui->label_2->setText(u);}
            }
        }
        b=0;
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                clk[i][j]=0;
            }
        }

        return;
    }


}
void MainWindow::CheckThree()
{
    for(j=0;j<10;j++)
    {
        for(i=0;i<8;i++)
        {
            if(color[i][j]%4==color[i+1][j]%4)
            {
                if(color[i+1][j]%4==color[i+2][j]%4)
                {
                    if(color[i][j]>7&&color[i][j]<12)HorFour(i);
                    if(color[i+1][j]>7&&color[i+1][j]<12)HorFour(i+1);
                    if(color[i+2][j]>7&&color[i+2][j]<12)HorFour(i+2);
                    if(color[i][j]>3&&color[i][j]<8)VerFour(j);
                    else if(color[i+1][j]>3&&color[i+1][j]<8)VerFour(j);
                    else if(color[i+2][j]>3&&color[i+2][j]<8)VerFour(j);
                    else
                    {
                        for(m=i+2;m>=0;m--)
                        {
                            if(m<=2)
                            {
                                k=rand()%4;
                                color[m][j]=k;
                            }
                            else
                            {
                                color[m][j]=color[m-3][j];

                            }
                        }
                        for(int l=0;l<60;l++)
                            ++s;
                    }
                }

            }

        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<8;j++)
        {
            if(color[i][j]%4==color[i][j+1]%4)
            {
                if(color[i][j+1]%4==color[i][j+2]%4)
                {
                    if(color[i][j]>3&&color[i][j]<8)VerFour(j);
                    if(color[i][j+1]>3&&color[i][j+1]<8)VerFour(j+1);
                    if(color[i][j+2]>3&&color[i][j+2]<8)VerFour(j+2);
                    if(color[i][j]>7&&color[i][j]<12){HorFour(i);continue;}
                    else if(color[i][j+1]>7&&color[i][j+1]<12){HorFour(i);continue;}
                    else if(color[i][j+2]>7&&color[i][j+2]<12){HorFour(i);continue;}
                        for(m=i;m>=0;m--)
                        {
                            if(m==0)
                            {
                                k=rand()%4;
                                color[m][j]=k;
                                color[m][j+1]=k;
                                color[m][j+2]=k;
                            }
                            else
                            {
                                x=color[m-1][j];
                                y=color[m-1][j+1];
                                z=color[m-1][j+2];
                                color[m][j]=x;
                                color[m][j+1]=y;
                                color[m][j+2]=z;
                            }
                        }
                        for(int l=0;l<60;l++)
                            ++s;
                }

            }
        }
    }
}

void MainWindow::CheckFour()
{
    for(j=0;j<10;j++)
    {
        for(i=0;i<7;i++)
        {
            if(color[i][j]%4==color[i+1][j]%4)
            {
                if(color[i+1][j]%4==color[i+2][j]%4)
                {
                    if(color[i+2][j]%4==color[i+3][j]%4)
                    {
                        if(color[i][j]>7&&color[i][j]<12)HorFour(i);
                        if(color[i+1][j]>7&&color[i+1][j]<12)HorFour(i+1);
                        if(color[i+2][j]>7&&color[i+2][j]<12)HorFour(i+2);
                        if(color[i+3][j]>7&&color[i+3][j]<12)HorFour(i+3);
                        if(color[i][j]>3&&color[i][j]<8){VerFour(j);HorFour(i+3);}
                        else if(color[i+1][j]>3&&color[i+1][j]<8){VerFour(j);HorFour(i+3);}
                        else if(color[i+2][j]>3&&color[i+2][j]<8){VerFour(j);HorFour(i+3);}
                        else if(color[i+3][j]>3&&color[i+3][j]<8){VerFour(j);HorFour(i+3);}
                        else
                        {
                            color[i+3][j]=8+color[i][j]%4;
                            for(m=i+2;m>=0;m--)
                            {
                                if(m<=2)
                                {
                                    k=rand()%4;
                                    color[m][j]=k;
                                }
                                else
                                {
                                    color[m][j]=color[m-3][j];

                                }
                            }
                            for(int l=0;l<80;l++)
                                ++s;
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<7;j++)
        {
            if(color[i][j]%4==color[i][j+1]%4)
            {
                if(color[i][j+1]%4==color[i][j+2]%4)
                {
                    if(color[i][j+2]%4==color[i][j+3]%4)
                    {
                        if(color[i][j]>3&&color[i][j]<8)VerFour(j);
                        if(color[i][j+1]>3&&color[i][j+1]<8)VerFour(j+1);
                        if(color[i][j+2]>3&&color[i][j+2]<8)VerFour(j+2);
                        if(color[i][j+3]>3&&color[i][j+3]<8)VerFour(j+3);
                        if(color[i][j]>7&&color[i][j]<12){HorFour(i);VerFour(j);continue;}
                        else if(color[i][j+1]>7&&color[i][j+1]<12){HorFour(i);VerFour(j+1);continue;}
                        else if(color[i][j+2]>7&&color[i][j+2]<12){HorFour(i);VerFour(j+2);continue;}
                        else if(color[i][j+3]>7&&color[i][j+3]<12){HorFour(i);VerFour(j+3);continue;}
                        else
                        {
                            color[i][j]=4+color[i][j]%4;
                            for(m=i;m>=0;m--)
                            {
                                if(m==0)
                                {
                                    k=rand()%4;
                                    color[m][j+1]=k;
                                    color[m][j+2]=k;
                                    color[m][j+3]=k;
                                }
                                else
                                {
                                    x=color[m-1][j+1];
                                    y=color[m-1][j+2];
                                    z=color[m-1][j+3];
                                    color[m][j+1]=x;
                                    color[m][j+2]=y;
                                    color[m][j+3]=z;
                                }
                            }
                            for(int l=0;l<80;l++)
                                ++s;
                        }
                    }
                }

            }
        }
    }
}

void MainWindow::CheckFive()
{
    for(j=0;j<10;j++)
    {
        for(i=0;i<6;i++)
        {
            if(color[i][j]%4==color[i+1][j]%4)
            {
                if(color[i+1][j]%4==color[i+2][j]%4)
                {
                    if(color[i+2][j]%4==color[i+3][j]%4)
                    {
                        if(color[i+3][j]%4==color[i+4][j]%4)
                        {
                            color[i+4][j]=-1;
                            for(m=i+3;m>=0;m--)
                            {
                                if(m<=3)
                                {
                                    k=rand()%4;
                                    color[m][j]=k;
                                }
                                else
                                {
                                    color[m][j]=color[m-4][j];

                                }
                            }
                            for(int l=0;l<100;l++)
                                ++s;
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<6;j++)
        {
            if(color[i][j]%4==color[i][j+1]%4)
            {
                if(color[i][j+1]%4==color[i][j+2]%4)
                {
                    if(color[i][j+2]%4==color[i][j+3]%4)
                    {
                        if(color[i][j+3]%4==color[i][j+4]%4)
                        {
                            color[i][j]=-1;
                            for(m=i;m>=0;m--)
                            {
                                if(m==0)
                                {
                                    k=rand()%4;
                                    color[m][j+1]=k;
                                    color[m][j+2]=k;
                                    color[m][j+3]=k;
                                    color[m][j+4]=k;
                                }
                                else
                                {
                                    x=color[m-1][j+1];
                                    y=color[m-1][j+2];
                                    z=color[m-1][j+3];
                                    p=color[m-1][j+4];
                                    color[m][j+1]=x;
                                    color[m][j+2]=y;
                                    color[m][j+3]=z;
                                    color[m][j+4]=p;
                                }
                            }
                            for(int l=0;l<100;l++)
                                ++s;
                        }
                    }
                }
            }
        }
    }
}
void MainWindow::VerFour(int j)
{
    for(i=0;i<10;i++)
    {
        k=rand()%4;
        color[i][j]=k;
    }
    for(int l=0;l<200;l++)
        ++s;

}

void MainWindow::HorFour(int i)
{
    for(j=0;j<10;j++)
    {
        for(m=i;m>0;m--)
        {
            color[m][j]=color[m-1][j];
        }
        color[0][j]=rand()%4;
    }
    for(int l=0;l<200;l++)
        ++s;

}

void MainWindow::Color(int a,int b)
{
    m=a/10;n=a%10;
    o=b/10;p=b%10;
    if(color[m][n]==-1 && color[o][p]!=-1)
    {
        k=color[o][p];
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(color[i][j]%4==k)
                {
                    color[i][j]=-2;
                }
            }
        }
        color[m][n]=-2;
        Drop();
    }
    if(color[m][n]!=-1 && color[o][p]==-1)
    {
        k=color[m][n];
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(color[i][j]%4==k)
                {
                    color[i][j]=-2;
                }
            }

        }
        color[o][p]=-2;
        Drop();
    }
    if(color[m][n]==-1 && color[o][p]==-1)
    {
        StartMap();
        for(int l=0;l<2000;l++)
            ++s;
    }
}

void MainWindow::Drop()
{

    for(j=0;j<10;j++)
    {
        x=0;
        for(i=9;i>=0;i--)
        {
            if(color[i][j]==-2)
                x++;
        }
        for(i=9;i>=x;i--)
        {
            if(color[i][j]==-2)
            {
                for(z=1;z<=x;z++)
                {
                    if(color[i-z][j]>=0)
                    {
                        color[i][j]=color[i-z][j];
                        color[i-z][j]=-2;
                        break;
                    }
                }
            }
        }
        for(i=0;i<x;i++)
        {
            color[i][j]=rand()%4;
        }
        for(int l=0;l<x;l++)
            ++s;

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
