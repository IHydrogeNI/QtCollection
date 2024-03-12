#include <QCoreApplication>
#include "mainapp.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    a.setApplicationName("00_BaseConsole");
    a.setApplicationVersion("1.0.0");

    MainApp app;
    if(app.init(a.arguments())){
        qDebug() << "MainApp init success";
    }
    else{
        qFatal() << "MainApp init failure";
    }
    return a.exec();
}
