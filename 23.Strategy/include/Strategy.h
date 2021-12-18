#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include "Algorithm.h"

#include <memory>

class Strategy
{
public:
    void setWeapon(std::shared_ptr<Weapon> weapon);

    virtual void attack() = 0;

protected:
    std::shared_ptr<Weapon> m_weapon;
};

#endif // __STRATEGY_H__
