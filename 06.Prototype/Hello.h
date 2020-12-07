#pragma once
#include <iostream>
#include <string>
#include "Prototype.h"

class Hello :
    public Prototype
{
public:
    Hello(const std::string& message)
    {
        m_message = message;
    }

    void setMessage(const std::string& message)
    {
        m_message = message;
    }

    const std::string& getMessage()
    {
        return m_message;
    }

    std::shared_ptr<Prototype> clone() const override
    {
        return std::make_shared<Hello>("");
    }

private:
    std::string m_message;
};
