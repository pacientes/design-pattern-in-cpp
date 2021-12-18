#include "FileSystem.h"

void FileSystem::setName(const std::string &name)
{
    m_name = name;
}

const std::string &FileSystem::getName() const
{
    return m_name;
}
