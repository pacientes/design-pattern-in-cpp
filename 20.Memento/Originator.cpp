#include "Originator.h"

std::shared_ptr<Memento> Originator::createMemento()
{
    return std::make_shared<Memento>(m_state);
}

void Originator::restore(std::shared_ptr<Memento> memento)
{
    m_state = memento->getObject();
}

std::shared_ptr<Message> Originator::getState() const
{
    return m_state;
}

void Originator::setState(const std::shared_ptr<Message> state)
{
    m_state = std::make_shared<Message>(*state);
}
