#pragma once

#include "Observer.h"

#include <iostream>

// ConcreteObserver
class UserA :
    public Observer
{
public:
    UserA(std::string name)
    {
        m_name = name;
    }

    void update() override
    {
        std::cout << m_name << ", updated" << std::endl;
    }

private:
};
