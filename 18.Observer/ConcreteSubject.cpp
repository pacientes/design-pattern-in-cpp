#include "ConcreteSubject.h"

#include <iostream>

void ConcreteSubject::addObserver(std::shared_ptr<Observer> observer)
{
    std::cout << "[ConcreteSubject] addObserver()" << std::endl;
    m_observers.push_back(observer);
}

void ConcreteSubject::deleteObserver(std::shared_ptr<Observer> observer)
{
    std::cout << "[ConcreteSubject] deleteObserver()" << std::endl;
    for (auto iter = m_observers.begin(); iter != m_observers.end(); iter++)
    {
        if (*iter == observer)
        {
            m_observers.erase(iter);
            break;
        }
    }
}

void ConcreteSubject::notiObserver()
{
    std::cout << "[ConcreteSubject] notiObserver()" << std::endl;
    for (const auto &observer : m_observers)
    {
        observer->update();
    }
}
