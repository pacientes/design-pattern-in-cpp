#pragma once

#include "IDoorProduct.h"

#include <iostream>

class USADoorProduct final :
    public IDoorProduct
{
public:
    void makeAssemble() override
    {
        std::cout << "USA Door is assembled" << std::endl;
    }
};
