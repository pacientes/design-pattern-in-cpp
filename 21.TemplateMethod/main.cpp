#include "Strawberry.h"
#include "Blueberry.h"

#include <iostream>
#include <memory>

int main(int argc, char *argv[])
{
    std::shared_ptr<Abstract> strawberry = std::make_shared<Strawberry>();
    std::string process = strawberry->make();
    std::cout << "[Strawberry] " << process << std::endl;

    std::shared_ptr<Abstract> blueberry = std::make_shared<Blueberry>();
    process = blueberry->make();
    std::cout << "[Blueberry] " << process << std::endl;

    std::shared_ptr<Abstract> blueberryBagel = std::make_shared<BlueberryBagel>();
    process = blueberryBagel->make();
    std::cout << "[BlueberryBagel] " << process << std::endl;

    return 0;
}
