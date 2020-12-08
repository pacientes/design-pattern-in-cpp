#pragma once

#include "Subject.h"

#include <iostream>

#ifdef REMOTE_PROXY

class RealSubject :
    public Subject
{
public:
    RealSubject()
    {
        std::cout << "RealSubject was concreated" << std::endl;
    }

    std::string action1() override
    {
        std::cout << "[RealSubject] action1 doing" << std::endl;
        return "RealSubject action1()";
    }

    std::string action2() override
    {
        std::cout << "[RealSubject] action2 doing" << std::endl;
        return "RealSubject action2()";
    }
};

#endif

////////////////////////////////////////////////////////////

#ifdef VIRTUAL_PROXY

class RealSubject :
    public Subject
{
public:
    RealSubject()
    {
        std::cout << "RealSubject was concreated" << std::endl;
    }

    void action1() override
    {
        std::cout << "[RealSubject] action1 doing" << std::endl;
    }

    void action2() override
    {
        std::cout << "[RealSubject] action2 doing" << std::endl;
    }
};

#endif

////////////////////////////////////////////////////////////
