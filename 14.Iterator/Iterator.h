#pragma once

#include "Fruit.h"

#include <memory>

class Iterator
{
public:
    virtual bool isDone() = 0;
    virtual std::shared_ptr<Fruit> next() = 0;
};
