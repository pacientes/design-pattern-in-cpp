#pragma once

#include "Memento.h"
#include "Hello.h"
#include "Originator.h"

#include <stack>

class CareTaker
{
public:
    void push(std::shared_ptr<Originator> originator)
    {
        std::shared_ptr<Memento> memento = originator->createMemento();
        m_stack.push(memento);
    }

    std::shared_ptr<Hello> undo(std::shared_ptr<Originator> originator)
    {
        std::shared_ptr<Memento> memento = m_stack.top();
        m_stack.pop();

        originator->restore(memento);
        return originator->getState();
    }

protected:
    std::stack<std::shared_ptr<Memento>> m_stack;
};
