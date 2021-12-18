#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "Component.h"

#include <memory>

class Decorator : public Component
{
public:
    Decorator(std::shared_ptr<Component> component);

    virtual const std::string product() override;

    virtual const int price() override;

private:
    std::shared_ptr<Component> m_component;
};

#endif // __DECORATOR_H__
