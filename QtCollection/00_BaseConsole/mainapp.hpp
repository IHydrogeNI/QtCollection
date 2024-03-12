#ifndef MAINAPP_HPP
#define MAINAPP_HPP

#include <QObject>
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
     * @param argc
     * @param argv
     * @return
     */
    bool init(QStringList arguments);

// PRIVATE FUNCTION BLOCK
private:

// PUBLIC VARIABLE BLOCK
public:

// PRIVATE VARIABLE BLOCK
private:
    QPointer<ExampleClass> example;

// PUBLIC SLOTS BLOCK
public slots:

// PRIVATE SLOTS BLOCK
private slots:

// SIGNALS
signals:

};

#endif // MAINAPP_HPP
