#include "Colleague.h"

#include "Mediator.h"

Colleague::Colleague(std::shared_ptr<Mediator> mediator, const std::string &name)
{
    m_mediator = mediator;
    m_name = name;
}
