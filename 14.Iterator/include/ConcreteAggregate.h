#ifndef __CONCRETE_AGGREGATE_H__
#define __CONCRETE_AGGREGATE_H__

#include "Aggregate.h"

#include "Fruit.h"

#include <vector>

class ConcreteAggregate : public Aggregate
{
public:
    void addFruit(const std::string &name);

    virtual std::shared_ptr<Iterator> createIterator() override;

private:
    std::vector<std::shared_ptr<Fruit>> m_list;
};

#endif // __CONCRETE_AGGREGATE_H__
