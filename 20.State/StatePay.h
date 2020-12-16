#pragma once

#include "State.h"
#include <iostream>

class StatePay :
    public State
{
public:
    void process() override
    {
        std::cout << "[StatePay] process" << std::endl;
    }
};
