#include "Auth.h"

Auth::Auth(QObject *parent)
    : QAbstractItemModel(parent)
{}

QModelIndex Auth::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex Auth::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int Auth::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int Auth::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant Auth::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
