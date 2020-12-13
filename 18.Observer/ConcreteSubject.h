#pragma once

#include "Subject.h"

#include <vector>
#include <iostream>

class ConcreteSubject :
    public Subject
{
public:
    void addObserver(std::shared_ptr<Observer> observer) override
    {
        std::cout << "[ConcreteSubject] addObserver()" << std::endl;
        m_observers.push_back(observer);
    }

    void deleteObserver(std::shared_ptr<Observer> observer) override
    {

        for (auto iter = m_observers.begin(); iter != m_observers.end(); iter++)
        {
            if (*iter == observer)
            {
                m_observers.erase(iter);
                break;
            }
        }
    }

    void notiObserver() override
    {
        for (const auto& observer : m_observers)
        {
            observer->update();
        }
    }

private:
    std::vector<std::shared_ptr<Observer>> m_observers;
};
