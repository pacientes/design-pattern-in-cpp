#include "Morse.h"
#include "Factory.h"

#include <string>
#include <iostream>

int main(const int argc, const char* argv[])
{
    std::string name = "goooogllleee";
    std::cout << "Original name: " << name << std::endl;

    std::shared_ptr<Factory> factory = std::make_shared<Factory>();

    for (int i = 0; i < name.size(); i++)
    {
        std::cout << name[i] << "-> ";
        factory->getCode(name[i])->code();
        std::cout << std::endl;
    }

    return 0;
}
