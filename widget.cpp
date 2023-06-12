#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    listView = new QListView(this);
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

}

Widget::~Widget()
{
}

