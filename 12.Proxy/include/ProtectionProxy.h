#ifndef __PROECTION_PROXY_H__
#define __PROECTION_PROXY_H__

#include "Subject.h"

#include <memory>

typedef enum class _ePermit_t_
{
    ALLOW,
    DISALLOW
} ePermit;

class ProtectionProxy : public Subject
{
    ProtectionProxy(ePermit permit);

    virtual std::string actionA() override;

    virtual std::string actionB() override;

private:
    void real();

    std::shared_ptr<Subject> m_subject;

    ePermit m_permit;
};

#endif // __PROECTION_PROXY_H__
