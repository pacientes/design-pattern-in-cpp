#pragma once

#include "Aggregate.h"
#include "IteratorObject.h"

#include <vector>

class ConcreateAggregate :
    public Aggregate
{
public:
    void addFruit(std::string name)
    {
        std::shared_ptr<Fruit> fruit = std::make_shared<Fruit>(name);
        m_list.push_back(fruit);
    }

    std::shared_ptr<Iterator> createIterator() override
    {
        std::shared_ptr<Iterator> iterator = std::make_shared<IteratorObject>(m_list);
        return iterator;
    }

private:
    std::vector<std::shared_ptr<Fruit>> m_list;
};
