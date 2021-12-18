#include "Fruit.h"

Fruit::Fruit(const std::string &name)
{
    m_name = name;
}

const std::string &Fruit::getName() const
{
    return m_name;
}
