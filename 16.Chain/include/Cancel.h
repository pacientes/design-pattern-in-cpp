#ifndef __CANCEL_H__
#define __CANCEL_H__

#include "Chain.h"

class Cancel : public Chain
{
public:
    virtual const std::string execute(const std::string event) override;
};

#endif // __CANCEL_H__
