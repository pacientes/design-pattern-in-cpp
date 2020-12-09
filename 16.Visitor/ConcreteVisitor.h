#pragma once

#include "Visitor.h"

#include <iostream>

class ConcreteVisitor :
    public Visitor
{
public:
    ConcreteVisitor()
    {
        m_total = 0;
        m_num = 0;
    }

    void order(Element* visitable)
    {
        std::cout << "Name: " << visitable->getName() << std::endl;
        std::cout << "Num: " << visitable->getNum() << std::endl;
        std::cout << "Price: " << visitable->getPrice() << std::endl;


        int total = visitable->getPrice() * visitable->getNum();
        std::cout << "Total Price: " << total << std::endl;
        m_total += total;

        m_num++;
    }

    int getTotal() const
    {
        return m_total;
    }

private:
    int m_total;
    int m_num;
};
