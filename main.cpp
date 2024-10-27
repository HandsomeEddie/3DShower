#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <iostream> 

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/MyApp.qml")));

    std::cout << "Hello World" << std::endl;

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
