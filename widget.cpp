#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    listView = new QListView(this);
    d_model = new dataModel(this);
    listView->setModel(d_model);

    lineEditEnter = new QLineEdit("Text", this);
    btnAdd = new QPushButton("Add", this);
    btnDel = new QPushButton("Del", this);

    QHBoxLayout *hLay = new QHBoxLayout;
    hLay->addWidget(lineEditEnter);
    hLay->addWidget(btnAdd);
    hLay->addWidget(btnDel);

    setLayout(new QVBoxLayout);
    layout()->addWidget(listView);
    layout()->addItem(hLay);

    connect(btnAdd, QPushButton::clicked, this, insertValue);
    connect(btnDel, QPushButton::clicked, this, deleteValue);
}

Widget::~Widget()
{
}

void Widget::insertValue()
{
    d_model->addValue(lineEditEnter->text());
}

void Widget::deleteValue()
{
    d_model->delValue(lineEditEnter->text().toInt());
}

