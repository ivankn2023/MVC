#include "datamodel.h"

dataModel::dataModel(QObject *parent) : QAbstractItemModel(parent)
{

}

int dataModel::columnCount(const QModelIndex &) const
{
    return 1;
}

int dataModel::rowCount(const QModelIndex &) const
{
    return dat.size();
}

QVariant dataModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        return dat.at(index.row());
    }
    return QVariant();
}

QModelIndex dataModel::index(int row, int column, const QModelIndex &) const
{
    return createIndex(row, column, (void*)&dat[row]);
}

QModelIndex dataModel::parent(const QModelIndex &) const
{
    return QModelIndex();
}

void dataModel::addValue(const QString &value)
{
    dat.append(value);
    emit layoutChanged();
}

void dataModel::delValue(int currentRow)
{
    dat.remove(currentRow);
    emit layoutChanged();
}
