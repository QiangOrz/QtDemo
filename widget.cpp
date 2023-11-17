#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setText("123");
    ui->pushButton->resize(200,100);
    ui->pushButton->clicked(1);
}

Widget::~Widget()
{
    delete ui;
}

