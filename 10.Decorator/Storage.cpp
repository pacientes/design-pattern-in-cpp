#include "Storage.h"

Storage::Storage(std::shared_ptr<Component> component) : Decorator(component)
{
    m_name = "SSD";
    m_price = 46000;
}

const std::string Storage::product()
{
    return Decorator::product() + ", " + m_name;
}

const int Storage::price()
{
    return Decorator::price() + m_price;
}
