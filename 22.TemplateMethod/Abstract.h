#pragma once

#include <string>

class Abstract
{
public:
    std::string make()
    {
        std::string process = bread() + " + " + jam() + " + " + bread();

        return process;
    }

protected:
    virtual std::string bread() = 0;
    virtual std::string jam() = 0;
};
