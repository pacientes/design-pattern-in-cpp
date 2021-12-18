#include "Message.h"

Message::Message(const std::string &message)
{
    m_message = message;
}

void Message::setMessage(const std::string &message)
{
    m_message = message;
}

std::string Message::getMessage() const
{
    return m_message;
}
