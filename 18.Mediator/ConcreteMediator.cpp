#include "ConcreteMediator.h"

void ChatMediator::addUser(std::shared_ptr<Colleague> colleague)
{
    m_colleagues.push_back(colleague);
}

void ChatMediator::deleteUser(std::shared_ptr<Colleague> colleague)
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

void ChatMediator::sendMessage(std::string message, std::shared_ptr<Colleague> sender)
{
    for (const auto &colleague : m_colleagues)
    {
        if (colleague != sender)
        {
            colleague->recvMessage(message);
        }
    }
}
