#pragma once

#include "IDrink.h"

class Water : public IDrink
{
public:
    virtual void drink() override
    {
        std::cout << "Drinking Water" << std::endl;
    }
};