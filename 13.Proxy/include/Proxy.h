#ifndef __PROXY_H__
#define __PROXY_H__

#include "Subject.h"

#include <memory>

class Proxy : public Subject
{
public:
    Proxy(std::shared_ptr<Subject> subject);

    virtual std::string actionA() override;

    virtual std::string actionB() override;

private:
    std::shared_ptr<Subject> m_subject;
};

#endif // __PROXY_H__
