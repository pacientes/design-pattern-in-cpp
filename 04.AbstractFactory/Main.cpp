#include "KoreaFactory.h"
#include "USAFactory.h"

int main(const int argc, const char* argv[])
{
    // Korea Factory
    std::shared_ptr<IFactory> factory = std::make_shared<KoreaFactory>();
    std::shared_ptr<IDoorProduct> kDoor = factory->createDoor();
    kDoor->makeAssemble();

    std::shared_ptr<ITireProduct> kTire = factory->createTire();
    kTire->makeAssemble();

    std::cout << "\n\n" << std::endl;

    // USA Factory
    factory.reset(new USAFactory);
    std::shared_ptr<IDoorProduct> uDoor = factory->createDoor();
    uDoor->makeAssemble();

    std::shared_ptr<ITireProduct> uTire = factory->createTire();
    uTire->makeAssemble();

    return 0;
}
