#include "Decorator.h"

Decorator::Decorator(std::shared_ptr<Component> component)
{
    m_component = component;
}

const std::string Decorator::product()
{
    return m_component->product();
}

const int Decorator::price()
{
    return m_component->price();
}
