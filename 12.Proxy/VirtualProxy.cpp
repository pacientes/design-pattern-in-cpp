#include "VirtualProxy.h"

#include "RealSubject.h"

#include <iostream>

VirtualProxy::VirtualProxy(std::shared_ptr<Subject> subject)
{
    m_subject = subject;
}

std::string VirtualProxy::actionA()
{
    std::cout << "[VirtualProxy] actionA doing" << std::endl;
    return m_subject->actionA();
}

std::string VirtualProxy::actionB()
{
    std::cout << "[VirtualProxy] actionB doing" << std::endl;

    // 결과에 대한 별도 처리 수행 가능
    if (m_subject == nullptr)
    {
        real();
    }
    std::cout << "[Proxy] actionB doing" << std::endl;
    return m_subject->actionB();
}

void VirtualProxy::real()
{
    std::cout << "[Proxy] concrete RealSubject object" << std::endl;
    m_subject = std::make_shared<RealSubject>();
}
