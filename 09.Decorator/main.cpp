#include "TShirt.h"
#include "YShirt.h"
#include "Storage.h"

#include <iostream>

int main(int argc, char *argv[])
{
    std::shared_ptr<Component> component = std::make_shared<Storage>(
        std::make_shared<Decorator>(
            std::make_shared<TShirt>()));

    std::cout << "[Product]: " << component->product() << std::endl;
    std::cout << "[Price]: " << component->price() << std::endl;

    return 0;
}
