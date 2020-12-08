#pragma once

#include "Iterator.h"

#include <memory>
#include <vector>

class IteratorObject :
    public Iterator
{
public:
    IteratorObject(std::vector<std::shared_ptr<Fruit>> fruits)
    {
        m_index = 0;
        for (const auto& fruit : fruits)
        {
            m_fruits.push_back(fruit);
        }
    }

    bool isDone() override
    {
        if (m_index < m_fruits.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    std::shared_ptr<Fruit> next() override
    {
        std::shared_ptr<Fruit> fruit = m_fruits[m_index];
        m_index++;

        return fruit;
    }

private:
    std::vector<std::shared_ptr<Fruit>> m_fruits;
    int m_index;
};
