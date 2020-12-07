#include "AppleFactory.h"
#include "LGFactory.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<IFactory> factory = std::make_shared<AppleFactory>();
    std::shared_ptr<IProduct> apple = factory->create();
    apple->name();

    factory.reset(new LGFactory);
    std::shared_ptr<IProduct> lg = factory->create();
    lg->name();

    return 0;
}
