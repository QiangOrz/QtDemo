#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setText("123");
    ui->pushButton->resize(100,100);
}

Widget::~Widget()
{
    delete ui;
}

