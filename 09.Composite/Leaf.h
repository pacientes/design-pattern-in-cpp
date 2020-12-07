#pragma once

#include "Component.h"

class Leaf :
    public Component
{
public:
    Leaf(std::string name)
    {
        this->setName(name);
    }

    void print(int idx = 0) override final
    {
        for (int i = 0; i < idx; i++)
        {
            std::cout << "\t";
        }
        std::cout << "File : " << getName() << std::endl;
    }
};
