#ifndef __COLLEAGUE_H__
#define __COLLEAGUE_H__

#include <string>
#include <memory>

class Mediator;

class Colleague
{
public:
    Colleague(std::shared_ptr<Mediator> mediator, const std::string &name);

    virtual void sendMessage(const std::string &message) = 0;

    virtual void recvMessage(const std::string &message) = 0;

protected:
    std::shared_ptr<Mediator> m_mediator;

    std::string m_name;
};

#endif // __COLLEAGUE_H__
