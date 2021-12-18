#include "Builder.h"

std::string Builder::getCpu()
{
    return std::string("i7 7700K");
}

std::shared_ptr<Memory> Builder::getMemory()
{
    return std::make_shared<Memory>(16);
}

std::shared_ptr<Storage> Builder::getStorage()
{
    return std::make_shared<Storage>(1024);
}
