#include "ConcreteColleague.h"
#include "Mediator.h"

#include <iostream>

User::User(std::shared_ptr<Mediator> mediator, const std::string &name) : Colleague(mediator, name)
{
}

void User::sendMessage(const std::string &message)
{
    std::cout << m_name + " [send] : " << message << std::endl;
    m_mediator->sendMessage(message, shared_from_this());
}

void User::recvMessage(const std::string &message)
{
    std::cout << m_name + " [recv] : " << message << std::endl;
}
