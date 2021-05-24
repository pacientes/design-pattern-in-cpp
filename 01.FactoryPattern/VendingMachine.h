#pragma once

#include "Factory.h"
#include "IDrink.h"

class VendingMachine
{
public:
    void getDrink(const DrinkType& type)
    {
        auto drink = Factory::getDrink(type);
        return drink->drink();
    }
};
