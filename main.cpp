#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include "Lib/src/core/errorreporter.h"

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);

    QCoreApplication::setOrganizationName("Orula Deviant");
    QCoreApplication::setApplicationName("Dyxi");
    QCoreApplication::setOrganizationDomain("https://dyxi.site");

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
