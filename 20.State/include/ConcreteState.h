#ifndef __CONCRETE_STATE_H__
#define __CONCRETE_STATE_H__

#include "State.h"

class Order : public State
{
public:
    virtual void process() override;
};

class Pay : public State
{
public:
    virtual void process() override;
};

class Ordered : public State
{
public:
    virtual void process() override;
};

class Finish : public State
{
public:
    virtual void process() override;
};

#endif // __CONCRETE_STATE_H__
