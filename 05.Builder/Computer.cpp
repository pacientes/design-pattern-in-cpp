#include "Computer.h"

#include <iostream>

Computer::Computer()
{
    m_memory.clear();
    m_storage.clear();
}

void Computer::addMemory(std::shared_ptr<Memory> memory)
{
    std::shared_ptr<Memory> temp_memory = memory;
    m_memory.push_back(temp_memory);
}

void Computer::addStorage(std::shared_ptr<Storage> storage)
{
    std::shared_ptr<Storage> temp_storage = storage;
    m_storage.push_back(temp_storage);
}

void Computer::setCpu(const std::string cpu)
{
    m_cpu = cpu;
}

void Computer::showInformation()
{
    std::cout << getComputerInformation() << std::endl;
}

int Computer::getMemorySize() const
{
    int ret = 0;
    for (size_t i = 0; i < m_memory.size(); i++)
    {
        ret += m_memory[i]->getSize();
    }
    return ret;
}

int Computer::getStorageSize() const
{
    int ret = 0;
    for (size_t i = 0; i < m_storage.size(); i++)
    {
        ret += m_storage[i]->getSize();
    }
    return ret;
}

std::string Computer::getComputerInformation() const
{
    std::string ret = "[Computer] This computer's spec is...\nCPU: " +
                      m_cpu + ",\nRAM: " +
                      std::to_string(getMemorySize()) + "GB,\nStorage: " +
                      std::to_string(getStorageSize()) + "GB.\n";

    return ret;
}
