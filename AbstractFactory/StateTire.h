#pragma once

#include "ITireProduct.h"

#include <iostream>

class StateTireProduct final :
	public ITireProduct
{
public:
	void makeAssemble() override
	{
		std::cout << "State Tire is assembled" << std::endl;
	}
};
