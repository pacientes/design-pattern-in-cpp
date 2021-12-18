#include "CommandA.h"

#include <iostream>

CommandA::CommandA()
{
    std::cout << "[CommandA] object has concreted" << std::endl;
    m_status = 0;
}

void CommandA::execute()
{
    std::cout << "[CommandA] execute run" << std::endl;
    m_status = 10;
}
void CommandA::undo()
{
    std::cout << "[CommandA] undo run" << std::endl;
    m_status = 20;
}
