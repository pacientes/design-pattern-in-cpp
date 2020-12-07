#pragma once

#include <string>

// Component
class Component
{
public:
    virtual std::string product() = 0;
    virtual int price() = 0;
};
