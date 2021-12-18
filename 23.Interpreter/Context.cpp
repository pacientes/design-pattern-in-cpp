#include "Context.h"

#include <sstream>
#include <iostream>

Context::Context(const std::string &data)
{
    m_idx = 0;

    // Tokenize
    std::stringstream ss(data);
    const char delimiter = ' '; // space
    std::string token;
    while (std::getline(ss, token, delimiter))
    {
        m_token.push_back(token);
    }

    std::cout << "==Print Token List==" << std::endl;

    for (size_t i = 0; i < m_token.size(); i++)
    {
        std::cout << i << " -> " << m_token[i] << std::endl;
    }
    std::cout << "==End Token List==" << std::endl;
}

bool Context::isStart()
{
    if (m_token[m_idx] == "{{")
    {
        m_idx++;
        return true;
    }
    else
    {
        return false;
    }
}

std::string Context::next()
{
    if (static_cast<size_t>(m_idx) < m_token.size())
    {
        std::string token = m_token[m_idx];
        m_idx++;
        return token;
    }
    else
    {
        return "";
    }
}
