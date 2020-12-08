#pragma once

#include "Fruit.h"
#include "Iterator.h"
#include <memory>

class Aggregate
{
    virtual std::shared_ptr<Iterator> createIterator() = 0;
};
