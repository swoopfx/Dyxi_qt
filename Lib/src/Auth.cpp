#include "Auth.h"
#include <QNetworkAccessManager>
#include "Lib/src/core/AllString.h"

Auth::Auth(QObject *parent)
    : QObject(parent)
{
    this->manager = new QNetworkAccessManager(this);
    this->errorReporter = new ErrorReporter(this);

}

void Auth::login(QString &username, QString &password)
{
    LoadConfig config;
    QUrl url(AllString::dyxiApiLogin);
}




