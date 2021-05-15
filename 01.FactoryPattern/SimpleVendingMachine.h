#pragma once

#include "IDrink.h"

class VendingMachine
{
public:
    void getDrink(const DrinkType& type)
    {
        if (type == DrinkType::Water)
        {
            return makeWater()->drink();
        }
        else if (type == DrinkType::Cola)
        {
            return makeCola()->drink();
        }
        else if (type == DrinkType::Juice)
        {
            return makeJuice()->drink();
        }
    }

private:
    std::shared_ptr<IDrink> makeWater()
    {
        return std::make_shared<Water>();
    }

    std::shared_ptr<IDrink> makeCola()
    {
        return std::make_shared<Cola>();
    }

    std::shared_ptr<IDrink> makeJuice()
    {
        return std::make_shared<Juice>();
    }
};
