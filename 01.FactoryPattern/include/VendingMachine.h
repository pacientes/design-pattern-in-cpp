#ifndef __VENDING_MACHINE_H__
#define __VENDING_MACHINE_H__

#include "Factory.h"
#include "IDrink.h"

class VendingMachine
{
public:
    std::shared_ptr<IDrink> getDrink(const DrinkType &type);
};

#endif // __VENDING_MACHINE_H__
