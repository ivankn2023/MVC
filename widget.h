#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QPushButton"
#include "QLineEdit"
#include "QHBoxLayout"
#include "QVBoxLayout"
#include "QListView"

class Widget : public QWidget
{
    Q_OBJECT
    QPushButton *btnAdd;
    QPushButton *btnDel;
    QLineEdit *lineEditEnter;
    QListView *listView;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
