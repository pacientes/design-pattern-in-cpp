#pragma once

#include <memory>
#include <string>

class Colleague;

// Mediator
class Mediator
{
public:
    virtual void addUser(std::shared_ptr<Colleague> colleague) = 0;
    virtual void deleteUser(std::shared_ptr<Colleague> colleague) = 0;
    virtual void sendMessage(std::string message, std::shared_ptr<Colleague> sender) = 0;
};

// Colleague
class Colleague
{
public:
    Colleague(std::shared_ptr<Mediator> mediator, std::string name)
    {
        m_mediator = mediator;
        m_name = name;
    }

    virtual void sendMessage(std::string message) = 0;
    virtual void recvMessage(std::string message) = 0;

protected:
    std::shared_ptr<Mediator> m_mediator;
    std::string m_name;
};
