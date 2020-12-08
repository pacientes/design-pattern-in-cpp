#pragma once

#include "Command.h"

#include <iostream>

// 일반적인 형태
class Exec1 :
    public Command
{
public:
    Exec1()
    {
        std::cout << "[Exec1] object has concreated" << std::endl;
    }

    void execute() override
    {
        std::cout << "[Exec1] execute run" << std::endl;
    }

    void undo() override
    {
        std::cout << "[Exec1] undo run" << std::endl;
    }
};
