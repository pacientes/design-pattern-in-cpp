#pragma once

#include <string>
#include <memory>

class Chain
{
public:
    void setNext(std::shared_ptr<Chain> next)
    {
        m_next = next;
    }

    virtual std::string execute(std::string event) = 0;

protected:
    std::shared_ptr<Chain> m_next;
};
