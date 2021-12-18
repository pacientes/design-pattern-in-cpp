#ifndef __CONCRETE_MEDIATOR_H__
#define __CONCRETE_MEDIATOR_H__

#include "Mediator.h"

#include <vector>

class ChatMediator : public Mediator
{
public:
    virtual void addUser(std::shared_ptr<Colleague> colleague) override;

    virtual void deleteUser(std::shared_ptr<Colleague> colleague) override;

    virtual void sendMessage(std::string message, std::shared_ptr<Colleague> sender) override;

private:
    std::vector<std::shared_ptr<Colleague>> m_colleagues;
};

#endif // __CONCRETE_MEDIATOR_H__
