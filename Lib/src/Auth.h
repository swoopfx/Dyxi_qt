#ifndef AUTH_H
#define AUTH_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include "LoadConfig.h"
#include "core/errorreporter.h"


class Auth : public QObject
{
    Q_OBJECT

    QString jwt_token;
    QNetworkAccessManager *manager;
    LoadConfig config;
    ErrorReporter *errorReporter;


public:
    explicit Auth(QObject *parent = nullptr);

    void login(QString &, QString &);
    bool isActive();
    void confirmEmail();
    void resetPassword();
    void getUser();
    void getWard();
    // Basic functionality:
    // QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
    // QModelIndex parent(const QModelIndex &index) const override;

    // int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    // int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    // QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:

    void getActiveToken();
    void getRefreshToken();
    void refreshToken();
};

#endif // AUTH_H
