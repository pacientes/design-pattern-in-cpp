#pragma once

#include "Memento.h"
#include <iostream>

class Originator
{
public:
    std::shared_ptr<Memento> createMemento()
    {
        return std::make_shared<Memento>(m_state);
    }

    void restore(std::shared_ptr<Memento> memento)
    {
        m_state = memento->getObject();
    }

    std::shared_ptr<Hello> getState() const
    {
        return m_state;
    }

    void setState(const std::shared_ptr<Hello> state)
    {
        // for deep-copy
        m_state = std::make_shared<Hello>(*state);
    }

protected:
    std::shared_ptr<Hello> m_state;
};
