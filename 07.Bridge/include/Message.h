#ifndef __MESSAGE_H__
#define __MESSAGE_H__

#include <string>

class Message
{
public:
    Message(const std::string &message) : m_message(message){};

    virtual const std::string &greeting() const = 0;

protected:
    std::string m_message;
};

#endif // __MESSAGE_H__
