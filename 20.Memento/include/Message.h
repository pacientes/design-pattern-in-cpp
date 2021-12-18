#ifndef __MESSAGE_H__
#define __MESSAGE_H__

#include <string>

class Message
{
public:
    Message(const std::string &message);

    void setMessage(const std::string &message);

    std::string getMessage() const;

private:
    std::string m_message;
};

#endif // __MESSAGE_H__
