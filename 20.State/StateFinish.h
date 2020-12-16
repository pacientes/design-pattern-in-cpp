#pragma once

#include "State.h"
#include <iostream>

class StateFinish :
    public State
{
public:
    void process() override
    {
        std::cout << "[StateFinish] process" << std::endl;
    }
};
