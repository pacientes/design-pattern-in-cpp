#include "Element.h"

Element::Element(const std::string &name, const int price, const int number)
{
    m_name = name;
    m_price = price;
    m_number = number;
}

const std::string &Element::getName() const
{
    return m_name;
}

const int Element::getPrice() const
{
    return m_price;
}

const int Element::getNumber() const
{
    return m_number;
}
