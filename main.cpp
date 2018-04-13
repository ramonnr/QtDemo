#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QQmlContext>
#include "buttonhandler.h"
#include "changelistener.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    ButtonHandler bHandler;
    ChangeListener cListener;
    engine.rootContext()->setContextProperty("buttonHandler",&bHandler);
    engine.rootContext()->setContextProperty("changeListener",&cListener);

    QObject::connect(&bHandler,                      //sender
                     &ButtonHandler::valueChanged,   //signal
                     &cListener,                     //listener
                     &ChangeListener::updateChanges);//slot

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
