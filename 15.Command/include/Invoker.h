#ifndef __INVOKER_H__
#define __INVOKER_H__

#include "Command.h"

#include <string>
#include <map>
#include <memory>

class Invoker
{
public:
    void setCommand(const std::string &key, std::shared_ptr<Command> command);

    void remove(const std::string &key);

    void execute(const std::string &key);

protected:
    std::map<std::string, std::shared_ptr<Command>> m_command;
};

#endif // __INVOKER_H__
