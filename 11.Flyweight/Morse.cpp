#include "Morse.h"

#include <iostream>

MorseG::MorseG()
{
    std::cout << "[MorseG] object has concreted" << std::endl;
}

void MorseG::code()
{
    std::cout << "**-* ";
}

MorseO::MorseO()
{
    std::cout << "[MorseO] object has concreted" << std::endl;
}

void MorseO::code()
{
    std::cout << "--- ";
}

MorseL::MorseL()
{
    std::cout << "[MorseL] object has concreted" << std::endl;
}

void MorseL::code()
{
    std::cout << "*-** ";
}

MorseE::MorseE()
{
    std::cout << "[MorseE] object has concreted" << std::endl;
}

void MorseE::code()
{
    std::cout << "* ";
}
