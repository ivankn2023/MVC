#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QPushButton"
#include "QLineEdit"
#include "QHBoxLayout"
#include "QVBoxLayout"
#include "QListView"

#include "datamodel.h"
class Widget : public QWidget
{
    Q_OBJECT
    QPushButton *btnAdd;
    QPushButton *btnDel;
    QLineEdit *lineEditEnter;
    QListView *listView;

    dataModel *d_model;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void insertValue();
    void deleteValue();
};
#endif // WIDGET_H
