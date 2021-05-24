#pragma once

#include "IFactory.h"
#include "Cola.h"

class ColaFactory : public IFactory
{
public:
    virtual std::shared_ptr<IDrink> getDrink() override
    {
        return std::make_shared<Cola>();
    }
};
