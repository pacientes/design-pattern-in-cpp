#include "Hello.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Prototype> korea = std::make_shared<Hello>("Hello Korea");
    korea->setMessage("Hello Korea");
    std::cout << "Original message: " << korea->getMessage() << std::endl;

    // deep copy
    auto english = korea->clone();
    english->setMessage("Hello English");
    std::cout << "After shallow copied original message: " << korea->getMessage() << std::endl;
    std::cout << "english message: " << english->getMessage() << std::endl;

    return 0;

    Hello* pKorea = new Hello("");
}
