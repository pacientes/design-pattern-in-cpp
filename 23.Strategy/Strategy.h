#pragma once

#include "Weapon.h"
#include <memory>

class Strategy
{
public:
    void setWeapon(std::shared_ptr<Weapon> weapon)
    {
        m_weapon = weapon;
    }

    virtual void attack() = 0;

protected:
    std::shared_ptr<Weapon> m_weapon;
};

class Charactor :
    public Strategy
{
public:
    void attack()
    {
        if (m_weapon == nullptr)
        {
            std::cout << "[Charactor] attack() hand" << std::endl;
        }
        else
        {
            m_weapon->attack();
        }
    }
};
