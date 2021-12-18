#ifndef __CONCRETE_ITERATOR_H__
#define __CONCRETE_ITERATOR_H__

#include "Iterator.h"

#include <vector>

class ConcreteIterator : public Iterator
{
public:
    ConcreteIterator(std::vector<std::shared_ptr<Fruit>> fruits);

    virtual bool isDone() override;

    virtual std::shared_ptr<Fruit> next() override;

private:
    std::vector<std::shared_ptr<Fruit>> m_fruits;
    int m_index;
};

#endif // __CONCRETE_ITERATOR_H__
