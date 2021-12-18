#include "ConcreteAlgorithm.h"

#include <iostream>

void Knife::attack()
{
    std::cout << "[Knife] Attack()" << std::endl;
}

void Gun::attack()
{
    std::cout << "[Gun] Attack()" << std::endl;
}
