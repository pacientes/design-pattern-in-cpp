#pragma once

#include <memory>

#include "Component.h"

// Decorator
class Decorator :
    public Component
{
public:
    Decorator(std::shared_ptr<Component> component) :
        m_component(component)
    {

    }

    std::string product()
    {
        return m_component->product();
    }

    int price()
    {
        return m_component->price();
    }

private:
    std::shared_ptr<Component> m_component;
};
