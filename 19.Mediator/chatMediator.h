#pragma once

#include "Common.h"

#include <vector>

// ConcreteMediator
class chatMediator :
    public Mediator
{
public:
    void addUser(std::shared_ptr<Colleague> colleague) override
    {
        m_colleagues.push_back(colleague);
    }

    void deleteUser(std::shared_ptr<Colleague> colleague) override
    {
        for (auto iter = m_colleagues.begin(); iter != m_colleagues.end(); iter++)
        {
            if (*iter == colleague)
            {
                m_colleagues.erase(iter);
                break;
            }
        }
    }

    void sendMessage(std::string message, std::shared_ptr<Colleague> sender) override
    {
        for (const auto& colleague : m_colleagues)
        {
            if (colleague != sender)
            {
                colleague->recvMessage(message);
            }
        }
    }

private:
    std::vector<std::shared_ptr<Colleague>> m_colleagues;
};
