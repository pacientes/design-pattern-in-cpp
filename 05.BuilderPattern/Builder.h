#pragma once

#include "IBuilder.h"

class Builder final :
    public IBuilder
{
public:
    Builder() : IBuilder()
    {
    }

    std::string getCPU() override
    {
        return std::string("i7 7700K");
    }

    std::shared_ptr<Memory> getMemory() override
    {
        std::shared_ptr<Memory> memory = std::make_shared<Memory>(16);
        return memory;
    }

    std::shared_ptr<Storage> getStorage() override
    {
        std::shared_ptr<Storage> storage = std::make_shared<Storage>(1024);
        return storage;
    }

private:
    std::shared_ptr<Computer> m_computer;
};
