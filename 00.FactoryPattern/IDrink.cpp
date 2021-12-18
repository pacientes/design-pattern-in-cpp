#include <iostream>

#include "IDrink.h"

void Water::drink()
{
    std::cout << "[Water] drink() Called" << std::endl;
}

void Cola::drink()
{
    std::cout << "[Cola] drink() Called" << std::endl;
}

void Juice::drink()
{
    std::cout << "[Juice] drink() Called" << std::endl;
}
