#pragma once

#include "ILanguage.h"

#include <iostream>

class English :
    public ILanguage
{
    void text() override
    {
        std::cout << "Hello, English class" << std::endl;
    }
};
