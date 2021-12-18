#ifndef __COMPUTER_H__
#define __COMPUTER_H__

#include "Memory.h"
#include "Storage.h"

#include <string>
#include <vector>
#include <memory>

class Computer
{
public:
    Computer();

    void addMemory(std::shared_ptr<Memory> memory);

    void addStorage(std::shared_ptr<Storage> storage);

    void setCpu(const std::string cpu);

    void showInformation();

private:
    int getMemorySize() const;

    int getStorageSize() const;

    std::string getComputerInformation() const;

    std::string m_cpu;
    std::vector<std::shared_ptr<Memory>> m_memory;
    std::vector<std::shared_ptr<Storage>> m_storage;
};

#endif // __COMPUTER_H__
