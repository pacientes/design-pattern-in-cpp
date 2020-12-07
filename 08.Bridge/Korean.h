#pragma once

#include <iostream>

#include "Hello.h"

class Korean :
    public Hello
{
public:
    std::string greeting() override
    {
        return "Hello Korean";
    }
};
