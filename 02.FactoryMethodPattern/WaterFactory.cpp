#include "WaterFactory.h"

std::shared_ptr<IDrink> WaterFactory::create()
{
    return std::make_shared<Water>();
}
