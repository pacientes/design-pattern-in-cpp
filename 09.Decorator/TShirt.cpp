#include "TShirt.h"

TShirt::TShirt()
{
    m_name = "T-Shirt";
    m_price = 30000;
}

const std::string TShirt::product()
{
    return m_name;
}

const int TShirt::price()
{
    return m_price;
}
