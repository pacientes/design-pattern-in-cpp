#ifndef __NON_TERMINAL_H__
#define __NON_TERMINAL_H__

#include "Expression.h"

#include <memory>

class NonTerminal : public Expression
{
public:
    NonTerminal(const std::string &left, const std::string &right);

    virtual std::string interpret() override;

private:
    std::shared_ptr<Expression> m_left;

    std::shared_ptr<Expression> m_right;
};

#endif // __NON_TERMINAL_H__
