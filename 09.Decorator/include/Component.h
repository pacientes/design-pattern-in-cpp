#ifndef __COMPONENT_H__
#define __COMPONENT_H__

#include <string>

class Component
{
public:
    virtual const std::string product() = 0;

    virtual const int price() = 0;

protected:
    std::string m_name;

    int m_price;
};

#endif // __COMPONENT_H__
