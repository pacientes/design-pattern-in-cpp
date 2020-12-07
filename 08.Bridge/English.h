#pragma once

#include <iostream>

#include "Hello.h"

class English :
    public Hello
{
public:
    std::string greeting() override
    {
        std::cout << "English greeting()" << std::endl;
        return "Hello English";
    }
};
