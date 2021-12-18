#include "Facade.h"

int main(int argc, char *argv[])
{
    auto facade = std::make_shared<Facade>();
    facade->processAll();

    return 0;
}
