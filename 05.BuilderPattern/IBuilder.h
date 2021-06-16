#pragma once

#include <iostream>

#include "Computer.h"

class IBuilder
{
public:
    virtual std::string getCPU() = 0;
    virtual std::shared_ptr<Memory> getMemory() = 0;
    virtual std::shared_ptr<Storage> getStorage() = 0;
};
