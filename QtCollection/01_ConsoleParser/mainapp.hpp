#ifndef MAINAPP_HPP
#define MAINAPP_HPP

#include <QObject>
#include <QCommandLineParser>
#include <QList>
#include <QPointer>
#include "exampleclass.hpp"

class MainApp : public QObject
{
    Q_OBJECT
// PUBLIC FUNCTION BLOCK
public:
    /**
     * @brief MainApp
     * Constructor
     * @param parent
     */
    explicit MainApp(QObject *parent = nullptr);
    /**
     * @brief MainApp
     * Destructor
     */
    ~MainApp();
    /**
     * @brief init
     * initializing application with sub classes
     * if everything is ok returns true and exec' app
     * else returns false to main will gives fatal error with EXIT_FAILURE
     * @param arguments
     * @return
     */
    bool init(QStringList arguments);

// PRIVATE FUNCTION BLOCK
private:
    /**
     * @brief parseCommandLineOptions
     * checks program arguments and set in parameters for working modes
     * @param arguments
     */
    void parseCommandLineOptions(QStringList arguments);
// PUBLIC VARIABLE BLOCK
public:

// PRIVATE VARIABLE BLOCK
private:
    quint8 exampleCountToCreate = 0;
    QList<QPointer<ExampleClass>> exampleList;

// PUBLIC SLOTS BLOCK
public slots:

// PRIVATE SLOTS BLOCK
private slots:

// SIGNALS
signals:

};

#endif // MAINAPP_HPP
