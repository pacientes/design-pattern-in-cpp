#include "ConcreteStrategy.h"
#include "ConcreteAlgorithm.h"

#include <memory>

int main(int argc, char *argv[])
{
    std::shared_ptr<Character> character = std::make_shared<Character>();
    character->attack();

    std::shared_ptr<Knife> knife = std::make_shared<Knife>();
    character->setWeapon(knife);
    character->attack();

    std::shared_ptr<Gun> gun = std::make_shared<Gun>();
    character->setWeapon(gun);
    character->attack();

    return 0;
}
