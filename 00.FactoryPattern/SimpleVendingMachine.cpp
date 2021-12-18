#include <iostream>

#include "SimpleVendingMachine.h"

std::shared_ptr<IDrink> SimpleVendingMachine::getDrink(const DrinkType &type)
{
    if (type == DrinkType::Water)
    {
        std::cout << "[Factory] Get Water Drink" << std::endl;
        return makeWater();
    }
    else if (type == DrinkType::Cola)
    {
        std::cout << "[Factory] Get Cola Drink" << std::endl;
        return makeCola();
    }
    else if (type == DrinkType::Juice)
    {
        std::cout << "[Factory] Get Juice Drink" << std::endl;
        return makeJuice();
    }
    else
    {
        std::cout << "[Factory] Type Error" << std::endl;
        exit(-1);
    }
}

std::shared_ptr<IDrink> SimpleVendingMachine::makeWater()
{
    return std::make_shared<Water>();
}
std::shared_ptr<IDrink> SimpleVendingMachine::makeCola()
{
    return std::make_shared<Cola>();
}
std::shared_ptr<IDrink> SimpleVendingMachine::makeJuice()
{
    return std::make_shared<Juice>();
}
