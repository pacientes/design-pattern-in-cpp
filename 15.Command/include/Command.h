#ifndef __COMMAND_H__
#define __COMMAND_H__

class Command
{
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};

#endif // __COMMAND_H__
