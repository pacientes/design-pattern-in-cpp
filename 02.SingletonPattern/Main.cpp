#include "Singleton.h"

void stepA();
void stepB();

int main(const int argc, const char* argv[])
{
    stepA();
    std::cout << "Singleton ID is " << Singleton::getInstance().getID() << std::endl;
    stepB();
    std::cout << "Singleton ID is " << Singleton::getInstance().getID() << std::endl;

    return 0;
}

void stepA()
{
    std::cout << "In-stepA" << std::endl;
    Singleton::getInstance().setID(10);
    std::cout << "Out-stepA" << std::endl;
}

void stepB()
{
    std::cout << "In-stepB" << std::endl;
    Singleton::getInstance().setID(20);
    std::cout << "Out-stepB" << std::endl;
}
