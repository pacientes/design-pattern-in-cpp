#ifndef __DIRECTORY_H__
#define __DIRECTORY_H__

#include "FileSystem.h"

#include <memory>
#include <vector>

class Directory : public FileSystem
{
public:
    Directory(const std::string &name);

    void addNode(std::shared_ptr<FileSystem> file_system);

    virtual void print(const int index = 0) override;

private:
    std::vector<std::shared_ptr<FileSystem>> m_composite;
};

#endif // __DIRECTORY_H__
