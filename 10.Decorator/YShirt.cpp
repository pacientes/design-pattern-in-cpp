#include "YShirt.h"

YShirt::YShirt()
{
    m_name = "Y-Shirt";
    m_price = 30000;
}

const std::string YShirt::product()
{
    return m_name;
}

const int YShirt::price()
{
    return m_price;
}
