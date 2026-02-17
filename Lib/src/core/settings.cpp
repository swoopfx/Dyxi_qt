#include "settings.h"
#include <QSettings>
#include <QVariant>

Settings::Settings(QObject *parent)
    : QObject(parent)
{}

QVariant Settings::getToken(QSettings &setting)
{
    return setting.value("dyxi-jwt-token", "NONE");
}

