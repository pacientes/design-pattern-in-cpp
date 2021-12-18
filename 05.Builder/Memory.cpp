#include "Memory.h"

Memory::Memory(const int size)
{
    m_size = size;
}

void Memory::setSize(const int size)
{
    m_size = size;
}

int Memory::getSize() const
{
    return m_size;
}
