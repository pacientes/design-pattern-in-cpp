#include "Hello.h"

Hello::Hello(const std::string &message)
{
    m_message = message;
}

std::shared_ptr<Prototype> Hello::clone() const
{
    return std::make_shared<Hello>("");
}

void Hello::setMessage(const std::string &message)
{
    m_message = message;
}

std::string Hello::getMessage() const
{
    return m_message;
}
