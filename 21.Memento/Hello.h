#pragma once

#include <string>

class Hello
{
public:
    Hello(std::string message)
    {
        m_message = message;
    }

    void setMessage(const std::string message)
    {
        m_message = message;
    }

    std::string getMessage() const
    {
        return m_message;
    }

private:
    std::string m_message;
};
