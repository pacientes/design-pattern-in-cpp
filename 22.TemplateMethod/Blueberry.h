#pragma once

#include "Abstract.h"

class Blueberry :
    public Abstract
{
protected:
    std::string bread() override
    {
        return "Plain Bread";
    }

    std::string jam() override
    {
        return "Blueberry";
    }
};
