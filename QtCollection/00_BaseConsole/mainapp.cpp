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

bool MainApp::init(QStringList arguments)
{
    Q_UNUSED(arguments)

    if(example.isNull())
        example = new ExampleClass(this);
    else
        qWarning() << "Example pointer is already occupied!";

    return true;
}
