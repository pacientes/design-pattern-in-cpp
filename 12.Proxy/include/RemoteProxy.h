#ifndef __REMOTE_PROXY_H__
#define __REMOTE_PROXY_H__

#include "Subject.h"

#include <memory>

class RemoteProxy : public Subject
{
public:
    RemoteProxy(std::shared_ptr<Subject> subject);

    virtual std::string actionA() override;

    virtual std::string actionB() override;

private:
    std::shared_ptr<Subject> m_subject;
};

#endif // __REMOTE_PROXY_H__
