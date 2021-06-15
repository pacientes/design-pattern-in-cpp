#pragma once

#include <iostream>

#include "Computer.h"

class IBuilder
{
public:
    virtual std::shared_ptr<Computer> build() = 0;
};
