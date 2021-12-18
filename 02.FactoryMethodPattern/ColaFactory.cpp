#include "ColaFactory.h"

std::shared_ptr<IDrink> ColaFactory::create()
{
    return std::make_shared<Cola>();
}
