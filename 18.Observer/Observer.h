#pragma once

#include <string>

class Observer
{
public:
    virtual void update() = 0;

protected:
    std::string m_name;
};
