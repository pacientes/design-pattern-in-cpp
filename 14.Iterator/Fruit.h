#pragma once

#include <string>

class Fruit
{
public:
    Fruit(std::string name)
    {
        m_name = name;
    }

    std::string getName()
    {
        return m_name;
    }

private:
    std::string m_name;
};
