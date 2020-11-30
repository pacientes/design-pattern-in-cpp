#pragma once

#include "IDoorProduct.h"

#include <iostream>

class StateDoorProduct final :
	public IDoorProduct
{
public:
	void makeAssemble() override
	{
		std::cout << "State Door is assembled" << std::endl;
	}
};
