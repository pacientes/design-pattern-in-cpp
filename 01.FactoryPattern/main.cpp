#include "VendingMachine.h"
#include "SimpleVendingMachine.h"

int main(int argc, char *argv[])
{
    auto machine = std::make_shared<SimpleVendingMachine>();

    auto water = machine->getDrink(DrinkType::Water);
    water->drink();

    auto cola = machine->getDrink(DrinkType::Cola);
    cola->drink();

    auto juice = machine->getDrink(DrinkType::Juice);
    juice->drink();

    return 0;
}
