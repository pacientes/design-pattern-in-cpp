#ifndef __FACTORY_H__
#define __FACTORY_H__

#include <iostream>
#include <memory>

#include "IDrink.h"

class Factory
{
public:
    std::shared_ptr<IDrink> create(const DrinkType &type);
};

#endif // __FACTORY_H__
