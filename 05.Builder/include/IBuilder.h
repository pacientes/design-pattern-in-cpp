#ifndef __IBUILDER_H__
#define __IBUILDER_H__

#include "Computer.h"

class IBuilder
{
public:
    virtual std::string getCpu() = 0;
    virtual std::shared_ptr<Memory> getMemory() = 0;
    virtual std::shared_ptr<Storage> getStorage() = 0;
};

#endif // __IBUILDER_H__
