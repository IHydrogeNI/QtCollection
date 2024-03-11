#include <QCoreApplication>
#include "mainapp.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QCoreApplication::setApplicationName("00_BaseConsole");
    QCoreApplication::setApplicationVersion("1.0.0");

    MainApp app;
    if(app.init(argc,argv)){
        qDebug() << "MainApp init success";
    }
    else{
        qFatal() << "MainApp init failure";
    }
    return a.exec();
}
