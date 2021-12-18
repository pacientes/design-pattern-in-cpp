#include "USAFactory.h"

#include <iostream>

USAFactory::USAFactory()
{
    std::cout << "[USAFactory] Concreate" << std::endl;
}

std::shared_ptr<ITireProduct> USAFactory::createTire()
{
    std::cout << "[USAFactory] createTire() Called" << std::endl;
    return std::make_shared<USATire>();
}

std::shared_ptr<IDoorProduct> USAFactory::createDoor()
{
    std::cout << "[USAFactory] createDoor() Called" << std::endl;
    return std::make_shared<USADoor>();
}
