#include "WaterFactory.h"
#include "ColaFactory.h"
#include "JuiceFactory.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<IFactory> factory = std::make_shared<WaterFactory>();
    std::shared_ptr<IDrink> water = factory->create();
    water->drink();

    factory = std::make_shared<ColaFactory>();
    std::shared_ptr<IDrink> cola = factory->create();
    cola->drink();

    factory = std::make_shared<JuiceFactory>();
    std::shared_ptr<IDrink> juice = factory->create();
    juice->drink();

    return 0;
}
