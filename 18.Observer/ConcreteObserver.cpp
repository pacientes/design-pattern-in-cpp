#include "ConcreteObserver.h"

#include <iostream>

ConcreteObserverA::ConcreteObserverA(const std::string &name)
{
    m_name = name;
}

void ConcreteObserverA::update()
{
    std::cout << m_name << ", updated" << std::endl;
}

ConcreteObserverB::ConcreteObserverB(const std::string &name)
{
    m_name = name;
}

void ConcreteObserverB::update()
{
    std::cout << m_name << ", updated" << std::endl;
}
