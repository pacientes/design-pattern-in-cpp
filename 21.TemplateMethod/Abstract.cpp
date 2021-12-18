#include "Abstract.h"

std::string Abstract::make()
{
    std::string process = bread() + " + " + jam() + " + " + bread();

    return process;
}
