#include <iostream>

#include "Facade.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Facade> facade = std::make_shared<Facade>();
    facade->processAll();

    return 0;
}
