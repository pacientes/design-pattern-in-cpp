#ifndef __IFACTORY_H__
#define __IFACTORY_H__

#include "IDrink.h"

#include <memory>

class IFactory
{
public:
    virtual std::shared_ptr<IDrink> create() = 0;
};

#endif // __IFACTORY_H__
