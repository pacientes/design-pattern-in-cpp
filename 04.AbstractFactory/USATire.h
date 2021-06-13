#pragma once

#include "ITireProduct.h"

#include <iostream>

class USATireProduct final :
    public ITireProduct
{
public:
    void makeAssemble() override
    {
        std::cout << "USA Tire is assembled" << std::endl;
    }
};
