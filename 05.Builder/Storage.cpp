#include "Storage.h"

Storage::Storage(const int size)
{
    m_size = size;
}

void Storage::setSize(const int size)
{
    m_size = size;
}

int Storage::getSize() const
{
    return m_size;
}
