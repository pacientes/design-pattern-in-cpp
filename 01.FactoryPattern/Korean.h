#pragma once

#include "ILanguage.h"

#include <iostream>

class Korean final :
    public ILanguage
{
    void text() override
    {
        std::cout << "Hello, Korean class" << std::endl;
    }
};
