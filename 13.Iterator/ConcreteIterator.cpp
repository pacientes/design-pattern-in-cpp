#include "ConcreteIterator.h"

ConcreteIterator::ConcreteIterator(std::vector<std::shared_ptr<Fruit>> fruits)
{
    m_index = 0;
    for (const auto &fruit : fruits)
    {
        m_fruits.push_back(fruit);
    }
}

bool ConcreteIterator::isDone()
{
    if (static_cast<size_t>(m_index) < m_fruits.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::shared_ptr<Fruit> ConcreteIterator::next()
{
    std::shared_ptr<Fruit> fruit = m_fruits[m_index];
    m_index++;

    return fruit;
}
