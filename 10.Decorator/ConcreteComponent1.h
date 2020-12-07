#pragma once

#include "Component.h"

// ConcreteComponent
class ConcreteComponent1 :
    public Component
{
public:
    std::string product()
    {
        return "T-Shirts";
    }
    int price()
    {
        return 20000;
    }
};
