#ifndef __USA_FACTORY_H__
#define __USA_FACTORY_H__

#include "IFactory.h"
#include "TireProduct.h"
#include "DoorProduct.h"

class USAFactory : public IFactory
{
public:
    USAFactory();

    virtual std::shared_ptr<ITireProduct> createTire() override;
    virtual std::shared_ptr<IDoorProduct> createDoor() override;
};

#endif // __USA_FACTORY_H__
