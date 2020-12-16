#include "HelloLanguage.h"
#include "Factory.h"
#include "English.h"
#include "Korean.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Hello> hello = std::make_shared<Hello>();
    hello->greeting(LanguageType::Korean);
    hello->greeting(LanguageType::English);

    std::shared_ptr<SimpleHello> simpleHello;
    simpleHello->greeting();

    return 0;
}
