#ifndef __FLYWEIGHT_FACTORY_H__
#define __FLYWEIGHT_FACTORY_H__

#include "Flyweight.h"

#include <map>
#include <memory>

class FlyweightFactory
{
public:
    std::shared_ptr<Flyweight> getCode(const int key);

private:
    std::map<int, std::shared_ptr<Flyweight>> m_list;
};

#endif // __FLYWEIGHT_FACTORY_H__
