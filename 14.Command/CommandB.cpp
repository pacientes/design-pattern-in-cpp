#include "CommandB.h"

#include <iostream>

CommandB::CommandB(std::shared_ptr<Receiver> receiver)
{
    std::cout << "[CommandB] object has concreted" << std::endl;
    m_receiver = receiver;
    m_status = 0;
}

void CommandB::execute()
{
    std::cout << "[CommandB] execute run" << std::endl;
    m_receiver->actionA();
    m_receiver->actionB();
    m_status = 10;
}

void CommandB::undo()
{
    std::cout << "[CommandB] undo run" << std::endl;
    m_status = 20;
}
