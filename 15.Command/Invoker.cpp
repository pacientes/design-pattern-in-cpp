#include "Invoker.h"

void Invoker::setCommand(const std::string &key, std::shared_ptr<Command> command)
{
    m_command[key] = command;
}

void Invoker::remove(const std::string &key)
{
    m_command.erase(key);
}

void Invoker::execute(const std::string &key)
{
    if (m_command.count(key))
    {
        m_command[key]->execute();
    }
}
