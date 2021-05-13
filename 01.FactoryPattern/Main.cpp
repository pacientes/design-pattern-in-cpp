#include "Factory.h"
#include "VendingMachine.h"

int main(const int argc, const char* argv[])
{
    VendingMachine machine;
    machine.getDrink(DrinkType::Water);

    machine.getDrink(DrinkType::Cola);
    machine.getDrink(DrinkType::Juice);

    return 0;
}
