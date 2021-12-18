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
    return "Replaced Remote Proxy ActionA()";
}

std::string RemoteProxy::actionB()
{
    std::cout << "[RemoteProxy] actionB doing" << std::endl;

    std::string message = m_subject->actionB();
    if (message.empty())
    {
        return "Nothing returned by RealSubject actionB()...";
    }

    return "";
}
