#ifndef __WATER_FACTORY_H__
#define __WATER_FACTORY_H__

#include "IFactory.h"
#include "Water.h"

class WaterFactory : public IFactory
{
public:
    virtual std::shared_ptr<IDrink> create() override;
};

#endif // __WATER_FACTORY_H__
