#ifndef __BUILDER_H__
#define __BUILDER_H__

#include "IBuilder.h"

class Builder : public IBuilder
{
public:
    virtual std::string getCpu() override;
    virtual std::shared_ptr<Memory> getMemory() override;
    virtual std::shared_ptr<Storage> getStorage() override;

private:
    std::shared_ptr<Computer> m_computer;
};

#endif // __BUILDER_H__
