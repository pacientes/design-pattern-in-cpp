#include "Weapon.h"
#include "Strategy.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Charactor> charactor = std::make_shared<Charactor>();
    charactor->attack();

    std::shared_ptr<Knife> knife = std::make_shared<Knife>();
    charactor->setWeapon(knife);
    charactor->attack();

    std::shared_ptr<Gun> gun = std::make_shared<Gun>();
    charactor->setWeapon(gun);
    charactor->attack();

    return 0;
}
