#pragma once

#include "Component.h"

// ConcreteComponent
class ConcreteComponent2 :
    public Component
{
public:
    std::string product()
    {
        return "Y-Shirts";
    }
    int price()
    {
        return 30000;
    }
};
