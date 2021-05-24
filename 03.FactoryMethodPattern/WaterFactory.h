#pragma once

#include "IFactory.h"
#include "Water.h"

class WaterFactory : public IFactory
{
public:
    virtual std::shared_ptr<IDrink> getDrink() override
    {
        return std::make_shared<Water>();
    }
};
