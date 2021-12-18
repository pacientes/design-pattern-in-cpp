#ifndef __CHAIN_H__
#define __CHAIN_H__

#include <string>
#include <memory>

class Chain
{
public:
    void setNext(std::shared_ptr<Chain> next);

    virtual const std::string execute(const std::string event) = 0;

protected:
    std::shared_ptr<Chain> m_next;
};

#endif // __CHAIN_H__
