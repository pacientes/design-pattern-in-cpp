#pragma once

#include "IDrink.h"

class Juice : public IDrink
{
public:
    virtual void drink() override
    {
        std::cout << "Drinking Juice" << std::endl;
    }
};