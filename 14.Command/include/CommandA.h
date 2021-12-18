#ifndef __COMMAND_A_H__
#define __COMMAND_A_H__

#include "Command.h"

class CommandA : public Command
{
public:
    CommandA();

    virtual void execute() override;

    virtual void undo() override;

private:
    int m_status;
};

#endif // __COMMAND_A_H__
