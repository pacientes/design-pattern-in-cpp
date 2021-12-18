#ifndef __STORAGE_H__
#define __STORAGE_H__

#include "Decorator.h"

class Storage : public Decorator
{
public:
    Storage(std::shared_ptr<Component> component);

    virtual const std::string product() override;

    virtual const int price() override;
};

#endif // __STORAGE_H__
