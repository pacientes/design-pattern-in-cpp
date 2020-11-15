#include "KoreaFactory.h"
#include "StateFactory.h"

int main(const int argc, const char* argv[])
{
	// Korea Factory
	std::shared_ptr<IFactory> factory = std::make_shared<KoreaFactory>();
	auto kDoor = factory->createDoor();
	kDoor->makeAssemble();

	auto kTire = factory->createTire();
	kTire->makeAssemble();

	std::cout << "\n\n" << std::endl;

	// USA Factory
	factory.reset(new StateFactory);
	auto uDoor = factory->createDoor();
	uDoor->makeAssemble();

	auto uTire = factory->createTire();
	uTire->makeAssemble();

	// 추상 클래스는 그룹을 나눠서 복수의 객체를 생성하는데 편리하다. (Door, Tire)
	// 그러나 새로운 객체를 추가한다면(ex, Engine)
	// IFactory, KoreaFactory, StateFactory에 생성 로직을...
	// IEngine, KoreaEngine, StateEngine을 추가해야하며, 이는 쉽지 않은 일이다.

	return 0;
}
