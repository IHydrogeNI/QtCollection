#ifndef EXAMPLECLASS_HPP
#define EXAMPLECLASS_HPP

#include <QObject>
#include <QDebug>
#include <QRandomGenerator>

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief ExampleClass
     * Example for MainApp init func.
     * @param parent
     */
    explicit ExampleClass(QObject *parent = nullptr);

signals:

};

#endif // EXAMPLECLASS_HPP
