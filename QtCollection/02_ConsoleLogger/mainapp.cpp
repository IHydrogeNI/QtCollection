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

    CommandLine::CommandLineRet retVal = CommandLine::parseCommandLine();

    switch (retVal) {
    case CommandLine::NormalWorkMode:
        if(example.isNull())
            example = new ExampleClass(this);
        break;
    default:
        break;
    }

    return true;
}
