#include "Algorithm.h"
#include "AlgorithmVector.h"
#include "IBuilder.h"
#include "Builder.h"
#include "Computer.h"

int main(const int argc, const char* argv[])
{
	// 빌더 패턴은 복합 객체를 생성하는 패턴이다.
	std::shared_ptr<Algorithm> algorithm = std::make_shared<AlgorithmVector>();
	std::shared_ptr<IBuilder> factory = std::make_shared<Builder>(algorithm);

	Computer computer = factory->build();
	computer.showInfo();

	return 0;
}