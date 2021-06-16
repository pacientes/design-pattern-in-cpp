#pragma once

#include "IBuilder.h"

class Director
{
public:
    Director(std::shared_ptr<IBuilder> builder) :
        m_builder(builder)
    {

    }

    std::shared_ptr<Computer> construct()
    {
        std::shared_ptr<Computer> computer = std::make_shared<Computer>();
        computer->setCpu(m_builder->getCPU());
        computer->setMemory(m_builder->getMemory());
        computer->setMemory(m_builder->getMemory());
        computer->setMemory(m_builder->getMemory());
        computer->setMemory(m_builder->getMemory());
        computer->setStorage(m_builder->getStorage());

        return computer;
    }

private:
    std::shared_ptr<IBuilder> m_builder;
};
