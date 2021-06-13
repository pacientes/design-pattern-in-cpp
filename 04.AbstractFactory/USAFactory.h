#pragma once

#include "IFactory.h"

#include "USADoor.h"
#include "USATire.h"

class USAFactory final :
    public IFactory
{
public:
    USAFactory()
    {
        std::cout << "USA Factory is working" << std::endl;
    }

    std::shared_ptr<ITireProduct> createTire() override
    {
        std::cout << "USA Tire is constructed" << std::endl;
        return std::make_shared<USATireProduct>();
    }

    std::shared_ptr<IDoorProduct> createDoor() override
    {
        std::cout << "USA Door is constructed" << std::endl;
        return std::make_shared<USADoorProduct>();
    }

};
