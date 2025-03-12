#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_lcdNumber_overflow()
{
    ui->lcdNumber->display(money);
}


void Widget::on_pb10_clicked()
{
    money += 10;
    ui->lcdNumber->display(money);
}

void Widget::on_pb50_clicked()
{
    money += 50;
    ui->lcdNumber->display(money);
}

void Widget::on_pb100_clicked()
{
    money += 100;
    ui->lcdNumber->display(money);
}

void Widget::on_pb500_clicked()
{
    money += 500;
    ui->lcdNumber->display(money);
}


void Widget::on_coffee_clicked()
{

}

void Widget::on_milk_clicked()
{
    if(money < 100){
        ui->coffee->setEnabled(false);
    }
    else{
        money -= 100;
        ui->coffee->setEnabled(true);
    }
}


void Widget::on_tea_clicked()
{
    if(money < 100){
        ui->coffee->setEnabled(false);
    }
    else{
        money -= 100;
        ui->coffee->setEnabled(true);
    }
}

void Widget::on_reset_clicked()
{
    if(money < 100){
        ui->coffee->setEnabled(false);
    }
    else{
        money -= 100;
        ui->coffee->setEnabled(true);
    }
}

