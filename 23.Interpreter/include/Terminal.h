#ifndef __TERMINAL_H__
#define __TERMINAL_H__

#include "Expression.h"

class Terminal : public Expression
{
public:
    Terminal(std::string n);

    virtual std::string interpret() override;

private:
    std::string m_n;
};

#endif // __TERMINAL_H__
