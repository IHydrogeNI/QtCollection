#include "exampleclass.hpp"

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{
    qWarning() << "Constructs example class with value:" << QRandomGenerator::global()->generate();;
}
