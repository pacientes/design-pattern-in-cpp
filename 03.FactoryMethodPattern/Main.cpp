#include "WaterFactory.h"
#include "ColaFactory.h"
#include "JuiceFactory.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<IFactory> factory = std::make_shared<WaterFactory>();
    std::shared_ptr<IDrink> water = factory->getDrink();
    water->drink();

    factory = std::make_shared<ColaFactory>();
    std::shared_ptr<IDrink> cola = factory->getDrink();
    cola->drink();

    factory = std::make_shared<JuiceFactory>();
    std::shared_ptr<IDrink> juice = factory->getDrink();
    juice->drink();

    return 0;
}
