#include "Directory.h"

#include <iostream>

Directory::Directory(const std::string &name)
{
    setName(name);
}

void Directory::addNode(std::shared_ptr<FileSystem> file_system)
{
    m_composite.push_back(file_system);
}

void Directory::print(const int index)
{
    for (int i = 0; i < index; i++)
    {
        std::cout << "\t";
    }
    std::cout << "Directory : " << getName() << std::endl;

    for (const auto &item : m_composite)
    {
        item->print(index + 1);
    }
}
