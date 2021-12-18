#ifndef __CONCRETE_ALGORITHM_H__
#define __CONCRETE_ALGORITHM_H__

#include "Algorithm.h"

class Knife : public Weapon
{
public:
    virtual void attack() override;
};

class Gun : public Weapon
{
public:
    virtual void attack() override;
};

#endif // __CONCRETE_ALGORITHM_H__
