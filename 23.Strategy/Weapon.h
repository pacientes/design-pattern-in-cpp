#pragma once

#include <string>
#include <iostream>

// Algorithm
class Weapon
{
public:
    virtual void attack() = 0;
};

// ConcreteAlgorithm
class Knife :
    public Weapon
{
public:
    void attack() override
    {
        std::cout << "[Knife] Attack()" << std::endl;
    }
};

// ConcreteAlgorithm
class Gun :
    public Weapon
{
public:
    void attack() override
    {
        std::cout << "[Gun] Attack()" << std::endl;
    }
};
