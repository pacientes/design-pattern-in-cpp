#pragma once

#include "IDoorProduct.h"

#include <iostream>

class KoreaDoorProduct final :
    public IDoorProduct
{
public:
    void makeAssemble() override
    {
        std::cout << "Korea Door is assembled" << std::endl;
    }
};
