<<<<<<< HEAD
﻿#include "widget.h"
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

=======
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

>>>>>>> c12174bc4554224761f8ae5718372b30c18db966
