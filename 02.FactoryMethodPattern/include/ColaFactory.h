#ifndef __COLA_FACTORY_H__
#define __COLA_FACTORY_H__

#include "IFactory.h"
#include "Cola.h"

class ColaFactory : public IFactory
{
public:
    virtual std::shared_ptr<IDrink> create() override;
};

#endif // __COLA_FACTORY_H__
