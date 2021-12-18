#include "FlyweightFactory.h"

#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
    std::string name = "goooogllleee";
    std::cout << "Original name: " << name << std::endl;

    std::shared_ptr<FlyweightFactory> factory = std::make_shared<FlyweightFactory>();

    for (size_t i = 0; i < name.size(); i++)
    {
        std::cout << name[i] << "-> ";
        factory->getCode(name[i])->code();
        std::cout << std::endl;
    }

    return 0;
}
