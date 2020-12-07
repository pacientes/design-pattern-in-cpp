#pragma once

#include <iostream>
#include <string>
#include <memory>

class Hello
{
public:
    virtual std::string greeting() = 0;
};
