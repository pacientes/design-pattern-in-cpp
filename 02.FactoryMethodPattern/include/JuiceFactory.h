#ifndef __JUICE_FACTORY_H__
#define __JUICE_FACTORY_H__

#include "IFactory.h"
#include "Juice.h"

class JuiceFactory : public IFactory
{
public:
    virtual std::shared_ptr<IDrink> create() override;
};

#endif // __JUICE_FACTORY_H__
