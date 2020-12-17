#pragma once

#include <string>
#include <sstream>
#include <vector>

class Context
{
public:
    Context(std::string data)
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

        // print
        printf("==Print Token List==\n");
        for (int i = 0; i < m_token.size(); i++)
        {
            printf("[%d] -> %s\n", i, m_token[i]);
        }
        printf("==End Token List==\n");
    }

    bool isStart()
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

    std::string next()
    {
        if (m_idx < m_token.size())
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

protected:
    std::vector<std::string> m_token;
    int m_idx;
};
