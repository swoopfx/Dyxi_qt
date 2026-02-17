#ifndef LOADCONFIG_H
#define LOADCONFIG_H

#include <QAbstractItemModel>
#include  <QFile>
#include <QStringList>
#include <QTextStream>
#include <QProcessEnvironment>

class LoadConfig
{


public:
    explicit LoadConfig();

    void loadEnvFile(QString&);




private:
};

#endif // LOADCONFIG_H
