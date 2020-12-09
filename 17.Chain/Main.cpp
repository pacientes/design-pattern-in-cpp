#include "Handler.h"

#include <iostream>

int main(const int argc, const char* argv[])
{
    auto handler = std::make_shared<Handler>();
    std::cout << handler->event("cancel") << std::endl;

    return 0;
}
