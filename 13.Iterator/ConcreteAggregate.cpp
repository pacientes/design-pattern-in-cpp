#include "ConcreteAggregate.h"

#include "ConcreteIterator.h"

void ConcreteAggregate::addFruit(const std::string &name)
{
    std::shared_ptr<Fruit> fruit = std::make_shared<Fruit>(name);
    m_list.push_back(fruit);
}

std::shared_ptr<Iterator> ConcreteAggregate::createIterator()
{
    std::shared_ptr<Iterator> iterator = std::make_shared<ConcreteIterator>(m_list);
    return iterator;
}
