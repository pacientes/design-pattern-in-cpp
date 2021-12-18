#include "Handler.h"

#include <iostream>
#include <memory>

int main(int argc, char *argv[])
{
    auto handler = std::make_shared<Handler>();
    std::cout << handler->event("cancel") << std::endl;

    return 0;
}
