#include "ProtectionProxy.h"

#include "RealSubject.h"

#include <iostream>

ProtectionProxy::ProtectionProxy(ePermit permit)
{
    m_permit = permit;
}

std::string ProtectionProxy::actionA()
{
    std::cout << "[Proxy] actionA doing" << std::endl;
    return "";
}

std::string ProtectionProxy::actionB()
{
    if (m_permit == ePermit::ALLOW)
    {
        // 게으른 객체 생성
        if (m_subject == nullptr)
        {
            real();
        }
        std::cout << "[Proxy] actionB doing" << std::endl;
        return m_subject->actionB();
    }
    else
    {
        std::cout << "[Proxy] disallow actionB" << std::endl;
        return "";
    }
}

void ProtectionProxy::real()
{
    std::cout << "[Proxy] concrete RealSubject object" << std::endl;
    m_subject = std::make_shared<RealSubject>();
}
