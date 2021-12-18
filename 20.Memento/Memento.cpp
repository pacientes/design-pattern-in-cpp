#include "Memento.h"

Memento::Memento(std::shared_ptr<Message> object)
{
    m_object = object;
}

std::shared_ptr<Message> Memento::getObject() const
{
    return m_object;
}
