#include "ConcreteVisitor.h"

#include "Element.h"

#include <iostream>

ConcreteVisitor::ConcreteVisitor()
{
    m_total = 0;
    m_number = 0;
}

void ConcreteVisitor::order(std::shared_ptr<Element> element)
{
    std::cout << "Name: " << element->getName() << std::endl;
    std::cout << "Num: " << element->getNumber() << std::endl;
    std::cout << "Price: " << element->getPrice() << std::endl;

    int total = element->getPrice() * element->getNumber();
    std::cout << "Total Price: " << total << std::endl;
    m_total += total;

    m_number++;
}

const int ConcreteVisitor::getTotal() const
{
    return m_total;
}
