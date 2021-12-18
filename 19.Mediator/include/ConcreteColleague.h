#ifndef __CONCRETE_COLLEAGUE_H__
#define __CONCRETE_COLLEAGUE_H__

#include "Colleague.h"

class User : public Colleague, public std::enable_shared_from_this<User>
{
public:
    User(std::shared_ptr<Mediator> mediator, const std::string &name);

    virtual void sendMessage(const std::string &message) override;

    virtual void recvMessage(const std::string &message) override;
};

#endif // __CONCRETE_COLLEAGUE_H__
