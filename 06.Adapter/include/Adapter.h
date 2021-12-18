#ifndef __ADAPTER_H__
#define __ADAPTER_H__

#include "Target.h"
#include "Adaptee.h"

#include <memory>

class Adapter : public Target
{
public:
    Adapter();

    virtual int twoTime(int number) override;

    virtual int halfTime(int number) override;

private:
    std::shared_ptr<Adaptee> m_adaptee;
};

#endif // __ADAPTER_H__
