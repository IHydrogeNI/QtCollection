#include "mainapp.hpp"

MainApp::MainApp(QObject *parent)
    : QObject{parent}
{

}

MainApp::~MainApp()
{
    if(!example.isNull())
        example->deleteLater();
}

bool MainApp::init(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    if(example.isNull())
        example = new ExampleClass(this);
    else
        qWarning() << "Example pointer is already occupied!";

    return true;
}
