#ifndef COMMANDLINE_HPP
#define COMMANDLINE_HPP

#include <QObject>
#include <QCoreApplication>
#include <QCommandLineParser>

class CommandLine : public QObject
{
public:
    /**
     * @brief CommandLineRet
     * Returning command line working mode to MainApp
     */
    typedef enum {
        HelpRequested,
        NormalWorkMode,
    }CommandLineRet;

public:
    /**
     * @brief CommandLine
     * Empty classes
     */
    CommandLine();
    ~CommandLine();
    /**
     * @brief parseCommandLine
     * parses generic command line parameters
     * if extra availables can be parse over MainApp.init
     * @return Command line working mode
     */
    static CommandLineRet parseCommandLine();
};

#endif // COMMANDLINE_HPP
