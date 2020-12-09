#pragma once

#include "Visitor.h"
#include <iostream>

class Cart :
    public Element
{
public:
    Cart(std::string name, int price, int num = 1) :
        Element(name, price, num)
    {
    }

    void accept(Visitor* visitor)
    {
        visitor->order(this);
    }

    int getTax(int tax = 10)
    {
        return (m_price * m_num) * tax / 100;
    }

    std::string list()
    {
        std::string order = m_name + ", num: " + std::to_string(m_num) + ", price: " + std::to_string(m_price * m_num) + ".\n";
    }
};
