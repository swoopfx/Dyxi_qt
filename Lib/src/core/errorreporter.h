#ifndef ERRORREPORTER_H
#define ERRORREPORTER_H

#include <QAbstractItemModel>

class ErrorReporter : public QObject
{
    Q_OBJECT

public:
    explicit ErrorReporter(QObject *parent = nullptr);

signals:
    void erroOccured(const QString $errorMessage);

private:
};

#endif // ERRORREPORTER_H
