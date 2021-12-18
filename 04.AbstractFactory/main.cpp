#include "KoreaFactory.h"
#include "USAFactory.h"

#include <iostream>

int main(int argc, char *argv[])
{
    auto korea_factory = std::make_shared<KoreaFactory>();
    auto korea_tire = korea_factory->createTire();
    auto korea_door = korea_factory->createDoor();

    std::cout << "\n\n"
              << std::endl;

    auto usa_factory = std::make_shared<USAFactory>();
    auto usa_tire = usa_factory->createTire();
    auto usa_door = usa_factory->createDoor();

    return 0;
}
