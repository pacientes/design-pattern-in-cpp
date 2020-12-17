#include "Abstract.h"
#include "Strawberry.h"
#include "StrawberryBagel.h"
#include "Blueberry.h"

#include <iostream>
#include <memory>

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Abstract> strawberry = std::make_shared<Strawberry>();
    std::string process = strawberry->make();
    std::cout << "[Strawberry] " << process << std::endl;

    std::shared_ptr<Abstract> strawberryBagel = std::make_shared<StrawberryBagel>();
    process = strawberryBagel->make();
    std::cout << "[StrawberryBagel] " << process << std::endl;

    std::shared_ptr<Abstract> blueberry = std::make_shared<Blueberry>();
    process = blueberry->make();
    std::cout << "[Blueberry] " << process << std::endl;

    return 0;
}
