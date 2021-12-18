#include "Adapter.h"

Adapter::Adapter()
{
    m_adaptee = std::make_shared<Adaptee>();
}

int Adapter::twoTime(int number)
{
    float _number = m_adaptee->twoTime(static_cast<float>(number));
    return static_cast<int>(_number);
}

int Adapter::halfTime(int number)
{
    float _number = m_adaptee->halfTime(static_cast<float>(number));
    return static_cast<int>(_number);
}
