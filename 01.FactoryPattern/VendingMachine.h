#pragma once

#include "Factory.h"
#include "IDrink.h"

class VendingMachine
{
public:
    void getDrink(const DrinkType& type)
    {
        auto drink = Factory::getInstance(type);
        return drink->drink();
    }
};
