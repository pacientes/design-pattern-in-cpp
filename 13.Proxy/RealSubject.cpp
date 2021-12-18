#include "RealSubject.h"

#include <iostream>

RealSubject::RealSubject()
{
    std::cout << "RealSubject was concreted" << std::endl;
}

std::string RealSubject::actionA()
{
    std::cout << "[RealSubject] actionA doing" << std::endl;
    return "";
}

std::string RealSubject::actionB()
{
    std::cout << "[RealSubject] actionB doing" << std::endl;
    return "";
}
