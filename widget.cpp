#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->coffee->setEnabled(false);
    ui->milk->setEnabled(false);
    ui->tea->setEnabled(false);
    ui->reset->setEnabled(false);
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
    check_money(money);
}

void Widget::on_pb50_clicked()
{
    money += 50;
    ui->lcdNumber->display(money);
    check_money(money);
}

void Widget::on_pb100_clicked()
{
    money += 100;
    ui->lcdNumber->display(money);
    check_money(money);
}

void Widget::on_pb500_clicked()
{
    money += 500;
    ui->lcdNumber->display(money);
    check_money(money);
}

void Widget::check_money(int money)
{
    if(money >= 100 && money < 150){
        ui->coffee->setEnabled(true);
        ui->milk->setEnabled(false);
        ui->tea->setEnabled(false);
        ui->reset->setEnabled(true);
    }
    else if(money >= 150 && money < 200){
        ui->coffee->setEnabled(true);
        ui->milk->setEnabled(true);
        ui->tea->setEnabled(false);
        ui->reset->setEnabled(true);
    }
    else if(money >= 200){
        ui->coffee->setEnabled(true);
        ui->milk->setEnabled(true);
        ui->tea->setEnabled(true);
        ui->reset->setEnabled(true);
    }
    else if(money == 0){
        ui->coffee->setEnabled(false);
        ui->milk->setEnabled(false);
        ui->tea->setEnabled(false);
        ui->reset->setEnabled(false);
    }
    else{
        ui->coffee->setEnabled(false);
        ui->milk->setEnabled(false);
        ui->tea->setEnabled(false);
        ui->reset->setEnabled(true);
    }
}

void Widget::on_coffee_clicked()
{
    money -= 100;
    ui->lcdNumber->display(money);
    check_money(money);
}

void Widget::on_milk_clicked()
{
    money -= 150;
    ui->lcdNumber->display(money);
    check_money(money);
}


void Widget::on_tea_clicked()
{
    money -= 200;
    ui->lcdNumber->display(money);
    check_money(money);
}

void Widget::on_reset_clicked()
{
    showMessage(money);
    money = 0;
    ui->lcdNumber->display(money);
    check_money(money);
}

void Widget::showMessage(int money)
{
    QString message = QString("Change is %1").arg(money);
    QMessageBox::information(nullptr, "Change", message);
}

