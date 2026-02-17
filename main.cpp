#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include "Lib/src/core/errorreporter.h"
#include "Lib/src/LoadConfig.h"
#include "Lib/src/core/AllString.h"


int main(int argc, char *argv[])
{

    LoadConfig config;
    // config.loadEnvFile(".env");
    QGuiApplication app(argc, argv);

    QCoreApplication::setOrganizationName(AllString::companyName);
    QCoreApplication::setApplicationName(AllString::appName);
    QCoreApplication::setOrganizationDomain(AllString::organisationDomain);


    QQmlApplicationEngine engine;
    ErrorReporter errorReporter;

    engine.rootContext()->setContextProperty("errorReporter", &errorReporter);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Dyxi1", "Main");



    return app.exec();
}
