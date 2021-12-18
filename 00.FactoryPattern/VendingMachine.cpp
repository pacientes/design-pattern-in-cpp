#include "VendingMachine.h"

std::shared_ptr<IDrink> VendingMachine::getDrink(const DrinkType &type)
{
    auto factory = std::make_shared<Factory>();
    return factory->create(type);
}
