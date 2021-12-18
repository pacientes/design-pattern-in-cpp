#ifndef __IFACTORY_H__
#define __IFACTORY_H__

#include "IDoorProduct.h"
#include "ITireProduct.h"

#include <memory>

class IFactory
{
public:
    virtual std::shared_ptr<ITireProduct> createTire() = 0;
    virtual std::shared_ptr<IDoorProduct> createDoor() = 0;
};

#endif // __IFACTORY_H__
