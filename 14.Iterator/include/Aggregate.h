#ifndef __AGGREGATE_H__
#define __AGGREGATE_H__

#include "Iterator.h"

#include <memory>

class Aggregate
{
public:
    virtual std::shared_ptr<Iterator> createIterator() = 0;
};

#endif // __AGGREGATE_H__
