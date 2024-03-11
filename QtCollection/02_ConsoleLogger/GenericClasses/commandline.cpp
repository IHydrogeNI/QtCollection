#include "commandline.hpp"

CommandLine::CommandLine()
{

}

CommandLine::~CommandLine()
{

}

CommandLine::CommandLineRet CommandLine::parseCommandLine()
{
    QCommandLineParser parser;
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption exampleOption(QStringList()
                                     << "e"
                                     << "example");
    parser.addOption(exampleOption);

    parser.process(*(QCoreApplication::instance()));
    return CommandLineRet::NormalWorkMode;
}
