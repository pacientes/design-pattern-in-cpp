#ifndef __ORDER_H__
#define __ORDER_H__

#include "Chain.h"

class Order : public Chain
{
public:
    virtual const std::string execute(const std::string event) override;
};

#endif // __ORDER_H__
