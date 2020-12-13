#pragma once

#include "Common.h"
#include <iostream>

// ConcreteColleague
class User :
    public Colleague,
    public std::enable_shared_from_this<User>
{
public:
    User(std::shared_ptr<Mediator> mediator, std::string name) :
        Colleague(mediator, name)
    {

    }

    void sendMessage(std::string message)
    {
        std::cout << m_name + " [send] : " << message << std::endl;
        m_mediator->sendMessage(message, shared_from_this());
    }

    void recvMessage(std::string message)
    {
        std::cout << m_name + " [recv] : " << message << std::endl;
    }
};
