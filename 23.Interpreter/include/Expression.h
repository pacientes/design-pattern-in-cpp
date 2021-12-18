#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__

#include <string>

class Expression
{
public:
    virtual std::string interpret() = 0;
};

#endif // __EXPRESSION_H__
