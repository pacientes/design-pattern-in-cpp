#ifndef __FILE_H__
#define __FILE_H__

#include "FileSystem.h"

class File : public FileSystem
{
public:
    File(const std::string &name);

    virtual void print(const int index) override;
};

#endif // __FILE_H__
