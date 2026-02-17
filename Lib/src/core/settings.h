#ifndef SETTINGS_H
#define SETTINGS_H

#include <QAbstractItemModel>
#include <QSettings>

#include "Lib/src/LoadConfig.h"

class Settings : public QObject
{
    Q_OBJECT


public:
    explicit Settings(QObject *parent = nullptr);

    void setToken(QString token);



private:

    LoadConfig config;
    QVariant getToken(QSettings &setting);
    QVariant getUserId(QSettings &setting);
    QVariant getUserFullname(QSettings &setting);
    QVariant getlanguage(QSettings &setting);
    QVariant getAge(QSettings &setting);

};

#endif // SETTINGS_H
