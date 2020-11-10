#include "Factory.h"

int main(const int argc, const char* argv[])
{
	std::shared_ptr<Hello> hello = std::make_shared<Hello>();
	hello->greeting(LanguageType::Korean);
	hello->greeting(LanguageType::English);

	return 0;
}
