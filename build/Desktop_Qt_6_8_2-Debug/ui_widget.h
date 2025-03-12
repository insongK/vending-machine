/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pb10;
    QLCDNumber *lcdNumber;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *coffee;
    QPushButton *milk;
    QPushButton *tea;
    QPushButton *reset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        pb10 = new QPushButton(Widget);
        pb10->setObjectName("pb10");
        pb10->setGeometry(QRect(220, 240, 87, 26));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(300, 110, 171, 71));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName("pb50");
        pb50->setGeometry(QRect(220, 280, 87, 26));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName("pb100");
        pb100->setGeometry(QRect(220, 320, 87, 26));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName("pb500");
        pb500->setGeometry(QRect(220, 370, 87, 26));
        coffee = new QPushButton(Widget);
        coffee->setObjectName("coffee");
        coffee->setGeometry(QRect(460, 240, 87, 26));
        milk = new QPushButton(Widget);
        milk->setObjectName("milk");
        milk->setGeometry(QRect(460, 280, 87, 26));
        tea = new QPushButton(Widget);
        tea->setObjectName("tea");
        tea->setGeometry(QRect(460, 320, 87, 26));
        reset = new QPushButton(Widget);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(460, 370, 87, 26));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        coffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        milk->setText(QCoreApplication::translate("Widget", "Milk(150)", nullptr));
        tea->setText(QCoreApplication::translate("Widget", "Tea(200)", nullptr));
        reset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
