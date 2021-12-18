#include "KoreaFactory.h"

#include <iostream>

KoreaFactory::KoreaFactory()
{
    std::cout << "[KoreaFactory] Concreate" << std::endl;
}

std::shared_ptr<ITireProduct> KoreaFactory::createTire()
{
    std::cout << "[KoreaFactory] createTire() Called" << std::endl;
    return std::make_shared<KoreaTire>();
}

std::shared_ptr<IDoorProduct> KoreaFactory::createDoor()
{
    std::cout << "[KoreaFactory] createDoor() Called" << std::endl;
    return std::make_shared<KoreaDoor>();
}
