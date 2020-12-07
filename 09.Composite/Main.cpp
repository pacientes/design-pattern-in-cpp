#include "Computer.h"
#include "Monitor.h"

#include <iostream>

#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

#include <typeinfo>

int main(const int argc, const char* argv[])
{
    //std::shared_ptr<Computer> computer = std::make_shared<Computer>();
    //computer->setMonitor(std::make_shared<Monitor>());
    //computer->m_monitor->addMonitor(std::make_shared<Monitor32>());
    //computer->m_monitor->addMonitor(std::make_shared<Monitor32>());

    //computer->setDisk(std::make_shared<Disk>());
    //computer->setMemory(std::make_shared<Memory>());

    //std::cout << computer->m_name << std::endl;
    //std::cout << computer->m_monitor->m_name << std::endl;
    //computer->m_monitor->show();
    //std::cout << computer->m_disk->m_name << std::endl;
    //std::cout << computer->m_memory->m_name << std::endl;

    auto dirRed = std::make_shared<Composite>("Red");
    auto dirGreen = std::make_shared<Composite>("Green");
    auto dirBlue = std::make_shared<Composite>("Blue");

    auto dirBlack = std::make_shared<Composite>("Black");
    auto dirWhite = std::make_shared<Composite>("White");

    dirBlack->addNode(std::make_shared<Leaf>("A"));
    dirBlack->addNode(std::make_shared<Leaf>("B"));
    dirBlack->addNode(std::make_shared<Leaf>("C"));

    dirRed->addNode(dirGreen);
    dirGreen->addNode(dirBlue);
    dirBlue->addNode(dirBlack);

    dirBlue->addNode(dirWhite);
    dirWhite->addNode(std::make_shared<Leaf>("D"));
    dirWhite->addNode(std::make_shared<Leaf>("E"));

    dirRed->print();

    return 0;
}
