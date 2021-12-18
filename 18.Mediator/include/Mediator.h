#ifndef __MEDIATOR_H__
#define __MEDIATOR_H__

#include "Colleague.h"

#include <string>
#include <memory>

class Mediator
{
public:
    virtual void addUser(std::shared_ptr<Colleague> colleague) = 0;

    virtual void deleteUser(std::shared_ptr<Colleague> colleague) = 0;

    virtual void sendMessage(std::string message, std::shared_ptr<Colleague> sender) = 0;
};

#endif // __MEDIATOR_H__
