#pragma once

#include "State.h"
#include <iostream>

class StateOrder :
    public State
{
public:
    void process() override
    {
        std::cout << "[StateOrder] process" << std::endl;
    }
};
