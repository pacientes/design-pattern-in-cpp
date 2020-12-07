#include <iostream>

#include "Facade.h"

int main()
{
	std::shared_ptr<Facade> facade = std::make_shared<Facade>();
	facade->processAll();

	return 0;
}