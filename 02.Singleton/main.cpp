#include <iostream>

#include "Singleton.h"

void firstStep()
{
    Singleton::getInstance().setId(10);
    std::cout << Singleton::getInstance().getId() << std::endl;
}

void secondStep()
{
    Singleton::getInstance().setId(20);
    std::cout << Singleton::getInstance().getId() << std::endl;
}

int main(int argc, char *argv[])
{

    std::cout << Singleton::getInstance().getId() << std::endl;

    firstStep();

    secondStep();

    return 0;
}
