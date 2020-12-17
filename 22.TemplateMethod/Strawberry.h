#pragma once

#include "Abstract.h"

class Strawberry :
    public Abstract
{
protected:
    std::string bread() override
    {
        return "Plain Bread";
    }

    std::string jam() override
    {
        return "Strawberry";
    }
};
