#ifndef __COMMAND_B_H__
#define __COMMAND_B_H__

#include "Command.h"
#include "Receiver.h"

#include <memory>

class CommandB : public Command
{
public:
    CommandB(std::shared_ptr<Receiver> receiver);

    virtual void execute() override;

    virtual void undo() override;

private:
    int m_status;

    std::shared_ptr<Receiver> m_receiver;
};

#endif // __COMMAND_B_H__
