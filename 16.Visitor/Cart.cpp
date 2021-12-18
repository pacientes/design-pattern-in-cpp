#include "Cart.h"

Cart::Cart(const std::string &name, const int price, const int number) : Element(name, price, number)
{
}

void Cart::accept(std::shared_ptr<Visitor> visitor)
{
    visitor->order(shared_from_this());
}

int Cart::getTax(const int tax)
{
    return (m_price * m_number) * tax / 100;
}

const std::string Cart::getProductList()
{
    std::string order = m_name + ", number: " + std::to_string(m_number) + ", price: " + std::to_string(m_price * m_number) + ".\n";
    return order;
}
