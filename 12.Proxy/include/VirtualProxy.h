#ifndef __VIRTUAL_PROXY_H__
#define __VIRTUAL_PROXY_H__

#include "Subject.h"

#include <memory>

class VirtualProxy : public Subject
{
public:
    VirtualProxy(std::shared_ptr<Subject> subject);

    virtual std::string actionA() override;

    virtual std::string actionB() override;

private:
    void real();

    std::shared_ptr<Subject> m_subject;
};

#endif // __VIRTUAL_PROXY_H__
