#include "Proxy.h"

#include <iostream>

Proxy::Proxy(std::shared_ptr<Subject> subject)
{
    m_subject = subject;
}

std::string Proxy::actionA()
{
    std::cout << "[Proxy] actionA doing" << std::endl;
    return m_subject->actionA();
}

std::string Proxy::actionB()
{
    std::cout << "[Proxy] actionB doing" << std::endl;
    return m_subject->actionB();
}
