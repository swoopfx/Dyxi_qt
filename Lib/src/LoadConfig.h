#ifndef LOADCONFIG_H
#define LOADCONFIG_H

#include <QAbstractItemModel>
#include  <QFile>
#include <QStringList>
#include <QTextStream>
#include <QProcessEnvironment>

/**
 * @brief The LoadConfig class
 * @details used to load the .env files holding sentitive information
 *
 */
class LoadConfig
{


public:
    explicit LoadConfig();

    void loadEnvFile(QString&);

private:
};

#endif // LOADCONFIG_H

