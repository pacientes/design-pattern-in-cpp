#include "Factory.h"

int main(const int argc, const char* argv[])
{
	// 팩토리 패턴
	std::shared_ptr<Hello> hello = std::make_shared<Hello>();
	hello->greeting(LanguageType::Korean);
	hello->greeting(LanguageType::English);

	// 심플 팩토리 패턴
	std::shared_ptr<SimpleHello> simpleHello;
	simpleHello->greeting();

	// 팩토리 패턴의 장/단점
	// 장점
	// 1. 생성과 관련된 모든 처리를 별도의 클래스로 위임한다.
	// 2. 유연성과 확장성이 개선된다.
	// 3. 어떤 객체를 생성할지 모르는 초반에 유용하다.

	// 단점
	// 1. 생성을 전담할 클래스가 생기므로, 관리해야하는 클래스가 늘어난다.

	return 0;
}
