#ifndef __ITERATOR_H__
#define __ITERATOR_H__

#include "Fruit.h"

#include <memory>

class Iterator
{
public:
    virtual bool isDone() = 0;
    virtual std::shared_ptr<Fruit> next() = 0;
};

#endif // __ITERATOR_H__
