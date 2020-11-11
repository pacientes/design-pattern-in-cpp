#include "Factory.h"

int main(const int argc, const char* argv[])
{
	// 팩토리 메서드
	std::shared_ptr<Hello> hello = std::make_shared<Hello>();
	hello->greeting(LanguageType::Korean);
	hello->greeting(LanguageType::English);

	// 심플 팩토리 메서드
	std::shared_ptr<SimpleHello> simpleHello;
	simpleHello->greeting();

	return 0;
}
