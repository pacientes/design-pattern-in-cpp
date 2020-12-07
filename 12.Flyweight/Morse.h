#pragma once

#include "Flyweight.h"
#include <iostream>

class MorseG :
    public Flyweight
{
public:
    MorseG()
    {
        std::cout << "[MorseG] object has concreated" << std::endl;
    }

    void code() override
    {
        std::cout << "**-* ";
    }
};

class MorseO :
    public Flyweight
{
public:
    MorseO()
    {
        std::cout << "[MorseO] object has concreated" << std::endl;
    }

    void code() override
    {
        std::cout << "--- ";
    }
};

class MorseL :
    public Flyweight
{
public:
    MorseL()
    {
        std::cout << "[MorseL] object has concreated" << std::endl;
    }

    void code() override
    {
        std::cout << "*-** ";
    }
};

class MorseE :
    public Flyweight
{
public:
    MorseE()
    {
        std::cout << "[MorseE] object has concreated" << std::endl;
    }

    void code() override
    {
        std::cout << "* ";
    }
};
