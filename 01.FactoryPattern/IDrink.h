#pragma once

#include <iostream>

// Drinkg Type
enum class DrinkType
{
    Water = 0,
    Cola,
    Juice
};

// Drink Interface Class
class IDrink
{
public:
    virtual void drink() = 0;
};

class Water : public IDrink
{
public:
    virtual void drink() override
    {
        std::cout << "Drinking Water" << std::endl;
    }
};

class Cola : public IDrink
{
public:
    virtual void drink() override
    {
        std::cout << "Drinking Cola" << std::endl;
    }
};

class Juice : public IDrink
{
public:
    virtual void drink() override
    {
        std::cout << "Drinking Juice" << std::endl;
    }
};
