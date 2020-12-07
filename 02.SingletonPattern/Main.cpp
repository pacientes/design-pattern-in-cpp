#include "Singleton.h"

void singletonTest();
void singletonTest1();
void singletonTest2();
void singletonTest3();

int main(const int argc, const char* argv[])
{
    singletonTest();

    return 0;
}

void singletonTest()
{
    singletonTest1();
    singletonTest2();
    singletonTest3();
}

void singletonTest1()
{
    std::cout << "In singletonTest1 function..." << std::endl;
    Config::getInstance();
    std::cout << std::endl;
}

void singletonTest2()
{
    std::cout << "In singletonTest2 function..." << std::endl;
    Config::getInstance();
    std::cout << std::endl;
}

void singletonTest3()
{
    std::cout << "In singletonTest3 function..." << std::endl;
    Config::getInstance();
    std::cout << std::endl;
}
