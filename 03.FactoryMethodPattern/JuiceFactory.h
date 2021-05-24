#pragma once

#include "IFactory.h"
#include "Juice.h"

class JuiceFactory : public IFactory
{
public:
    virtual std::shared_ptr<IDrink> getDrink() override
    {
        return std::make_shared<Juice>();
    }
};
