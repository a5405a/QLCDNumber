#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->lcdNumber->display(12);

    ui->lcdNumber->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);

    ui->lcdNumber->setMinimumHeight(30);


    ui->lcdNumber_2->display(24);

    ui->lcdNumber_2->setSegmentStyle(QLCDNumber::SegmentStyle::Outline);

    ui->lcdNumber_2->setMinimumHeight(30);


}

Widget::~Widget()
{
    delete ui;
}
