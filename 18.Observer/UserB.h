#pragma once

#include "Observer.h"

#include <iostream>

// ConcreteObserver
class UserB :
    public Observer
{
public:
    UserB(std::string name)
    {
        m_name = name;
    }

    void update() override
    {
        std::cout << m_name << ", updated" << std::endl;
    }

private:
};
