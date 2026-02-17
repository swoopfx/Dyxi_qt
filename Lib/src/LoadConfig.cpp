#include "LoadConfig.h"

LoadConfig::LoadConfig(QObject *parent)
{}

void LoadConfig::loadEnvFile(QString &filePath)
{
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        // Throw cannot read error notification
    }

    QTextStream in(&file);
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();

    while (!in.atEnd()) {
        QString line = in.readLine();
        // Simple parsing: skip comments and empty lines, split at first '='
        if (line.startsWith('#') || line.isEmpty()) continue;

        int equalsIndex = line.indexOf('=');
        if (equalsIndex != -1) {
            QString key = line.left(equalsIndex).trimmed();
            QString value = line.mid(equalsIndex + 1).trimmed();
            // Remove potential quotes from the value
            if (value.startsWith('"') && value.endsWith('"')) {
                value = value.mid(1, value.length() - 2);
            }
            env.insert(key, value);
        }
    }
    file.close();





}

// QModelIndex Connection::index(int row, int column, const QModelIndex &parent) const
// {
//     // FIXME: Implement me!
// }

// QModelIndex Connection::parent(const QModelIndex &index) const
// {
//     // FIXME: Implement me!
// }

// int Connection::rowCount(const QModelIndex &parent) const
// {
//     if (!parent.isValid())
//         return 0;

//     // FIXME: Implement me!
// }

// int Connection::columnCount(const QModelIndex &parent) const
// {
//     if (!parent.isValid())
//         return 0;

//     // FIXME: Implement me!
// }

// QVariant Connection::data(const QModelIndex &index, int role) const
// {
//     if (!index.isValid())
//         return QVariant();

//     // FIXME: Implement me!
//     return QVariant();
// }
