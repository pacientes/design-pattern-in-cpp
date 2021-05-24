#pragma once

#include "IDrink.h"

class Cola : public IDrink
{
public:
    virtual void drink() override
    {
        std::cout << "Drinking Cola" << std::endl;
    }
};