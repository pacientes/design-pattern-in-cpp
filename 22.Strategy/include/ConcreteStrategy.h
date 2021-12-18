#ifndef __CONCRETE_STRATEGY_H__
#define __CONCRETE_STRATEGY_H__

#include "Strategy.h"

class Character : public Strategy
{
public:
    virtual void attack() override;
};

#endif // __CONCRETE_STRATEGY_H__
