#pragma once

#include "IFactory.h"

#include "KoreaDoor.h"
#include "KoreaTire.h"

class KoreaFactory final :
    public IFactory
{
public:
    KoreaFactory()
    {
        std::cout << "Korea Factory is working" << std::endl;
    }

    std::shared_ptr<ITireProduct> createTire() override
    {
        std::cout << "Korea Tire is constructed" << std::endl;
        return std::make_shared<KoreaTireProduct>();
    }

    std::shared_ptr<IDoorProduct> createDoor() override
    {
        std::cout << "Korea Door is constructed" << std::endl;
        return std::make_shared<KoreaDoorProduct>();
    }

};
