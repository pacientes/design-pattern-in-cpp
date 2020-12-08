#pragma once

#include "Command.h"

#include <memory>
#include <map>
#include <string>

class Invoker
{
public:
    void setCommand(std::string key, std::shared_ptr<Command> command)
    {
        m_command[key] = command;
    }

    void remove(std::string key)
    {
        m_command.erase(key);
    }

    void execute(std::string key)
    {
        if (m_command.count(key))
        {
            m_command[key]->execute();
        }
    }

protected:
    std::map<std::string, std::shared_ptr<Command>> m_command;
};
