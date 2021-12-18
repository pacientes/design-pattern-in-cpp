#include "Caretaker.h"

void Caretaker::push(std::shared_ptr<Originator> originator)
{
    std::shared_ptr<Memento> memento = originator->createMemento();
    m_stack.push(memento);
}

std::shared_ptr<Message> Caretaker::undo(std::shared_ptr<Originator> originator)
{
    std::shared_ptr<Memento> memento = m_stack.top();
    m_stack.pop();

    originator->restore(memento);
    return originator->getState();
}
