#include "mainapp.hpp"

MainApp::MainApp(QObject *parent)
    : QObject{parent}
{

}

MainApp::~MainApp()
{
    if(exampleList.count() > 0){
        for(int i = exampleList.count(); i > 0; i--){
            exampleList.at(i)->deleteLater();
            exampleList.removeAt(i);
        }
    }
}

bool MainApp::init(QStringList arguments)
{
    parseCommandLineOptions(arguments);

    for(int i = 0; i < exampleCountToCreate; i++)
        exampleList.append(new ExampleClass(this));

    return true;
}

void MainApp::parseCommandLineOptions(QStringList arguments)
{
    QCommandLineParser parser;
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption exampleOption(QStringList()
                                    << "e"
                                    << "example"
                                    ,"create example class with given count"
                                    ,"count");
    exampleOption.setDefaultValue("0");
    parser.addOption(exampleOption);

    parser.process(arguments);

    if(parser.isSet(exampleOption)){
        if(parser.value("example").toUInt() > 0)
            exampleCountToCreate = parser.value("example").toUInt();
    }
}
