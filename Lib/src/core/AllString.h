#ifndef ALLSTRING_H
#define ALLSTRING_H

#include <QString>

namespace AllString{

const QString appName=QStringLiteral("Dyxi");
const QString companyName = QStringLiteral("Orula Deviant");
const QString organisationDomain = QStringLiteral("https://dyxi.site");


// Endpoints
const QString baseUrl=QStringLiteral("https://dyxi.site");
const QString dyxiApiLogin = baseUrl+QStringLiteral("/api/login");
const QString dyxiApiregistration = baseUrl+ QStringLiteral("/api/register");

}

#endif // ALLSTRING_H
