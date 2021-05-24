#pragma once

#include "IDrink.h"

#include <memory>

// Factory Interface Class
class IFactory
{
public:
    virtual std::shared_ptr<IDrink> getDrink() = 0;
};

