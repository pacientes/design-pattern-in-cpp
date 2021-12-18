#include "RemoteProxy.h"

#include <iostream>
#include <string>

RemoteProxy::RemoteProxy(std::shared_ptr<Subject> subject)
{
    m_subject = subject;
}

std::string RemoteProxy::actionA()
{
    std::cout << "[RemoteProxy] actionA doing" << std::endl;
    // 다른 행동으로 변경 가능
    return "Replaced Remote Proxy ActionA()";
}

std::string RemoteProxy::actionB()
{
    std::cout << "[RemoteProxy] actionB doing" << std::endl;

    // 결과에 대한 별도 처리 수행 가능
    std::string message = m_subject->actionB();
    if (message.empty())
    {
        return "Nothing returned by RealSubject actionB()...";
    }

    return message;
}
