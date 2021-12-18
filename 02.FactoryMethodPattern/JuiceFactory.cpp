#include "JuiceFactory.h"

std::shared_ptr<IDrink> JuiceFactory::create()
{
    return std::make_shared<Juice>();
}
