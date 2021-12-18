#ifndef __SIMPLE_VENDING_MACHINE_H__
#define __SIMPLE_VENDING_MACHINE_H__

#include <memory>

#include "IDrink.h"

class SimpleVendingMachine
{
public:
    std::shared_ptr<IDrink> getDrink(const DrinkType &type);

private:
    std::shared_ptr<IDrink> makeWater();
    std::shared_ptr<IDrink> makeCola();
    std::shared_ptr<IDrink> makeJuice();
};

#endif // __SIMPLE_VENDING_MACHINE_H__
