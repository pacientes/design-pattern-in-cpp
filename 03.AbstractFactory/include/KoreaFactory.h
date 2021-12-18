#ifndef __KOREA_FACTORY_H__
#define __KOREA_FACTORY_H__

#include "IFactory.h"
#include "TireProduct.h"
#include "DoorProduct.h"

class KoreaFactory : public IFactory
{
public:
    KoreaFactory();

    virtual std::shared_ptr<ITireProduct> createTire() override;
    virtual std::shared_ptr<IDoorProduct> createDoor() override;
};

#endif // __KOREA_FACTORY_H__
