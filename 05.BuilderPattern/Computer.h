#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Memory.h"
#include "Storage.h"

class Computer
{
public:
    Computer()
    {
        m_ram.clear();
        m_storage.clear();
    }

    void setMemory(std::shared_ptr<Memory> memory)
    {
        std::shared_ptr<Memory> tmpMemory = memory;
        m_ram.push_back(tmpMemory);
    }

    void setStorage(std::shared_ptr<Storage> storage)
    {
        std::shared_ptr<Storage> tmpStorage = storage;
        m_storage.push_back(tmpStorage);
    }

    void setCpu(const std::string cpu)
    {
        m_cpu = cpu;
    }

    void showInfo()
    {
        std::cout << toString() << std::endl;
    }

private:
    int getMemory()
    {
        int size = 0;
        for (size_t i = 0; i < m_ram.size(); i++)
        {
            size += m_ram[i]->getSize();
        }

        return size;
    }

    int getStorage()
    {
        int size = 0;
        for (size_t i = 0; i < m_storage.size(); i++)
        {
            size += m_storage[i]->getSize();
        }

        return size;
    }

    std::string toString()
    {
        std::string infoComputer = "[Computer] This computer's spec is...\nCPU: " +
            m_cpu + ",\nRAM: " +
            std::to_string(getMemory()) + "GB,\nStorage: " +
            std::to_string(getStorage()) + "GB.\n";

        return infoComputer;
    }

    std::string m_cpu;
    std::vector<std::shared_ptr<Memory>> m_ram;
    std::vector<std::shared_ptr<Storage>> m_storage;
};
