#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include <string>
#include <vector>

class Context
{
public:
    Context(const std::string &data);

    bool isStart();

    std::string next();

protected:
    std::vector<std::string> m_token;

    int m_idx;
};

#endif // __CONTEXT_H__
