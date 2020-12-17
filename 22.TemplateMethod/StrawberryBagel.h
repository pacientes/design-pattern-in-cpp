#pragma once

#include "Strawberry.h"

class StrawberryBagel :
    public Strawberry
{
protected:
    std::string bread() override
    {
        return "Bagel";
    }
};
