#pragma once

#include "State.h"
#include <iostream>

class StateOrdered :
    public State
{
public:
    void process() override
    {
        std::cout << "[StateOrdered] process" << std::endl;
    }
};
