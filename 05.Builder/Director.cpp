#include "Director.h"

Director::Director(std::shared_ptr<IBuilder> builder)
{
    m_builder = builder;
}

std::shared_ptr<Computer> Director::create()
{
    std::shared_ptr<Computer> computer = std::make_shared<Computer>();

    computer->setCpu(m_builder->getCpu());
    computer->addMemory(m_builder->getMemory());
    computer->addMemory(m_builder->getMemory());
    computer->addMemory(m_builder->getMemory());
    computer->addMemory(m_builder->getMemory());
    computer->addStorage(m_builder->getStorage());

    return computer;
}
