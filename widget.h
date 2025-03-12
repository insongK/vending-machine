#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int money{0};

private slots:
    void on_pb10_clicked();

    void on_lcdNumber_overflow();

    void on_pb100_clicked();

    void on_pb50_clicked();

    void on_pb500_clicked();

    void on_coffee_clicked();

    void on_reset_clicked();

    void on_milk_clicked();

    void on_tea_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
