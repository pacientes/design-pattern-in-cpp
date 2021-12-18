#include "SmartProxy.h"

#include "RealSubject.h"

#include <iostream>

SmartProxy::SmartProxy(ePermit permit)
{
    m_permit = permit;
    m_count = 0;
}

std::string SmartProxy::actionA()
{
    std::cout << "[Proxy] actionA doing" << std::endl;
    return "";
}

std::string SmartProxy::actionB()
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
        m_count++;
    }
    else
    {
        std::cout << "[Proxy] disallow actionB" << std::endl;
        return "";
    }
}

const int SmartProxy::getCount() const
{
    return m_count;
}

void SmartProxy::real()
{
    std::cout << "[Proxy] concrete RealSubject object" << std::endl;
    m_subject = std::make_shared<RealSubject>();
}
