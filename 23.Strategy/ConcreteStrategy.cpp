#include "ConcreteStrategy.h"

#include <iostream>

void Character::attack()
{
    if (m_weapon == nullptr)
    {
        std::cout << "[Character] Hand Attack()" << std::endl;
    }
    else
    {
        m_weapon->attack();
    }
}
