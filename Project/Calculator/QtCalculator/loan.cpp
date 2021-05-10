#include "loan.h"
#include "ui_loan.h"
#include"qmath.h"
#include <QString>
using namespace std;

loan::loan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loan)
{
    ui->setupUi(this);
}

loan::~loan()
{
    delete ui;
}



void loan::on_pushButton_clicked()
{
    QString nian = ui->lineEdit_1->text();
    jin=ui->lineEdit_2->text();
    lv=ui->lineEdit_3->text();
    double n=nian.toDouble();
    double j=10000*jin.toDouble();
    double l=0.01*lv.toDouble();
    if(fangshi)
    {
    double yj1=j*l*pow((1+l),12*n)/(pow((1+l),12*n)-1);
    double lx1=12*yj1-j;
    double hk1=(lx1+j);
    ui->lineEdit_4->setText(tr("%1").arg(yj1));
    ui->lineEdit_5->setText(tr("%1").arg(lx1));
    ui->lineEdit_6->setText(tr("%1").arg(hk1));}
    else  {
        double lx1=((j/(12*n)+j*l)+j/(12*n)*(1+l))/2*(12*n)-j;
        double hk1=j+lx1;
        double yj1=hk1/(12*n);
        ui->lineEdit_4->setText(tr("%1").arg(yj1));
        ui->lineEdit_5->setText(tr("%1").arg(lx1));
        ui->lineEdit_6->setText(tr("%1").arg(hk1));
    }
    }
void loan::on_pushButton_2_clicked()
{
    ui->lineEdit_1->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
}

void loan::on_radioButton_2_clicked()
{
    fangshi=true;
}

void loan::on_radioButton_1_clicked()
{
    fangshi=false;
}
