#ifndef DATAMODEL_H
#define DATAMODEL_H
#include "QObject"
#include <QAbstractItemModel>
class dataModel : public QAbstractItemModel
{
    Q_OBJECT
    QList<QString> dat;
public:
    dataModel(QObject*parent);

    virtual int columnCount(const QModelIndex &) const;
    virtual int rowCount(const QModelIndex &) const;
    virtual QVariant data(const QModelIndex &index, int role) const;//в зависимости от роли либо декорации либо данные
    virtual QModelIndex index(int row, int column, const QModelIndex&) const;//возвращает индекс
    virtual QModelIndex parent(const QModelIndex &) const;

public slots:
    void addValue(const QString &value);
    void delValue(int currentRow);
};

#endif // DATAMODEL_H
