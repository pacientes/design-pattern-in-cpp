#ifndef __SMART_PROXY_H__
#define __SMART_PROXY_H__

#include "Subject.h"

#include <memory>

typedef enum class _ePermit_t_
{
    ALLOW,
    DISALLOW
} ePermit;

class SmartProxy : public Subject
{
    SmartProxy(ePermit permit);

    virtual std::string actionA() override;

    virtual std::string actionB() override;

    const int getCount() const;

private:
    void real();

    std::shared_ptr<Subject> m_subject;

    ePermit m_permit;

    int m_count;
};

#endif // __SMART_PROXY_H__
