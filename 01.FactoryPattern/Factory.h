#pragma once

#include <memory>
#include <iostream>

#include "IDrink.h"

class Factory
{
public:
    static std::shared_ptr<IDrink> getDrink(const DrinkType& type)
    {
        if (type == DrinkType::Water)
        {
            std::cout << "Factory: Get Water Drink" << std::endl;
            return std::make_shared<Water>();
        }
        else if (type == DrinkType::Cola)
        {
            std::cout << "Factory: Get Cola Drink" << std::endl;
            return std::make_shared<Cola>();
        }
        else if (type == DrinkType::Juice)
        {
            std::cout << "Factory: Get Juice Drink" << std::endl;
            return std::make_shared<Juice>();
        }
    }
};
