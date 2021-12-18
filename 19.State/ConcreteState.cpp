#include "ConcreteState.h"

#include <iostream>

void Order::process()
{
    std::cout << "[StateOrder] process" << std::endl;
}

void Pay::process()
{
    std::cout << "[StatePay] process" << std::endl;
}

void Ordered::process()
{
    std::cout << "[StateOrdered] process" << std::endl;
}

void Finish::process()
{
    std::cout << "[StateFinish] process" << std::endl;
}
