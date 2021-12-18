#include "File.h"

#include <iostream>

File::File(const std::string &name)
{
    setName(name);
}

void File::print(const int index)
{
    for (int i = 0; i < index; i++)
    {
        std::cout << "\t";
    }
    std::cout << "File : " << getName() << std::endl;
}
